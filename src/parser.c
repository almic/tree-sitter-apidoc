#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 43
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 31
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_LBRACE = 1,
  anon_sym_get = 2,
  anon_sym_head = 3,
  anon_sym_post = 4,
  anon_sym_put = 5,
  anon_sym_delete = 6,
  anon_sym_trace = 7,
  anon_sym_options = 8,
  anon_sym_connect = 9,
  anon_sym_patch = 10,
  anon_sym_RBRACE = 11,
  aux_sym_path_token1 = 12,
  aux_sym_url_token1 = 13,
  anon_sym_LBRACK = 14,
  anon_sym_EQ = 15,
  anon_sym_RBRACK = 16,
  aux_sym_default_token1 = 17,
  sym_ignore = 18,
  sym_define = 19,
  sym_deprecated = 20,
  sym_description = 21,
  sym_error = 22,
  sym_errorexample = 23,
  sym_example = 24,
  sym_apigroup = 25,
  sym_header = 26,
  sym_headerexample = 27,
  sym_apiname = 28,
  sym_param = 29,
  sym_paramexample = 30,
  sym_permission = 31,
  sym_private = 32,
  sym_samplerequest = 33,
  sym_success = 34,
  sym_successexample = 35,
  sym_use = 36,
  sym_version = 37,
  sym__tag_count = 38,
  sym_group = 39,
  sym_type = 40,
  sym_name = 41,
  sym_title = 42,
  sym_off = 43,
  sym_semver = 44,
  sym_api = 45,
  sym__doc_start = 46,
  sym__doc_end = 47,
  sym__text = 48,
  sym_apidoc = 49,
  sym__tag = 50,
  sym_method = 51,
  sym_path = 52,
  sym_url = 53,
  sym_parameter = 54,
  sym_optional = 55,
  sym_default = 56,
  aux_sym_apidoc_repeat1 = 57,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_get] = "get",
  [anon_sym_head] = "head",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_trace] = "trace",
  [anon_sym_options] = "options",
  [anon_sym_connect] = "connect",
  [anon_sym_patch] = "patch",
  [anon_sym_RBRACE] = "}",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_url_token1] = "url_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACK] = "]",
  [aux_sym_default_token1] = "default_token1",
  [sym_ignore] = "ignore",
  [sym_define] = "define",
  [sym_deprecated] = "deprecated",
  [sym_description] = "description",
  [sym_error] = "error",
  [sym_errorexample] = "errorexample",
  [sym_example] = "example",
  [sym_apigroup] = "apigroup",
  [sym_header] = "header",
  [sym_headerexample] = "headerexample",
  [sym_apiname] = "apiname",
  [sym_param] = "param",
  [sym_paramexample] = "paramexample",
  [sym_permission] = "permission",
  [sym_private] = "private",
  [sym_samplerequest] = "samplerequest",
  [sym_success] = "success",
  [sym_successexample] = "successexample",
  [sym_use] = "use",
  [sym_version] = "version",
  [sym__tag_count] = "_tag_count",
  [sym_group] = "group",
  [sym_type] = "type",
  [sym_name] = "name",
  [sym_title] = "title",
  [sym_off] = "off",
  [sym_semver] = "semver",
  [sym_api] = "api",
  [sym__doc_start] = "_doc_start",
  [sym__doc_end] = "_doc_end",
  [sym__text] = "_text",
  [sym_apidoc] = "apidoc",
  [sym__tag] = "_tag",
  [sym_method] = "method",
  [sym_path] = "path",
  [sym_url] = "url",
  [sym_parameter] = "parameter",
  [sym_optional] = "optional",
  [sym_default] = "default",
  [aux_sym_apidoc_repeat1] = "apidoc_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ignore] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_deprecated] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_errorexample] = {
    .visible = true,
    .named = true,
  },
  [sym_example] = {
    .visible = true,
    .named = true,
  },
  [sym_apigroup] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_headerexample] = {
    .visible = true,
    .named = true,
  },
  [sym_apiname] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_paramexample] = {
    .visible = true,
    .named = true,
  },
  [sym_permission] = {
    .visible = true,
    .named = true,
  },
  [sym_private] = {
    .visible = true,
    .named = true,
  },
  [sym_samplerequest] = {
    .visible = true,
    .named = true,
  },
  [sym_success] = {
    .visible = true,
    .named = true,
  },
  [sym_successexample] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_count] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_off] = {
    .visible = true,
    .named = true,
  },
  [sym_semver] = {
    .visible = true,
    .named = true,
  },
  [sym_api] = {
    .visible = true,
    .named = true,
  },
  [sym__doc_start] = {
    .visible = false,
    .named = true,
  },
  [sym__doc_end] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_apidoc] = {
    .visible = true,
    .named = true,
  },
  [sym__tag] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_apidoc_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = sym_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(6);
      if (lookahead == 'd')
        ADVANCE(7);
      if (lookahead == 'g')
        ADVANCE(8);
      if (lookahead == 'h')
        ADVANCE(9);
      if (lookahead == 'o')
        ADVANCE(10);
      if (lookahead == 'p')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 6:
      if (lookahead == 'o')
        ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'e')
        ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'e')
        ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'e')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'p')
        ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'o')
        ADVANCE(22);
      if (lookahead == 'u')
        ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'r')
        ADVANCE(24);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      if (lookahead == 'n')
        ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'l')
        ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'a')
        ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 't')
        ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 't')
        ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 's')
        ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 't')
        ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'a')
        ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'n')
        ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 28:
      if (lookahead == 'd')
        ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'p')
        ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'i')
        ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'c')
        ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 't')
        ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 34:
      if (lookahead == 'c')
        ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 't')
        ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 38:
      if (lookahead == ':')
        ADVANCE(45);
      if (lookahead == 's')
        ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'o')
        ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'h')
        ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'c')
        ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == '/')
        ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == ':')
        ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 50:
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 52:
      if (lookahead == '/')
        ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 's')
        ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(57);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_url_token1);
      END_STATE();
    case 58:
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == 'h')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == 't')
        ADVANCE(19);
      END_STATE();
    case 62:
      if (lookahead == 'c')
        ADVANCE(6);
      if (lookahead == 'd')
        ADVANCE(7);
      if (lookahead == 'g')
        ADVANCE(8);
      if (lookahead == 'h')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(10);
      if (lookahead == 'p')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == 'e')
        ADVANCE(18);
      END_STATE();
    case 64:
      if (lookahead == '=')
        ADVANCE(3);
      if (lookahead == ']')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      END_STATE();
    case 65:
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_default_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_default_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']')
        ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 4},
  [6] = {.lex_state = 58, .external_lex_state = 5},
  [7] = {.lex_state = 0, .external_lex_state = 6},
  [8] = {.lex_state = 0, .external_lex_state = 5},
  [9] = {.lex_state = 0, .external_lex_state = 7},
  [10] = {.lex_state = 0, .external_lex_state = 8},
  [11] = {.lex_state = 59, .external_lex_state = 7},
  [12] = {.lex_state = 60, .external_lex_state = 9},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 7},
  [16] = {.lex_state = 58, .external_lex_state = 10},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 11},
  [19] = {.lex_state = 58, .external_lex_state = 12},
  [20] = {.lex_state = 0, .external_lex_state = 10},
  [21] = {.lex_state = 0, .external_lex_state = 12},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 0, .external_lex_state = 7},
  [25] = {.lex_state = 59, .external_lex_state = 7},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 58, .external_lex_state = 12},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 0, .external_lex_state = 12},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 0, .external_lex_state = 7},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 66},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 59, .external_lex_state = 7},
  [40] = {.lex_state = 64},
  [41] = {.lex_state = 64},
  [42] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token_ignore = 0,
  ts_external_token_define = 1,
  ts_external_token_deprecated = 2,
  ts_external_token_description = 3,
  ts_external_token_error = 4,
  ts_external_token_errorexample = 5,
  ts_external_token_example = 6,
  ts_external_token_apigroup = 7,
  ts_external_token_header = 8,
  ts_external_token_headerexample = 9,
  ts_external_token_apiname = 10,
  ts_external_token_param = 11,
  ts_external_token_paramexample = 12,
  ts_external_token_permission = 13,
  ts_external_token_private = 14,
  ts_external_token_samplerequest = 15,
  ts_external_token_success = 16,
  ts_external_token_successexample = 17,
  ts_external_token_use = 18,
  ts_external_token_version = 19,
  ts_external_token__tag_count = 20,
  ts_external_token_group = 21,
  ts_external_token_type = 22,
  ts_external_token_name = 23,
  ts_external_token_title = 24,
  ts_external_token_off = 25,
  ts_external_token_semver = 26,
  ts_external_token_api = 27,
  ts_external_token__doc_start = 28,
  ts_external_token__doc_end = 29,
  ts_external_token__text = 30,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_ignore] = sym_ignore,
  [ts_external_token_define] = sym_define,
  [ts_external_token_deprecated] = sym_deprecated,
  [ts_external_token_description] = sym_description,
  [ts_external_token_error] = sym_error,
  [ts_external_token_errorexample] = sym_errorexample,
  [ts_external_token_example] = sym_example,
  [ts_external_token_apigroup] = sym_apigroup,
  [ts_external_token_header] = sym_header,
  [ts_external_token_headerexample] = sym_headerexample,
  [ts_external_token_apiname] = sym_apiname,
  [ts_external_token_param] = sym_param,
  [ts_external_token_paramexample] = sym_paramexample,
  [ts_external_token_permission] = sym_permission,
  [ts_external_token_private] = sym_private,
  [ts_external_token_samplerequest] = sym_samplerequest,
  [ts_external_token_success] = sym_success,
  [ts_external_token_successexample] = sym_successexample,
  [ts_external_token_use] = sym_use,
  [ts_external_token_version] = sym_version,
  [ts_external_token__tag_count] = sym__tag_count,
  [ts_external_token_group] = sym_group,
  [ts_external_token_type] = sym_type,
  [ts_external_token_name] = sym_name,
  [ts_external_token_title] = sym_title,
  [ts_external_token_off] = sym_off,
  [ts_external_token_semver] = sym_semver,
  [ts_external_token_api] = sym_api,
  [ts_external_token__doc_start] = sym__doc_start,
  [ts_external_token__doc_end] = sym__doc_end,
  [ts_external_token__text] = sym__text,
};

static bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_start] = true,
    [ts_external_token_off] = true,
    [ts_external_token_type] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_semver] = true,
    [ts_external_token_name] = true,
    [ts_external_token__tag_count] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_title] = true,
    [ts_external_token_group] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [2] = {
    [ts_external_token__doc_start] = true,
  },
  [3] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [4] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_type] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_title] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [5] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_name] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_type] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_group] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [6] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_semver] = true,
    [ts_external_token_name] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [7] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_title] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [8] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_name] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_title] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [9] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_off] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [10] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_name] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_type] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
  [11] = {
    [ts_external_token_name] = true,
  },
  [12] = {
    [ts_external_token_ignore] = true,
    [ts_external_token__doc_end] = true,
    [ts_external_token_name] = true,
    [ts_external_token_successexample] = true,
    [ts_external_token_private] = true,
    [ts_external_token_param] = true,
    [ts_external_token_header] = true,
    [ts_external_token_errorexample] = true,
    [ts_external_token_deprecated] = true,
    [ts_external_token_version] = true,
    [ts_external_token_success] = true,
    [ts_external_token_permission] = true,
    [ts_external_token_apiname] = true,
    [ts_external_token_apigroup] = true,
    [ts_external_token_error] = true,
    [ts_external_token_define] = true,
    [ts_external_token__text] = true,
    [ts_external_token_api] = true,
    [ts_external_token_use] = true,
    [ts_external_token_samplerequest] = true,
    [ts_external_token_paramexample] = true,
    [ts_external_token_headerexample] = true,
    [ts_external_token_example] = true,
    [ts_external_token_description] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_ignore] = ACTIONS(1),
    [sym_use] = ACTIONS(1),
    [sym_group] = ACTIONS(1),
    [sym_title] = ACTIONS(1),
    [sym_api] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [sym_permission] = ACTIONS(1),
    [sym_apiname] = ACTIONS(1),
    [sym_apigroup] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
    [sym_define] = ACTIONS(1),
    [sym_success] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_off] = ACTIONS(1),
    [sym__doc_start] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [sym_private] = ACTIONS(1),
    [sym_param] = ACTIONS(1),
    [sym_header] = ACTIONS(1),
    [sym_errorexample] = ACTIONS(1),
    [sym_deprecated] = ACTIONS(1),
    [sym_successexample] = ACTIONS(1),
    [sym__tag_count] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_semver] = ACTIONS(1),
    [sym__doc_end] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_url_token1] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [sym_samplerequest] = ACTIONS(1),
    [sym_paramexample] = ACTIONS(1),
    [sym_headerexample] = ACTIONS(1),
    [sym_example] = ACTIONS(1),
    [sym_description] = ACTIONS(1),
  },
  [1] = {
    [sym_apidoc] = STATE(3),
    [sym__doc_start] = ACTIONS(3),
  },
  [2] = {
    [aux_sym_apidoc_repeat1] = STATE(13),
    [sym__tag] = STATE(13),
    [sym_ignore] = ACTIONS(5),
    [sym__doc_end] = ACTIONS(7),
    [sym_successexample] = ACTIONS(9),
    [sym_private] = ACTIONS(5),
    [sym_param] = ACTIONS(11),
    [sym_header] = ACTIONS(11),
    [sym_errorexample] = ACTIONS(9),
    [sym_deprecated] = ACTIONS(5),
    [sym_version] = ACTIONS(13),
    [sym_success] = ACTIONS(15),
    [sym_permission] = ACTIONS(17),
    [sym_apiname] = ACTIONS(17),
    [sym_apigroup] = ACTIONS(17),
    [sym_error] = ACTIONS(15),
    [sym_define] = ACTIONS(19),
    [sym__text] = ACTIONS(5),
    [sym_api] = ACTIONS(21),
    [sym_use] = ACTIONS(17),
    [sym_samplerequest] = ACTIONS(23),
    [sym_paramexample] = ACTIONS(9),
    [sym_headerexample] = ACTIONS(9),
    [sym_example] = ACTIONS(9),
    [sym_description] = ACTIONS(5),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [5] = {
    [sym_ignore] = ACTIONS(29),
    [sym__doc_end] = ACTIONS(29),
    [sym_successexample] = ACTIONS(29),
    [sym_private] = ACTIONS(29),
    [sym_param] = ACTIONS(29),
    [sym_header] = ACTIONS(29),
    [sym_errorexample] = ACTIONS(29),
    [sym_deprecated] = ACTIONS(29),
    [sym_type] = ACTIONS(31),
    [sym_version] = ACTIONS(29),
    [sym_success] = ACTIONS(29),
    [sym_permission] = ACTIONS(29),
    [sym_apiname] = ACTIONS(29),
    [sym_apigroup] = ACTIONS(29),
    [sym_error] = ACTIONS(29),
    [sym_define] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
    [sym_api] = ACTIONS(29),
    [sym_title] = ACTIONS(33),
    [sym_use] = ACTIONS(29),
    [sym_samplerequest] = ACTIONS(29),
    [sym_paramexample] = ACTIONS(29),
    [sym_headerexample] = ACTIONS(29),
    [sym_example] = ACTIONS(29),
    [sym_description] = ACTIONS(29),
  },
  [6] = {
    [sym_optional] = STATE(17),
    [sym_parameter] = STATE(14),
    [sym_ignore] = ACTIONS(29),
    [sym__doc_end] = ACTIONS(29),
    [sym_name] = ACTIONS(35),
    [sym_successexample] = ACTIONS(29),
    [sym_private] = ACTIONS(29),
    [sym_param] = ACTIONS(29),
    [sym_header] = ACTIONS(29),
    [sym_errorexample] = ACTIONS(29),
    [sym_deprecated] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_type] = ACTIONS(39),
    [sym_version] = ACTIONS(29),
    [sym_success] = ACTIONS(29),
    [sym_permission] = ACTIONS(29),
    [sym_apiname] = ACTIONS(29),
    [sym_apigroup] = ACTIONS(29),
    [sym_error] = ACTIONS(29),
    [sym_define] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
    [sym_api] = ACTIONS(29),
    [sym_group] = ACTIONS(41),
    [sym_use] = ACTIONS(29),
    [sym_samplerequest] = ACTIONS(29),
    [sym_paramexample] = ACTIONS(29),
    [sym_headerexample] = ACTIONS(29),
    [sym_example] = ACTIONS(29),
    [sym_description] = ACTIONS(29),
  },
  [7] = {
    [sym_ignore] = ACTIONS(29),
    [sym__doc_end] = ACTIONS(29),
    [sym_semver] = ACTIONS(33),
    [sym_name] = ACTIONS(33),
    [sym_successexample] = ACTIONS(29),
    [sym_private] = ACTIONS(29),
    [sym_param] = ACTIONS(29),
    [sym_header] = ACTIONS(29),
    [sym_errorexample] = ACTIONS(29),
    [sym_deprecated] = ACTIONS(29),
    [sym_version] = ACTIONS(29),
    [sym_success] = ACTIONS(29),
    [sym_permission] = ACTIONS(29),
    [sym_apiname] = ACTIONS(29),
    [sym_apigroup] = ACTIONS(29),
    [sym_error] = ACTIONS(29),
    [sym_define] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
    [sym_api] = ACTIONS(29),
    [sym_use] = ACTIONS(29),
    [sym_samplerequest] = ACTIONS(29),
    [sym_paramexample] = ACTIONS(29),
    [sym_headerexample] = ACTIONS(29),
    [sym_example] = ACTIONS(29),
    [sym_description] = ACTIONS(29),
  },
  [8] = {
    [sym_ignore] = ACTIONS(29),
    [sym__doc_end] = ACTIONS(29),
    [sym_name] = ACTIONS(33),
    [sym_successexample] = ACTIONS(29),
    [sym_private] = ACTIONS(29),
    [sym_param] = ACTIONS(29),
    [sym_header] = ACTIONS(29),
    [sym_errorexample] = ACTIONS(29),
    [sym_deprecated] = ACTIONS(29),
    [sym_type] = ACTIONS(43),
    [sym_version] = ACTIONS(29),
    [sym_success] = ACTIONS(29),
    [sym_permission] = ACTIONS(29),
    [sym_apiname] = ACTIONS(29),
    [sym_apigroup] = ACTIONS(29),
    [sym_error] = ACTIONS(29),
    [sym_define] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
    [sym_api] = ACTIONS(29),
    [sym_group] = ACTIONS(45),
    [sym_use] = ACTIONS(29),
    [sym_samplerequest] = ACTIONS(29),
    [sym_paramexample] = ACTIONS(29),
    [sym_headerexample] = ACTIONS(29),
    [sym_example] = ACTIONS(29),
    [sym_description] = ACTIONS(29),
  },
  [9] = {
    [sym_ignore] = ACTIONS(29),
    [sym__doc_end] = ACTIONS(29),
    [sym_successexample] = ACTIONS(29),
    [sym_private] = ACTIONS(29),
    [sym_param] = ACTIONS(29),
    [sym_header] = ACTIONS(29),
    [sym_errorexample] = ACTIONS(29),
    [sym_deprecated] = ACTIONS(29),
    [sym_version] = ACTIONS(29),
    [sym_success] = ACTIONS(29),
    [sym_permission] = ACTIONS(29),
    [sym_apiname] = ACTIONS(29),
    [sym_apigroup] = ACTIONS(29),
    [sym_error] = ACTIONS(29),
    [sym_define] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
    [sym_api] = ACTIONS(29),
    [sym_title] = ACTIONS(47),
    [sym_use] = ACTIONS(29),
    [sym_samplerequest] = ACTIONS(29),
    [sym_paramexample] = ACTIONS(29),
    [sym_headerexample] = ACTIONS(29),
    [sym_example] = ACTIONS(29),
    [sym_description] = ACTIONS(29),
  },
  [10] = {
    [sym_ignore] = ACTIONS(29),
    [sym__doc_end] = ACTIONS(29),
    [sym_name] = ACTIONS(31),
    [sym_successexample] = ACTIONS(29),
    [sym_private] = ACTIONS(29),
    [sym_param] = ACTIONS(29),
    [sym_header] = ACTIONS(29),
    [sym_errorexample] = ACTIONS(29),
    [sym_deprecated] = ACTIONS(29),
    [sym_version] = ACTIONS(29),
    [sym_success] = ACTIONS(29),
    [sym_permission] = ACTIONS(29),
    [sym_apiname] = ACTIONS(29),
    [sym_apigroup] = ACTIONS(29),
    [sym_error] = ACTIONS(29),
    [sym_define] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
    [sym_api] = ACTIONS(29),
    [sym_title] = ACTIONS(33),
    [sym_use] = ACTIONS(29),
    [sym_samplerequest] = ACTIONS(29),
    [sym_paramexample] = ACTIONS(29),
    [sym_headerexample] = ACTIONS(29),
    [sym_example] = ACTIONS(29),
    [sym_description] = ACTIONS(29),
  },
  [11] = {
    [sym_method] = STATE(25),
    [sym_path] = STATE(15),
    [sym_ignore] = ACTIONS(29),
    [sym__doc_end] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_successexample] = ACTIONS(29),
    [sym_private] = ACTIONS(29),
    [sym_param] = ACTIONS(29),
    [sym_header] = ACTIONS(29),
    [sym_errorexample] = ACTIONS(29),
    [sym_deprecated] = ACTIONS(29),
    [aux_sym_path_token1] = ACTIONS(51),
    [sym_version] = ACTIONS(29),
    [sym_success] = ACTIONS(29),
    [sym_permission] = ACTIONS(29),
    [sym_apiname] = ACTIONS(29),
    [sym_apigroup] = ACTIONS(29),
    [sym_error] = ACTIONS(29),
    [sym_define] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
    [sym_api] = ACTIONS(29),
    [sym_title] = ACTIONS(33),
    [sym_use] = ACTIONS(29),
    [sym_samplerequest] = ACTIONS(29),
    [sym_paramexample] = ACTIONS(29),
    [sym_headerexample] = ACTIONS(29),
    [sym_example] = ACTIONS(29),
    [sym_description] = ACTIONS(29),
  },
  [12] = {
    [sym_path] = STATE(14),
    [sym_url] = STATE(14),
    [sym_ignore] = ACTIONS(29),
    [sym__doc_end] = ACTIONS(29),
    [sym_successexample] = ACTIONS(29),
    [sym_private] = ACTIONS(29),
    [sym_param] = ACTIONS(29),
    [sym_header] = ACTIONS(29),
    [sym_errorexample] = ACTIONS(29),
    [sym_deprecated] = ACTIONS(29),
    [aux_sym_path_token1] = ACTIONS(53),
    [sym_off] = ACTIONS(33),
    [sym_version] = ACTIONS(29),
    [sym_success] = ACTIONS(29),
    [sym_permission] = ACTIONS(29),
    [sym_apiname] = ACTIONS(29),
    [sym_apigroup] = ACTIONS(29),
    [sym_error] = ACTIONS(29),
    [sym_define] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
    [sym_api] = ACTIONS(29),
    [aux_sym_url_token1] = ACTIONS(55),
    [sym_use] = ACTIONS(29),
    [sym_samplerequest] = ACTIONS(29),
    [sym_paramexample] = ACTIONS(29),
    [sym_headerexample] = ACTIONS(29),
    [sym_example] = ACTIONS(29),
    [sym_description] = ACTIONS(29),
  },
  [13] = {
    [aux_sym_apidoc_repeat1] = STATE(29),
    [sym__tag] = STATE(29),
    [sym_ignore] = ACTIONS(57),
    [sym__doc_end] = ACTIONS(59),
    [sym_successexample] = ACTIONS(9),
    [sym_private] = ACTIONS(57),
    [sym_param] = ACTIONS(11),
    [sym_header] = ACTIONS(11),
    [sym_errorexample] = ACTIONS(9),
    [sym_deprecated] = ACTIONS(57),
    [sym_version] = ACTIONS(13),
    [sym_success] = ACTIONS(15),
    [sym_permission] = ACTIONS(17),
    [sym_apiname] = ACTIONS(17),
    [sym_apigroup] = ACTIONS(17),
    [sym_error] = ACTIONS(15),
    [sym_define] = ACTIONS(19),
    [sym__text] = ACTIONS(57),
    [sym_api] = ACTIONS(21),
    [sym_use] = ACTIONS(17),
    [sym_samplerequest] = ACTIONS(23),
    [sym_paramexample] = ACTIONS(9),
    [sym_headerexample] = ACTIONS(9),
    [sym_example] = ACTIONS(9),
    [sym_description] = ACTIONS(57),
  },
  [14] = {
    [sym_ignore] = ACTIONS(61),
    [sym__doc_end] = ACTIONS(61),
    [sym_successexample] = ACTIONS(61),
    [sym_private] = ACTIONS(61),
    [sym_param] = ACTIONS(61),
    [sym_header] = ACTIONS(61),
    [sym_errorexample] = ACTIONS(61),
    [sym_deprecated] = ACTIONS(61),
    [sym_version] = ACTIONS(61),
    [sym_success] = ACTIONS(61),
    [sym_permission] = ACTIONS(61),
    [sym_apiname] = ACTIONS(61),
    [sym_apigroup] = ACTIONS(61),
    [sym_error] = ACTIONS(61),
    [sym_define] = ACTIONS(61),
    [sym__text] = ACTIONS(61),
    [sym_api] = ACTIONS(61),
    [sym_use] = ACTIONS(61),
    [sym_samplerequest] = ACTIONS(61),
    [sym_paramexample] = ACTIONS(61),
    [sym_headerexample] = ACTIONS(61),
    [sym_example] = ACTIONS(61),
    [sym_description] = ACTIONS(61),
  },
  [15] = {
    [sym_ignore] = ACTIONS(61),
    [sym__doc_end] = ACTIONS(61),
    [sym_successexample] = ACTIONS(61),
    [sym_private] = ACTIONS(61),
    [sym_param] = ACTIONS(61),
    [sym_header] = ACTIONS(61),
    [sym_errorexample] = ACTIONS(61),
    [sym_deprecated] = ACTIONS(61),
    [sym_version] = ACTIONS(61),
    [sym_success] = ACTIONS(61),
    [sym_permission] = ACTIONS(61),
    [sym_apiname] = ACTIONS(61),
    [sym_apigroup] = ACTIONS(61),
    [sym_error] = ACTIONS(61),
    [sym_define] = ACTIONS(61),
    [sym__text] = ACTIONS(61),
    [sym_api] = ACTIONS(61),
    [sym_title] = ACTIONS(63),
    [sym_use] = ACTIONS(61),
    [sym_samplerequest] = ACTIONS(61),
    [sym_paramexample] = ACTIONS(61),
    [sym_headerexample] = ACTIONS(61),
    [sym_example] = ACTIONS(61),
    [sym_description] = ACTIONS(61),
  },
  [16] = {
    [sym_optional] = STATE(17),
    [sym_parameter] = STATE(30),
    [sym_ignore] = ACTIONS(61),
    [sym__doc_end] = ACTIONS(61),
    [sym_name] = ACTIONS(35),
    [sym_successexample] = ACTIONS(61),
    [sym_private] = ACTIONS(61),
    [sym_param] = ACTIONS(61),
    [sym_header] = ACTIONS(61),
    [sym_errorexample] = ACTIONS(61),
    [sym_deprecated] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_type] = ACTIONS(65),
    [sym_version] = ACTIONS(61),
    [sym_success] = ACTIONS(61),
    [sym_permission] = ACTIONS(61),
    [sym_apiname] = ACTIONS(61),
    [sym_apigroup] = ACTIONS(61),
    [sym_error] = ACTIONS(61),
    [sym_define] = ACTIONS(61),
    [sym__text] = ACTIONS(61),
    [sym_api] = ACTIONS(61),
    [sym_use] = ACTIONS(61),
    [sym_samplerequest] = ACTIONS(61),
    [sym_paramexample] = ACTIONS(61),
    [sym_headerexample] = ACTIONS(61),
    [sym_example] = ACTIONS(61),
    [sym_description] = ACTIONS(61),
  },
  [17] = {
    [sym_ignore] = ACTIONS(67),
    [sym__doc_end] = ACTIONS(67),
    [sym_successexample] = ACTIONS(67),
    [sym_private] = ACTIONS(67),
    [sym_param] = ACTIONS(67),
    [sym_header] = ACTIONS(67),
    [sym_errorexample] = ACTIONS(67),
    [sym_deprecated] = ACTIONS(67),
    [sym_version] = ACTIONS(67),
    [sym_success] = ACTIONS(67),
    [sym_permission] = ACTIONS(67),
    [sym_apiname] = ACTIONS(67),
    [sym_apigroup] = ACTIONS(67),
    [sym_error] = ACTIONS(67),
    [sym_define] = ACTIONS(67),
    [sym__text] = ACTIONS(67),
    [sym_api] = ACTIONS(67),
    [sym_use] = ACTIONS(67),
    [sym_samplerequest] = ACTIONS(67),
    [sym_paramexample] = ACTIONS(67),
    [sym_headerexample] = ACTIONS(67),
    [sym_example] = ACTIONS(67),
    [sym_description] = ACTIONS(67),
  },
  [18] = {
    [sym_name] = ACTIONS(69),
  },
  [19] = {
    [sym_optional] = STATE(17),
    [sym_parameter] = STATE(30),
    [sym_ignore] = ACTIONS(61),
    [sym__doc_end] = ACTIONS(61),
    [sym_name] = ACTIONS(35),
    [sym_successexample] = ACTIONS(61),
    [sym_private] = ACTIONS(61),
    [sym_param] = ACTIONS(61),
    [sym_header] = ACTIONS(61),
    [sym_errorexample] = ACTIONS(61),
    [sym_deprecated] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_version] = ACTIONS(61),
    [sym_success] = ACTIONS(61),
    [sym_permission] = ACTIONS(61),
    [sym_apiname] = ACTIONS(61),
    [sym_apigroup] = ACTIONS(61),
    [sym_error] = ACTIONS(61),
    [sym_define] = ACTIONS(61),
    [sym__text] = ACTIONS(61),
    [sym_api] = ACTIONS(61),
    [sym_use] = ACTIONS(61),
    [sym_samplerequest] = ACTIONS(61),
    [sym_paramexample] = ACTIONS(61),
    [sym_headerexample] = ACTIONS(61),
    [sym_example] = ACTIONS(61),
    [sym_description] = ACTIONS(61),
  },
  [20] = {
    [sym_ignore] = ACTIONS(61),
    [sym__doc_end] = ACTIONS(61),
    [sym_name] = ACTIONS(63),
    [sym_successexample] = ACTIONS(61),
    [sym_private] = ACTIONS(61),
    [sym_param] = ACTIONS(61),
    [sym_header] = ACTIONS(61),
    [sym_errorexample] = ACTIONS(61),
    [sym_deprecated] = ACTIONS(61),
    [sym_type] = ACTIONS(71),
    [sym_version] = ACTIONS(61),
    [sym_success] = ACTIONS(61),
    [sym_permission] = ACTIONS(61),
    [sym_apiname] = ACTIONS(61),
    [sym_apigroup] = ACTIONS(61),
    [sym_error] = ACTIONS(61),
    [sym_define] = ACTIONS(61),
    [sym__text] = ACTIONS(61),
    [sym_api] = ACTIONS(61),
    [sym_use] = ACTIONS(61),
    [sym_samplerequest] = ACTIONS(61),
    [sym_paramexample] = ACTIONS(61),
    [sym_headerexample] = ACTIONS(61),
    [sym_example] = ACTIONS(61),
    [sym_description] = ACTIONS(61),
  },
  [21] = {
    [sym_ignore] = ACTIONS(61),
    [sym__doc_end] = ACTIONS(61),
    [sym_name] = ACTIONS(63),
    [sym_successexample] = ACTIONS(61),
    [sym_private] = ACTIONS(61),
    [sym_param] = ACTIONS(61),
    [sym_header] = ACTIONS(61),
    [sym_errorexample] = ACTIONS(61),
    [sym_deprecated] = ACTIONS(61),
    [sym_version] = ACTIONS(61),
    [sym_success] = ACTIONS(61),
    [sym_permission] = ACTIONS(61),
    [sym_apiname] = ACTIONS(61),
    [sym_apigroup] = ACTIONS(61),
    [sym_error] = ACTIONS(61),
    [sym_define] = ACTIONS(61),
    [sym__text] = ACTIONS(61),
    [sym_api] = ACTIONS(61),
    [sym_use] = ACTIONS(61),
    [sym_samplerequest] = ACTIONS(61),
    [sym_paramexample] = ACTIONS(61),
    [sym_headerexample] = ACTIONS(61),
    [sym_example] = ACTIONS(61),
    [sym_description] = ACTIONS(61),
  },
  [22] = {
    [sym_ignore] = ACTIONS(73),
    [sym__doc_end] = ACTIONS(73),
    [sym_successexample] = ACTIONS(73),
    [sym_private] = ACTIONS(73),
    [sym_param] = ACTIONS(73),
    [sym_header] = ACTIONS(73),
    [sym_errorexample] = ACTIONS(73),
    [sym_deprecated] = ACTIONS(73),
    [sym_version] = ACTIONS(73),
    [sym_success] = ACTIONS(73),
    [sym_permission] = ACTIONS(73),
    [sym_apiname] = ACTIONS(73),
    [sym_apigroup] = ACTIONS(73),
    [sym_error] = ACTIONS(73),
    [sym_define] = ACTIONS(73),
    [sym__text] = ACTIONS(73),
    [sym_api] = ACTIONS(73),
    [sym_use] = ACTIONS(73),
    [sym_samplerequest] = ACTIONS(73),
    [sym_paramexample] = ACTIONS(73),
    [sym_headerexample] = ACTIONS(73),
    [sym_example] = ACTIONS(73),
    [sym_description] = ACTIONS(73),
  },
  [23] = {
    [anon_sym_put] = ACTIONS(75),
    [anon_sym_patch] = ACTIONS(75),
    [anon_sym_post] = ACTIONS(75),
    [anon_sym_delete] = ACTIONS(75),
    [anon_sym_get] = ACTIONS(75),
    [anon_sym_trace] = ACTIONS(75),
    [anon_sym_connect] = ACTIONS(75),
    [anon_sym_head] = ACTIONS(75),
    [anon_sym_options] = ACTIONS(75),
  },
  [24] = {
    [sym_ignore] = ACTIONS(77),
    [sym__doc_end] = ACTIONS(77),
    [sym_successexample] = ACTIONS(77),
    [sym_private] = ACTIONS(77),
    [sym_param] = ACTIONS(77),
    [sym_header] = ACTIONS(77),
    [sym_errorexample] = ACTIONS(77),
    [sym_deprecated] = ACTIONS(77),
    [sym_version] = ACTIONS(77),
    [sym_success] = ACTIONS(77),
    [sym_permission] = ACTIONS(77),
    [sym_apiname] = ACTIONS(77),
    [sym_apigroup] = ACTIONS(77),
    [sym_error] = ACTIONS(77),
    [sym_define] = ACTIONS(77),
    [sym__text] = ACTIONS(77),
    [sym_api] = ACTIONS(77),
    [sym_title] = ACTIONS(77),
    [sym_use] = ACTIONS(77),
    [sym_samplerequest] = ACTIONS(77),
    [sym_paramexample] = ACTIONS(77),
    [sym_headerexample] = ACTIONS(77),
    [sym_example] = ACTIONS(77),
    [sym_description] = ACTIONS(77),
  },
  [25] = {
    [sym_path] = STATE(35),
    [sym_ignore] = ACTIONS(61),
    [sym__doc_end] = ACTIONS(61),
    [sym_successexample] = ACTIONS(61),
    [sym_private] = ACTIONS(61),
    [sym_param] = ACTIONS(61),
    [sym_header] = ACTIONS(61),
    [sym_errorexample] = ACTIONS(61),
    [sym_deprecated] = ACTIONS(61),
    [aux_sym_path_token1] = ACTIONS(51),
    [sym_version] = ACTIONS(61),
    [sym_success] = ACTIONS(61),
    [sym_permission] = ACTIONS(61),
    [sym_apiname] = ACTIONS(61),
    [sym_apigroup] = ACTIONS(61),
    [sym_error] = ACTIONS(61),
    [sym_define] = ACTIONS(61),
    [sym__text] = ACTIONS(61),
    [sym_api] = ACTIONS(61),
    [sym_title] = ACTIONS(63),
    [sym_use] = ACTIONS(61),
    [sym_samplerequest] = ACTIONS(61),
    [sym_paramexample] = ACTIONS(61),
    [sym_headerexample] = ACTIONS(61),
    [sym_example] = ACTIONS(61),
    [sym_description] = ACTIONS(61),
  },
  [26] = {
    [sym_ignore] = ACTIONS(79),
    [sym__doc_end] = ACTIONS(79),
    [sym_successexample] = ACTIONS(79),
    [sym_private] = ACTIONS(79),
    [sym_param] = ACTIONS(79),
    [sym_header] = ACTIONS(79),
    [sym_errorexample] = ACTIONS(79),
    [sym_deprecated] = ACTIONS(79),
    [sym_version] = ACTIONS(79),
    [sym_success] = ACTIONS(79),
    [sym_permission] = ACTIONS(79),
    [sym_apiname] = ACTIONS(79),
    [sym_apigroup] = ACTIONS(79),
    [sym_error] = ACTIONS(79),
    [sym_define] = ACTIONS(79),
    [sym__text] = ACTIONS(79),
    [sym_api] = ACTIONS(79),
    [sym_use] = ACTIONS(79),
    [sym_samplerequest] = ACTIONS(79),
    [sym_paramexample] = ACTIONS(79),
    [sym_headerexample] = ACTIONS(79),
    [sym_example] = ACTIONS(79),
    [sym_description] = ACTIONS(79),
  },
  [27] = {
    [sym_ignore] = ACTIONS(77),
    [sym__doc_end] = ACTIONS(77),
    [sym_successexample] = ACTIONS(77),
    [sym_private] = ACTIONS(77),
    [sym_param] = ACTIONS(77),
    [sym_header] = ACTIONS(77),
    [sym_errorexample] = ACTIONS(77),
    [sym_deprecated] = ACTIONS(77),
    [sym_version] = ACTIONS(77),
    [sym_success] = ACTIONS(77),
    [sym_permission] = ACTIONS(77),
    [sym_apiname] = ACTIONS(77),
    [sym_apigroup] = ACTIONS(77),
    [sym_error] = ACTIONS(77),
    [sym_define] = ACTIONS(77),
    [sym__text] = ACTIONS(77),
    [sym_api] = ACTIONS(77),
    [sym_use] = ACTIONS(77),
    [sym_samplerequest] = ACTIONS(77),
    [sym_paramexample] = ACTIONS(77),
    [sym_headerexample] = ACTIONS(77),
    [sym_example] = ACTIONS(77),
    [sym_description] = ACTIONS(77),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(81),
  },
  [29] = {
    [aux_sym_apidoc_repeat1] = STATE(29),
    [sym__tag] = STATE(29),
    [sym_ignore] = ACTIONS(83),
    [sym__doc_end] = ACTIONS(86),
    [sym_successexample] = ACTIONS(88),
    [sym_private] = ACTIONS(83),
    [sym_param] = ACTIONS(91),
    [sym_header] = ACTIONS(91),
    [sym_errorexample] = ACTIONS(88),
    [sym_deprecated] = ACTIONS(83),
    [sym_version] = ACTIONS(94),
    [sym_success] = ACTIONS(97),
    [sym_permission] = ACTIONS(100),
    [sym_apiname] = ACTIONS(100),
    [sym_apigroup] = ACTIONS(100),
    [sym_error] = ACTIONS(97),
    [sym_define] = ACTIONS(103),
    [sym__text] = ACTIONS(83),
    [sym_api] = ACTIONS(106),
    [sym_use] = ACTIONS(100),
    [sym_samplerequest] = ACTIONS(109),
    [sym_paramexample] = ACTIONS(88),
    [sym_headerexample] = ACTIONS(88),
    [sym_example] = ACTIONS(88),
    [sym_description] = ACTIONS(83),
  },
  [30] = {
    [sym_ignore] = ACTIONS(112),
    [sym__doc_end] = ACTIONS(112),
    [sym_successexample] = ACTIONS(112),
    [sym_private] = ACTIONS(112),
    [sym_param] = ACTIONS(112),
    [sym_header] = ACTIONS(112),
    [sym_errorexample] = ACTIONS(112),
    [sym_deprecated] = ACTIONS(112),
    [sym_version] = ACTIONS(112),
    [sym_success] = ACTIONS(112),
    [sym_permission] = ACTIONS(112),
    [sym_apiname] = ACTIONS(112),
    [sym_apigroup] = ACTIONS(112),
    [sym_error] = ACTIONS(112),
    [sym_define] = ACTIONS(112),
    [sym__text] = ACTIONS(112),
    [sym_api] = ACTIONS(112),
    [sym_use] = ACTIONS(112),
    [sym_samplerequest] = ACTIONS(112),
    [sym_paramexample] = ACTIONS(112),
    [sym_headerexample] = ACTIONS(112),
    [sym_example] = ACTIONS(112),
    [sym_description] = ACTIONS(112),
  },
  [31] = {
    [sym_optional] = STATE(17),
    [sym_parameter] = STATE(36),
    [sym_ignore] = ACTIONS(112),
    [sym__doc_end] = ACTIONS(112),
    [sym_name] = ACTIONS(35),
    [sym_successexample] = ACTIONS(112),
    [sym_private] = ACTIONS(112),
    [sym_param] = ACTIONS(112),
    [sym_header] = ACTIONS(112),
    [sym_errorexample] = ACTIONS(112),
    [sym_deprecated] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_version] = ACTIONS(112),
    [sym_success] = ACTIONS(112),
    [sym_permission] = ACTIONS(112),
    [sym_apiname] = ACTIONS(112),
    [sym_apigroup] = ACTIONS(112),
    [sym_error] = ACTIONS(112),
    [sym_define] = ACTIONS(112),
    [sym__text] = ACTIONS(112),
    [sym_api] = ACTIONS(112),
    [sym_use] = ACTIONS(112),
    [sym_samplerequest] = ACTIONS(112),
    [sym_paramexample] = ACTIONS(112),
    [sym_headerexample] = ACTIONS(112),
    [sym_example] = ACTIONS(112),
    [sym_description] = ACTIONS(112),
  },
  [32] = {
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(116),
  },
  [33] = {
    [sym_ignore] = ACTIONS(112),
    [sym__doc_end] = ACTIONS(112),
    [sym_name] = ACTIONS(118),
    [sym_successexample] = ACTIONS(112),
    [sym_private] = ACTIONS(112),
    [sym_param] = ACTIONS(112),
    [sym_header] = ACTIONS(112),
    [sym_errorexample] = ACTIONS(112),
    [sym_deprecated] = ACTIONS(112),
    [sym_version] = ACTIONS(112),
    [sym_success] = ACTIONS(112),
    [sym_permission] = ACTIONS(112),
    [sym_apiname] = ACTIONS(112),
    [sym_apigroup] = ACTIONS(112),
    [sym_error] = ACTIONS(112),
    [sym_define] = ACTIONS(112),
    [sym__text] = ACTIONS(112),
    [sym_api] = ACTIONS(112),
    [sym_use] = ACTIONS(112),
    [sym_samplerequest] = ACTIONS(112),
    [sym_paramexample] = ACTIONS(112),
    [sym_headerexample] = ACTIONS(112),
    [sym_example] = ACTIONS(112),
    [sym_description] = ACTIONS(112),
  },
  [34] = {
    [anon_sym_RBRACE] = ACTIONS(120),
  },
  [35] = {
    [sym_ignore] = ACTIONS(112),
    [sym__doc_end] = ACTIONS(112),
    [sym_successexample] = ACTIONS(112),
    [sym_private] = ACTIONS(112),
    [sym_param] = ACTIONS(112),
    [sym_header] = ACTIONS(112),
    [sym_errorexample] = ACTIONS(112),
    [sym_deprecated] = ACTIONS(112),
    [sym_version] = ACTIONS(112),
    [sym_success] = ACTIONS(112),
    [sym_permission] = ACTIONS(112),
    [sym_apiname] = ACTIONS(112),
    [sym_apigroup] = ACTIONS(112),
    [sym_error] = ACTIONS(112),
    [sym_define] = ACTIONS(112),
    [sym__text] = ACTIONS(112),
    [sym_api] = ACTIONS(112),
    [sym_title] = ACTIONS(118),
    [sym_use] = ACTIONS(112),
    [sym_samplerequest] = ACTIONS(112),
    [sym_paramexample] = ACTIONS(112),
    [sym_headerexample] = ACTIONS(112),
    [sym_example] = ACTIONS(112),
    [sym_description] = ACTIONS(112),
  },
  [36] = {
    [sym_ignore] = ACTIONS(122),
    [sym__doc_end] = ACTIONS(122),
    [sym_successexample] = ACTIONS(122),
    [sym_private] = ACTIONS(122),
    [sym_param] = ACTIONS(122),
    [sym_header] = ACTIONS(122),
    [sym_errorexample] = ACTIONS(122),
    [sym_deprecated] = ACTIONS(122),
    [sym_version] = ACTIONS(122),
    [sym_success] = ACTIONS(122),
    [sym_permission] = ACTIONS(122),
    [sym_apiname] = ACTIONS(122),
    [sym_apigroup] = ACTIONS(122),
    [sym_error] = ACTIONS(122),
    [sym_define] = ACTIONS(122),
    [sym__text] = ACTIONS(122),
    [sym_api] = ACTIONS(122),
    [sym_use] = ACTIONS(122),
    [sym_samplerequest] = ACTIONS(122),
    [sym_paramexample] = ACTIONS(122),
    [sym_headerexample] = ACTIONS(122),
    [sym_example] = ACTIONS(122),
    [sym_description] = ACTIONS(122),
  },
  [37] = {
    [sym_default] = STATE(41),
    [aux_sym_default_token1] = ACTIONS(124),
  },
  [38] = {
    [sym_ignore] = ACTIONS(126),
    [sym__doc_end] = ACTIONS(126),
    [sym_successexample] = ACTIONS(126),
    [sym_private] = ACTIONS(126),
    [sym_param] = ACTIONS(126),
    [sym_header] = ACTIONS(126),
    [sym_errorexample] = ACTIONS(126),
    [sym_deprecated] = ACTIONS(126),
    [sym_version] = ACTIONS(126),
    [sym_success] = ACTIONS(126),
    [sym_permission] = ACTIONS(126),
    [sym_apiname] = ACTIONS(126),
    [sym_apigroup] = ACTIONS(126),
    [sym_error] = ACTIONS(126),
    [sym_define] = ACTIONS(126),
    [sym__text] = ACTIONS(126),
    [sym_api] = ACTIONS(126),
    [sym_use] = ACTIONS(126),
    [sym_samplerequest] = ACTIONS(126),
    [sym_paramexample] = ACTIONS(126),
    [sym_headerexample] = ACTIONS(126),
    [sym_example] = ACTIONS(126),
    [sym_description] = ACTIONS(126),
  },
  [39] = {
    [sym_ignore] = ACTIONS(128),
    [sym__doc_end] = ACTIONS(128),
    [sym_successexample] = ACTIONS(128),
    [sym_private] = ACTIONS(128),
    [sym_param] = ACTIONS(128),
    [sym_header] = ACTIONS(128),
    [sym_errorexample] = ACTIONS(128),
    [sym_deprecated] = ACTIONS(128),
    [aux_sym_path_token1] = ACTIONS(128),
    [sym_version] = ACTIONS(128),
    [sym_success] = ACTIONS(128),
    [sym_permission] = ACTIONS(128),
    [sym_apiname] = ACTIONS(128),
    [sym_apigroup] = ACTIONS(128),
    [sym_error] = ACTIONS(128),
    [sym_define] = ACTIONS(128),
    [sym__text] = ACTIONS(128),
    [sym_api] = ACTIONS(128),
    [sym_title] = ACTIONS(128),
    [sym_use] = ACTIONS(128),
    [sym_samplerequest] = ACTIONS(128),
    [sym_paramexample] = ACTIONS(128),
    [sym_headerexample] = ACTIONS(128),
    [sym_example] = ACTIONS(128),
    [sym_description] = ACTIONS(128),
  },
  [40] = {
    [anon_sym_RBRACK] = ACTIONS(130),
  },
  [41] = {
    [anon_sym_RBRACK] = ACTIONS(132),
  },
  [42] = {
    [sym_ignore] = ACTIONS(134),
    [sym__doc_end] = ACTIONS(134),
    [sym_successexample] = ACTIONS(134),
    [sym_private] = ACTIONS(134),
    [sym_param] = ACTIONS(134),
    [sym_header] = ACTIONS(134),
    [sym_errorexample] = ACTIONS(134),
    [sym_deprecated] = ACTIONS(134),
    [sym_version] = ACTIONS(134),
    [sym_success] = ACTIONS(134),
    [sym_permission] = ACTIONS(134),
    [sym_apiname] = ACTIONS(134),
    [sym_apigroup] = ACTIONS(134),
    [sym_error] = ACTIONS(134),
    [sym_define] = ACTIONS(134),
    [sym__text] = ACTIONS(134),
    [sym_api] = ACTIONS(134),
    [sym_use] = ACTIONS(134),
    [sym_samplerequest] = ACTIONS(134),
    [sym_paramexample] = ACTIONS(134),
    [sym_headerexample] = ACTIONS(134),
    [sym_example] = ACTIONS(134),
    [sym_description] = ACTIONS(134),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(13),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_apidoc, 2),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__tag, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, SHIFT(21),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 1, .reusable = true}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, SHIFT(28),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym__tag, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(30),
  [65] = {.count = 1, .reusable = true}, SHIFT(31),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(32),
  [71] = {.count = 1, .reusable = true}, SHIFT(33),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__tag, 2, .alias_sequence_id = 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(34),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_url, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_apidoc, 3),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(29),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(5),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(6),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(7),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(8),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(9),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(10),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(11),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(12),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym__tag, 3),
  [114] = {.count = 1, .reusable = true}, SHIFT(37),
  [116] = {.count = 1, .reusable = true}, SHIFT(38),
  [118] = {.count = 1, .reusable = true}, SHIFT(36),
  [120] = {.count = 1, .reusable = true}, SHIFT(39),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__tag, 4),
  [124] = {.count = 1, .reusable = true}, SHIFT(40),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 3),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_method, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [132] = {.count = 1, .reusable = true}, SHIFT(42),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 5),
};

void *tree_sitter_apidoc_external_scanner_create();
void tree_sitter_apidoc_external_scanner_destroy(void *);
bool tree_sitter_apidoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_apidoc_external_scanner_serialize(void *, char *);
void tree_sitter_apidoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_apidoc() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_apidoc_external_scanner_create,
      tree_sitter_apidoc_external_scanner_destroy,
      tree_sitter_apidoc_external_scanner_scan,
      tree_sitter_apidoc_external_scanner_serialize,
      tree_sitter_apidoc_external_scanner_deserialize,
    },
  };
  return &language;
}
