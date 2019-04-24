#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <regex>
#include <tree_sitter/parser.h>

#define DEBUG 0

namespace {

using std::vector;
using std::string;
using std::regex;

enum TokenType {
    // Tags (excluding base @api tag)
    IGNORE,
    DEFINE,
    DEPRECATED,
    DESCRIPTION,
    ERROR,
    ERROR_EXAMPLE,
    EXAMPLE,
    API_GROUP,
    HEADER,
    HEADER_EXAMPLE,
    API_NAME,
    PARAM,
    PARAM_EXAMPLE,
    PERMISSION,
    PRIVATE,
    SAMPLE_REQUEST,
    SUCCESS,
    SUCCESS_EXAMPLE,
    USE,
    VERSION,
    _TAG_COUNT, // Used only internally, will never appear in syntax tree

    // Parts
    GROUP,
    TYPE,
    NAME,
    TITLE,
    OFF,
    SEMVER,

    // Other
    API,
    _DOC_START,
    _DOC_END,
    _TEXT
};

const char whitespace[] = {
    '\t',
    ' ',
    '*'
};

const char newline[] = {
    '\r',
    '\n'
};

// May or may not be copied from tree-sitter-python ;)
struct Statinator {
    enum {
        LEVEL = 1 + 0x2 + 0x4,
        ECMA = 0x8,  // ECMA just means any /**/ type comments
        RUBY = 0x10,
        PYTHON = 0x20,
        PYTHON_ALT = 0x40,
        MASK = ECMA + RUBY + PYTHON + PYTHON_ALT
    };

    vector<vector<char>> types = {
        {
            ECMA,
            '/', '*',
            0,
            '*', '/'
        },
        {
            RUBY,
            '=', 'b', 'e', 'g', 'i', 'n',
            0,
            '=', 'e', 'n', 'd'
        },
        {
            PYTHON,
            '"', '"', '"',
            0,
            '"', '"', '"'
        },
        {
            PYTHON_ALT,
            '\'', '\'', '\'',
            0,
            '\'', '\'', '\''
        }
    };

    char flags;
    char tag;
    char tag_level;

    Statinator(): flags(0), tag(_TAG_COUNT), tag_level(0) {}

    bool in_comment() const
    {
        return flags > 0;
    }

    bool detect(TSLexer *lexer)
    {
        if (DEBUG) std::cout << "Inside statinator.detect()" << '\n';
        char potential_types = MASK;
        bool start = true;
        while (lexer->lookahead)
        {
            // Skip starting whitespace
            if (start)
            {
                if (memchr(newline, lexer->lookahead, sizeof newline) != NULL ||
                    memchr(whitespace, lexer->lookahead, sizeof whitespace) != NULL)
                {
                    lexer->advance(lexer, true);
                    continue;
                }
                start = false;
            }

            for (vector<char> vec: types)
            {
                char type = vec[0];
                // ensure type is still valid
                if (type & potential_types)
                {
                    // check if type has been found
                    char check = vec[(flags & LEVEL) + 1];
                    if (check == 0)
                    {
                        flags = type;
                        lexer->mark_end(lexer);
                        lexer->result_symbol = _DOC_START;
                        return true;
                    } else if (
                        lexer->lookahead != check &&
                        // does not match, X-out the type
                        (potential_types ^= type) == 0
                    ) {
                        // No remaining possible matches
                        break;
                    }
                }
            }
            flags++;
            lexer->advance(lexer, false);
        }
        flags = 0;
        return false;
    }

    bool check_end(TSLexer *lexer)
    {
        bool result = false;
        for (vector<char> vec: types)
        {
            if (vec[0] == flags) {
                int i = 2; // We should always be able to skip the first 2
                for (;vec[i++] != 0;); // Move to the first terminating character

                while (lexer->lookahead)
                {
                    if (lexer->lookahead == vec[i])
                    {
                        // Do not "consume" if using /**/ style comments, due to whitespace
                        result = flags != ECMA;
                        i++;

                        if (i == vec.size())
                        {
                            // Found the terminator
                            lexer->advance(lexer, false);
                            flags = 0;
                            lexer->result_symbol = _DOC_END;
                            return true;
                        }

                        lexer->advance(lexer, true);
                    } else {
                        break;
                    }
                }
                break;
            }
        }

        return result;
    }

    void clear_tag()
    {
        // We use _TAG_COUNT because nothing after this is a tag
        tag = _TAG_COUNT;
    }

};

struct Scanner {

    Statinator statinator;
    vector<string> tags;

    Scanner() {
        tags.resize(TokenType::_TAG_COUNT);

        #define TAG(type, text) fill_n(tags.begin() + TokenType::type, 1, text)
        TAG(IGNORE, "Ignore");
        TAG(DEFINE, "Define");
        TAG(DEPRECATED, "Deprecated");
        TAG(DESCRIPTION, "Description");
        TAG(ERROR, "Error");
        TAG(ERROR_EXAMPLE, "ErrorExample");
        TAG(EXAMPLE, "Example");
        TAG(API_GROUP, "Group");
        TAG(HEADER, "Header");
        TAG(HEADER_EXAMPLE, "HeaderExample");
        TAG(API_NAME, "Name");
        TAG(PARAM, "Param");
        TAG(PARAM_EXAMPLE, "ParamExample");
        TAG(PERMISSION, "Permission");
        TAG(PRIVATE, "Private");
        TAG(SAMPLE_REQUEST, "SampleRequest");
        TAG(SUCCESS, "Success");
        TAG(SUCCESS_EXAMPLE, "SuccessExample");
        TAG(USE, "Use");
        TAG(VERSION, "Version");
        #undef TAG
    }

    unsigned serialize(char *buffer)
    {
        buffer[0] = statinator.flags;
        buffer[1] = statinator.tag;
        buffer[2] = statinator.tag_level;
        return (sizeof statinator.flags) + (sizeof statinator.tag) + (sizeof statinator.tag_level);
    }

    void deserialize(const char *buffer, unsigned length)
    {
        if (length > 0)
        {
            statinator.flags = buffer[0];
            statinator.tag = buffer[1];
            statinator.tag_level = buffer[2];
        }
    }

    void advance(TSLexer *lexer)
    {
        lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer)
    {
        lexer->advance(lexer, true);
    }

    void mark_end(TSLexer *lexer)
    {
        lexer->mark_end(lexer);
    }

    bool scan_tag(TSLexer *lexer, const bool *valid_symbols)
    {
        if (lexer->lookahead != '@') return false;
        advance(lexer); if (lexer->lookahead != 'a') return false;
        advance(lexer); if (lexer->lookahead != 'p') return false;
        advance(lexer); if (lexer->lookahead != 'i') return false;
        advance(lexer);

        string tag;

        while (lexer->lookahead)
        {
            char lookahead = lexer->lookahead;

            // Stop consuming the moment whitespace is found
            if (memchr(newline, lookahead, sizeof newline) != NULL ||
                memchr(whitespace, lookahead, sizeof whitespace) != NULL)
            {
                break;
            }

            tag += lookahead;

            // Check that tag could still be a potential tag
            bool possible = false;
            for (string name: tags)
            {
                if (name.substr(0, tag.length()) == tag)
                {
                    possible = true;
                    break;
                }
            }

            if (!possible) return false;
            advance(lexer);
        }

        if (tag.length() == 0)
        {
            // Found the @api tag
            lexer->result_symbol = API;
            statinator.tag = API;
            return true;
        }

        for (int type = TokenType::IGNORE; type != TokenType::_TAG_COUNT; type++)
        {
            if (tags[type] == tag)
            {
                lexer->result_symbol = type;
                statinator.tag = type;
                return true;
            }
        }

        // Should never get this far, but whatevers
        return false;
    }

    bool scan_title(TSLexer *lexer, const bool *valid_symbols)
    {
        // Titles simply consume everything for the remainder of the line, pretty simple

        // Initially treat this as text, because it might only be whitespace here.
        lexer->result_symbol = _TEXT;

        while (lexer->lookahead)
        {
            if (memchr(newline, lexer->lookahead, sizeof newline) != NULL)
            {
                break;
            }
            advance(lexer);
            lexer->result_symbol = TITLE;
        }
        return true;
    }

    bool scan_name(TSLexer *lexer, const bool *valid_symbols)
    {
        // Names consume everything until whitespace or a newline is found.
        // For the cases of "optional" names, we also stop at the first '=' or ']'

        // Initially treat this as text, because it might only be whitespace here.
        lexer->result_symbol = _TEXT;

        while (lexer->lookahead)
        {
            if (lexer->lookahead == '=' || lexer->lookahead == ']' ||
                memchr(newline, lexer->lookahead, sizeof newline) != NULL ||
                memchr(whitespace, lexer->lookahead, sizeof whitespace) != NULL)
            {
                break;
            }
            advance(lexer);
            lexer->result_symbol = NAME;
        }
        return true;
    }

    bool scan_group(TSLexer *lexer, const bool *valid_symbols)
    {
        // Fine, I'll do it myself

        // Initially treat this as text, because it might be nothing here.
        lexer->result_symbol = _TEXT;
        bool has_text = false;

        while (lexer->lookahead)
        {
            if (memchr(newline, lexer->lookahead, sizeof newline) != NULL)
            {
                break;
            }

            if (lexer->lookahead == ')')
            {
                advance(lexer);
                break;
            }

            advance(lexer);
            has_text = true;
        }

        if (has_text)
        {
            lexer->result_symbol = GROUP;
        }

        return true;
    }

    bool scan_type(TSLexer *lexer, const bool *valid_symbols)
    {
        // Fine, I'll do it myself

        // Initially treat this as text, because it might be nothing here.
        lexer->result_symbol = _TEXT;
        bool has_text = false;
        int level = 0;

        // First character will be the opening '{' so we auto advance on it
        advance(lexer);

        while (lexer->lookahead)
        {
            if (memchr(newline, lexer->lookahead, sizeof newline) != NULL)
            {
                break;
            }

            if (lexer->lookahead == '}')
            {
                if (level == 0 || level == 2)
                {
                    advance(lexer);
                    break;
                }

                if (level == 1)
                {
                    // Ensures the second } found will stop character consumption
                    level = 2;
                }
            }

            if (lexer->lookahead == '{')
            {
                // This would break apiDoc, so we break too
                if (!has_text) break;
                if (level == 0) level = 1;
            }

            advance(lexer);
            has_text = true;
        }

        if (has_text)
        {
            lexer->result_symbol = TYPE;
        }
        return true;
    }

    bool scan_semver(TSLexer *lexer, const bool *valid_symbols)
    {
        lexer->result_symbol = NAME;
        string name = "";

        while (lexer->lookahead)
        {
            if (memchr(newline, lexer->lookahead, sizeof newline) != NULL ||
                memchr(whitespace, lexer->lookahead, sizeof whitespace) != NULL)
            {
                break;
            }
            name += lexer->lookahead;
            advance(lexer);
        }

        regex semver_regex("(0|[1-9]\\d*)\\.(0|[1-9]\\d*)\\.(0|[1-9]\\d*)(-[a-zA-Z\\d][-a-zA-Z.\\d]*)?(\\+[a-zA-Z\\d][-a-zA-Z.\\d]*)?");
        if (regex_match(name, semver_regex))
        {
            lexer->result_symbol = SEMVER;
        }

        return true;
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols)
    {
        if (DEBUG) std::cout << "Inside scanner" << '\n' << "Tag: " << (int)statinator.tag << '\n' << "Level: " << (int)statinator.tag_level << '\n';
        if (!lexer->lookahead) return false;

        // Scanning for comment start
        if (!statinator.in_comment())
        {
            return statinator.detect(lexer);
        } else {
            bool new_line = false;
            while (lexer->lookahead)
            {
                char lookahead = lexer->lookahead;

                // First: Check if on new line
                if (memchr(newline, lookahead, sizeof newline) != NULL)
                {
                    statinator.clear_tag();
                    statinator.tag_level = 0;
                    new_line = true;
                    skip(lexer);
                    continue;
                }

                // Second: Check for end of comment block
                if (statinator.check_end(lexer))
                {
                    // Characters were consumed, no longer a new line
                    new_line = false;

                    if (!statinator.in_comment())
                    {
                        return true;
                    }
                }

                // Third: Skip whitespace
                if (memchr(whitespace, lookahead, sizeof whitespace) != NULL)
                {
                    skip(lexer);
                    continue;
                }

                // Fourth: Check for tags, new line only
                if (new_line)
                {
                    new_line = false;
                    if (scan_tag(lexer, valid_symbols)) return true;
                }

                // Fifth: Try scanning for tag stuff when appropriate
                switch (statinator.tag) {
                    case API:
                    {
                        if (statinator.tag_level == 0)
                        {
                            statinator.tag_level++;
                            if (lookahead == '{') // Allow method capturing
                                return false;
                        }

                        if (statinator.tag_level == 1)
                        {
                            statinator.tag_level++;
                            if (lookahead == '/') // Allow path capturing
                                return false;
                        }

                        statinator.tag_level = 0;
                        statinator.clear_tag();
                        return scan_title(lexer, valid_symbols);
                    }

                    case DEFINE:
                    {
                        if (statinator.tag_level == 0)
                        {
                            statinator.tag_level++;
                            return scan_name(lexer, valid_symbols);
                        }

                        statinator.tag_level = 0;
                        statinator.clear_tag();
                        return scan_title(lexer, valid_symbols);
                    }

                    case IGNORE:
                    case DEPRECATED:
                    case DESCRIPTION:
                    case PRIVATE:
                        return scan_text(lexer, valid_symbols);

                    case ERROR:
                    case SUCCESS:
                    {
                        if (statinator.tag_level == 0)
                        {
                            statinator.tag_level++;
                            if (lookahead == '(')
                                return scan_group(lexer, valid_symbols);
                        }

                        if (statinator.tag_level == 1)
                        {
                            statinator.tag_level++;
                            if (lookahead == '{')
                                return scan_type(lexer, valid_symbols);
                        }

                        if (statinator.tag_level == 2)
                        {
                            statinator.tag_level++;
                            return scan_name(lexer, valid_symbols);
                        }

                        statinator.tag_level = 0;
                        statinator.clear_tag();
                        return scan_text(lexer, valid_symbols);
                    }

                    case ERROR_EXAMPLE:
                    case EXAMPLE:
                    case HEADER_EXAMPLE:
                    case PARAM_EXAMPLE:
                    case SUCCESS_EXAMPLE:
                    {
                        if (statinator.tag_level == 0)
                        {
                            statinator.tag_level++;
                            if (lookahead == '{')
                                return scan_type(lexer, valid_symbols);
                        }

                        statinator.tag_level = 0;
                        statinator.clear_tag();
                        return scan_title(lexer, valid_symbols);
                    }

                    case API_GROUP:
                    case API_NAME:
                    case PERMISSION:
                    case USE:
                    {
                        // Althought technically a "name", apiDoc treats the entire line as the name
                        statinator.clear_tag();
                        return scan_title(lexer, valid_symbols);
                    }

                    case HEADER:
                    case PARAM:
                    {
                        if (statinator.tag_level == 0)
                        {
                            statinator.tag_level++;
                            if (lookahead == '(')
                                return scan_group(lexer, valid_symbols);
                        }

                        if (statinator.tag_level == 1)
                        {
                            statinator.tag_level++;
                            if (lookahead == '{')
                                return scan_type(lexer, valid_symbols);
                        }

                        if (statinator.tag_level == 2)
                        {
                            statinator.tag_level++;
                            if (lookahead == '[')
                                return false; // Lets parameter get marked optional
                            return scan_name(lexer, valid_symbols);
                        }

                        statinator.tag_level = 0;
                        statinator.clear_tag();
                        return scan_text(lexer, valid_symbols);
                    }

                    case SAMPLE_REQUEST:
                    {
                        if (statinator.tag_level == 0)
                        {
                            statinator.tag_level++;
                            if (lookahead != 'o') return false; // Allow capturing url or path
                            advance(lexer); if (lexer->lookahead != 'f') return scan_text(lexer, valid_symbols);
                            advance(lexer); if (lexer->lookahead != 'f') return scan_text(lexer, valid_symbols);
                            advance(lexer);

                            if (memchr(newline, lexer->lookahead, sizeof newline) != NULL ||
                                memchr(whitespace, lexer->lookahead, sizeof whitespace) != NULL)
                            {
                                statinator.tag_level = 0;
                                statinator.clear_tag();
                                lexer->result_symbol = OFF;
                                return true;
                            }
                        }

                        statinator.tag_level = 0;
                        statinator.clear_tag();
                        return scan_text(lexer, valid_symbols);

                    }

                    case VERSION:
                    {
                        // Semver returns a NAME if the syntax doesn't line up
                        statinator.clear_tag();
                        return scan_semver(lexer, valid_symbols);
                    }
                }

                // No tree sitter, we can not highlight stuff just because you really want to
                return scan_text(lexer, valid_symbols);

            }
        }

        // Should never get this far but whatevers
        return false;
    }

    bool scan_text(TSLexer *lexer, const bool *valid_symbols)
    {
        /**
         * @apiIgnore      [text]
         * @apiDeprecated  [text]
         * @apiDescription [text]
         * @apiPrivate     [text]
         */

        // Do to the combined nature of apiDoc and tree-sitter, we simply
        // consume everything until a newline or the comment ends

        while (lexer->lookahead)
        {
            char lookahead = lexer->lookahead;

            // First: Check if on new line
            if (memchr(newline, lookahead, sizeof newline) != NULL)
            {
                break;
            }

            // Second: Check for end of comment block
            if (statinator.check_end(lexer))
            {
                if (!statinator.in_comment())
                {
                    return true;
                }
            }

            // Some other text, continue consuming
            advance(lexer);
        }

        lexer->result_symbol = _TEXT;
        return true;
    }

};

}

extern "C" {

    void *tree_sitter_apidoc_external_scanner_create()
    {
        return new Scanner();
    }

    bool tree_sitter_apidoc_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols)
    {
        Scanner *scanner = static_cast<Scanner *>(payload);
        bool result = scanner->scan(lexer, valid_symbols);
        if (DEBUG) std::cout << "returning: " << result << '\n';
        return result;
    }

    unsigned tree_sitter_apidoc_external_scanner_serialize(void *payload, char *buffer)
    {
        Scanner *scanner = static_cast<Scanner *>(payload);
        return scanner->serialize(buffer);
    }

    void tree_sitter_apidoc_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
    {
        Scanner *scanner = static_cast<Scanner *>(payload);
        scanner->deserialize(buffer, length);
    }

    void tree_sitter_apidoc_external_scanner_destroy(void *payload)
    {
        Scanner *scanner = static_cast<Scanner *>(payload);
        delete scanner;
    }

}
