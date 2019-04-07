#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 134
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_ATapi = 1,
  anon_sym_ATapiIgnore = 2,
  anon_sym_ATapiDefine = 3,
  anon_sym_ATapiDeprecated = 4,
  anon_sym_ATapiDescription = 5,
  anon_sym_ATapiError = 6,
  anon_sym_ATapiErrorExample = 7,
  anon_sym_ATapiExample = 8,
  anon_sym_ATapiGroup = 9,
  anon_sym_ATapiHeader = 10,
  anon_sym_ATapiHeaderExample = 11,
  anon_sym_ATapiName = 12,
  anon_sym_ATapiParam = 13,
  anon_sym_ATapiParamExample = 14,
  anon_sym_ATapiPermission = 15,
  anon_sym_ATapiPrivate = 16,
  anon_sym_ATapiSampleRequest = 17,
  aux_sym_samplerequest_token1 = 18,
  anon_sym_ATapiSuccess = 19,
  anon_sym_ATapiSuccessExample = 20,
  anon_sym_ATapiUse = 21,
  anon_sym_ATapiVersion = 22,
  aux_sym_version_token1 = 23,
  sym__text = 24,
  sym__begin = 25,
  sym__end = 26,
  anon_sym_LBRACE = 27,
  anon_sym_get = 28,
  anon_sym_head = 29,
  anon_sym_post = 30,
  anon_sym_put = 31,
  anon_sym_delete = 32,
  anon_sym_trace = 33,
  anon_sym_options = 34,
  anon_sym_connect = 35,
  anon_sym_patch = 36,
  anon_sym_RBRACE = 37,
  aux_sym_group_token1 = 38,
  aux_sym_type_token1 = 39,
  aux_sym_path_token1 = 40,
  aux_sym_url_token1 = 41,
  anon_sym_LBRACK = 42,
  anon_sym_EQ = 43,
  anon_sym_RBRACK = 44,
  aux_sym_default_token1 = 45,
  aux_sym_name_token1 = 46,
  sym_apidoc = 47,
  sym__tag = 48,
  sym_api = 49,
  sym_ignore = 50,
  sym_define = 51,
  sym_deprecated = 52,
  sym_apidescription = 53,
  sym_apierror = 54,
  sym_errorexample = 55,
  sym_example = 56,
  sym_apigroup = 57,
  sym_header = 58,
  sym_headerexample = 59,
  sym_apiname = 60,
  sym_apiparam = 61,
  sym_paramexample = 62,
  sym_permission = 63,
  sym_private = 64,
  sym_samplerequest = 65,
  sym_success = 66,
  sym_successexample = 67,
  sym_apiuse = 68,
  sym_version = 69,
  sym_method = 70,
  sym_group = 71,
  sym_type = 72,
  sym_path = 73,
  sym_url = 74,
  sym_parameter = 75,
  sym_optional = 76,
  sym_description = 77,
  sym_default = 78,
  sym_name = 79,
  aux_sym_apidoc_repeat1 = 80,
  aux_sym_description_repeat1 = 81,
  alias_sym_title = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATapi] = "@api",
  [anon_sym_ATapiIgnore] = "@apiIgnore",
  [anon_sym_ATapiDefine] = "@apiDefine",
  [anon_sym_ATapiDeprecated] = "@apiDeprecated",
  [anon_sym_ATapiDescription] = "@apiDescription",
  [anon_sym_ATapiError] = "@apiError",
  [anon_sym_ATapiErrorExample] = "@apiErrorExample",
  [anon_sym_ATapiExample] = "@apiExample",
  [anon_sym_ATapiGroup] = "@apiGroup",
  [anon_sym_ATapiHeader] = "@apiHeader",
  [anon_sym_ATapiHeaderExample] = "@apiHeaderExample",
  [anon_sym_ATapiName] = "@apiName",
  [anon_sym_ATapiParam] = "@apiParam",
  [anon_sym_ATapiParamExample] = "@apiParamExample",
  [anon_sym_ATapiPermission] = "@apiPermission",
  [anon_sym_ATapiPrivate] = "@apiPrivate",
  [anon_sym_ATapiSampleRequest] = "@apiSampleRequest",
  [aux_sym_samplerequest_token1] = "default",
  [anon_sym_ATapiSuccess] = "@apiSuccess",
  [anon_sym_ATapiSuccessExample] = "@apiSuccessExample",
  [anon_sym_ATapiUse] = "@apiUse",
  [anon_sym_ATapiVersion] = "@apiVersion",
  [aux_sym_version_token1] = "default",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
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
  [aux_sym_group_token1] = "group_token1",
  [aux_sym_type_token1] = "type_token1",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_url_token1] = "url_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACK] = "]",
  [aux_sym_default_token1] = "default_token1",
  [aux_sym_name_token1] = "name_token1",
  [sym_apidoc] = "apidoc",
  [sym__tag] = "_tag",
  [sym_api] = "api",
  [sym_ignore] = "ignore",
  [sym_define] = "define",
  [sym_deprecated] = "deprecated",
  [sym_apidescription] = "apidescription",
  [sym_apierror] = "apierror",
  [sym_errorexample] = "errorexample",
  [sym_example] = "example",
  [sym_apigroup] = "apigroup",
  [sym_header] = "header",
  [sym_headerexample] = "headerexample",
  [sym_apiname] = "apiname",
  [sym_apiparam] = "apiparam",
  [sym_paramexample] = "paramexample",
  [sym_permission] = "permission",
  [sym_private] = "private",
  [sym_samplerequest] = "samplerequest",
  [sym_success] = "success",
  [sym_successexample] = "successexample",
  [sym_apiuse] = "apiuse",
  [sym_version] = "version",
  [sym_method] = "method",
  [sym_group] = "group",
  [sym_type] = "type",
  [sym_path] = "path",
  [sym_url] = "url",
  [sym_parameter] = "parameter",
  [sym_optional] = "optional",
  [sym_description] = "description",
  [sym_default] = "default",
  [sym_name] = "name",
  [aux_sym_apidoc_repeat1] = "apidoc_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [alias_sym_title] = "title",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATapi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiIgnore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiDefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiDeprecated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiDescription] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiError] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiErrorExample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiExample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiGroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiHeader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiHeaderExample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiName] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiParam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiParamExample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiPermission] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiPrivate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiSampleRequest] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_samplerequest_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATapiSuccess] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiSuccessExample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiUse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapiVersion] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
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
  [aux_sym_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
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
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_apidoc] = {
    .visible = true,
    .named = true,
  },
  [sym__tag] = {
    .visible = false,
    .named = true,
  },
  [sym_api] = {
    .visible = true,
    .named = true,
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
  [sym_apidescription] = {
    .visible = true,
    .named = true,
  },
  [sym_apierror] = {
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
  [sym_apiparam] = {
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
  [sym_apiuse] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
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
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_apidoc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = sym_name,
  },
  [2] = {
    [1] = alias_sym_title,
  },
  [3] = {
    [2] = alias_sym_title,
  },
  [4] = {
    [3] = alias_sym_title,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*')
        ADVANCE(12);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '\r')
        SKIP(0);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(13);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(2);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')')
        ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'a')
        ADVANCE(19);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '\r')
        SKIP(0);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(13);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(13);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')')
        ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\n')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '0')
        ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'p')
        ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_group_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_group_token1);
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'i')
        ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '0')
        ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ATapi);
      if (lookahead == 'D')
        ADVANCE(33);
      if (lookahead == 'E')
        ADVANCE(34);
      if (lookahead == 'G')
        ADVANCE(35);
      if (lookahead == 'H')
        ADVANCE(36);
      if (lookahead == 'I')
        ADVANCE(37);
      if (lookahead == 'N')
        ADVANCE(38);
      if (lookahead == 'P')
        ADVANCE(39);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead == 'U')
        ADVANCE(41);
      if (lookahead == 'V')
        ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '0')
        ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '0')
        ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == 'x')
        ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'r')
        ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'g')
        ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'a')
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(57);
      if (lookahead == 'r')
        ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'a')
        ADVANCE(59);
      if (lookahead == 'u')
        ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 's')
        ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(64);
      if (lookahead == '0')
        ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(64);
      if (lookahead == '0')
        ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'f')
        ADVANCE(66);
      if (lookahead == 'p')
        ADVANCE(67);
      if (lookahead == 's')
        ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'r')
        ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'o')
        ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'a')
        ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'm')
        ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'r')
        ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'i')
        ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'm')
        ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'c')
        ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'r')
        ADVANCE(81);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '.')
        ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '0')
        ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 66:
      if (lookahead == 'i')
        ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'r')
        ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'c')
        ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'o')
        ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'm')
        ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'd')
        ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'o')
        ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'a')
        ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'm')
        ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'v')
        ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'p')
        ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'c')
        ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATapiUse);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'n')
        ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'e')
        ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'r')
        ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'r')
        ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'p')
        ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'p')
        ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'e')
        ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATapiName);
      END_STATE();
    case 91:
      if (lookahead == 'm')
        ADVANCE(105);
      END_STATE();
    case 92:
      if (lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'a')
        ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'l')
        ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'i')
        ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'e')
        ADVANCE(111);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(112);
      END_STATE();
    case 99:
      if (lookahead == 'i')
        ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATapiError);
      if (lookahead == 'E')
        ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'l')
        ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATapiGroup);
      END_STATE();
    case 103:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATapiParam);
      if (lookahead == 'E')
        ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 's')
        ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 't')
        ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'e')
        ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 's')
        ADVANCE(122);
      END_STATE();
    case 110:
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATapiDefine);
      END_STATE();
    case 112:
      if (lookahead == 'a')
        ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'p')
        ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'x')
        ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATapiHeader);
      if (lookahead == 'E')
        ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATapiIgnore);
      END_STATE();
    case 118:
      if (lookahead == 'x')
        ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 's')
        ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'e')
        ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == 'R')
        ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 's')
        ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'n')
        ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 't')
        ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == 'a')
        ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ATapiExample);
      END_STATE();
    case 128:
      if (lookahead == 'x')
        ADVANCE(138);
      END_STATE();
    case 129:
      if (lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 130:
      if (lookahead == 'i')
        ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATapiPrivate);
      END_STATE();
    case 132:
      if (lookahead == 'e')
        ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ATapiSuccess);
      if (lookahead == 'E')
        ADVANCE(142);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ATapiVersion);
      END_STATE();
    case 135:
      if (lookahead == 'e')
        ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'i')
        ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'm')
        ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'a')
        ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'm')
        ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'o')
        ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == 'q')
        ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 'x')
        ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'd')
        ADVANCE(151);
      END_STATE();
    case 144:
      if (lookahead == 'o')
        ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'p')
        ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 'm')
        ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == 'p')
        ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'n')
        ADVANCE(156);
      END_STATE();
    case 149:
      if (lookahead == 'u')
        ADVANCE(157);
      END_STATE();
    case 150:
      if (lookahead == 'a')
        ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ATapiDeprecated);
      END_STATE();
    case 152:
      if (lookahead == 'n')
        ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'l')
        ADVANCE(160);
      END_STATE();
    case 154:
      if (lookahead == 'p')
        ADVANCE(161);
      END_STATE();
    case 155:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_ATapiPermission);
      END_STATE();
    case 157:
      if (lookahead == 'e')
        ADVANCE(163);
      END_STATE();
    case 158:
      if (lookahead == 'm')
        ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_ATapiDescription);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 'l')
        ADVANCE(166);
      END_STATE();
    case 162:
      if (lookahead == 'e')
        ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == 's')
        ADVANCE(168);
      END_STATE();
    case 164:
      if (lookahead == 'p')
        ADVANCE(169);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ATapiErrorExample);
      END_STATE();
    case 166:
      if (lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATapiParamExample);
      END_STATE();
    case 168:
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 169:
      if (lookahead == 'l')
        ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ATapiHeaderExample);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ATapiSampleRequest);
      END_STATE();
    case 172:
      if (lookahead == 'e')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ATapiSuccessExample);
      END_STATE();
    case 174:
      if (lookahead == '\n')
        SKIP(175);
      if (lookahead == '/')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      END_STATE();
    case 175:
      if (lookahead == '\n')
        SKIP(175);
      if (lookahead == '\r')
        SKIP(174);
      if (lookahead == '*')
        SKIP(177);
      if (lookahead == '/')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*')
        ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == '\n')
        SKIP(175);
      if (lookahead == '\r')
        SKIP(174);
      if (lookahead == '*')
        SKIP(177);
      if (lookahead == '/')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(177);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        SKIP(179);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 179:
      if (lookahead == '\n')
        SKIP(179);
      if (lookahead == '\r')
        SKIP(178);
      if (lookahead == '*')
        SKIP(180);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(179);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        SKIP(179);
      if (lookahead == '\r')
        SKIP(178);
      if (lookahead == '*')
        SKIP(180);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(180);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 181:
      if (lookahead == '\n')
        SKIP(182);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 182:
      if (lookahead == '\n')
        SKIP(182);
      if (lookahead == '\r')
        SKIP(181);
      if (lookahead == '*')
        SKIP(185);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(182);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 184:
      if (lookahead == '}')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == '\n')
        SKIP(182);
      if (lookahead == '\r')
        SKIP(181);
      if (lookahead == '*')
        SKIP(185);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(185);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        ADVANCE(187);
      if (lookahead == '}')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '}')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(184);
      END_STATE();
    case 189:
      if (lookahead == '\n')
        SKIP(190);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 190:
      if (lookahead == '\n')
        SKIP(190);
      if (lookahead == '\r')
        SKIP(189);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(191);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 191:
      if (lookahead == '\n')
        SKIP(190);
      if (lookahead == '\r')
        SKIP(189);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(191);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 192:
      if (lookahead == '\n')
        SKIP(193);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 193:
      if (lookahead == '\n')
        SKIP(193);
      if (lookahead == '\r')
        SKIP(192);
      if (lookahead == '*')
        SKIP(194);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(193);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 194:
      if (lookahead == '\n')
        SKIP(193);
      if (lookahead == '\r')
        SKIP(192);
      if (lookahead == '*')
        SKIP(194);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(194);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 195:
      if (lookahead == '\n')
        SKIP(196);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 196:
      if (lookahead == '\n')
        SKIP(196);
      if (lookahead == '\r')
        SKIP(195);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(197);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        SKIP(196);
      if (lookahead == '\r')
        SKIP(195);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        SKIP(197);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 198:
      if (lookahead == '\n')
        ADVANCE(199);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == 'h')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 199:
      if (lookahead == '\n')
        ADVANCE(199);
      if (lookahead == '\r')
        ADVANCE(201);
      if (lookahead == '*')
        SKIP(202);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == 'h')
        ADVANCE(200);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 201:
      if (lookahead == '\n')
        ADVANCE(199);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == 'h')
        ADVANCE(200);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 202:
      if (lookahead == '\n')
        ADVANCE(199);
      if (lookahead == '\r')
        ADVANCE(201);
      if (lookahead == '*')
        SKIP(202);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == 'h')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 205:
      if (lookahead == '\n')
        ADVANCE(199);
      if (lookahead == '\r')
        ADVANCE(201);
      if (lookahead == '*')
        SKIP(202);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == 'h')
        ADVANCE(200);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == 'p')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n')
        ADVANCE(210);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(211);
      if (lookahead == 's')
        ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_samplerequest_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n')
        ADVANCE(215);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(215);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_url_token1);
      END_STATE();
    case 216:
      if (lookahead == '\n')
        SKIP(217);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 217:
      if (lookahead == '\n')
        SKIP(217);
      if (lookahead == '\r')
        SKIP(216);
      if (lookahead == '*')
        SKIP(218);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(217);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 218:
      if (lookahead == '\n')
        SKIP(217);
      if (lookahead == '\r')
        SKIP(216);
      if (lookahead == '*')
        SKIP(218);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(218);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 219:
      if (lookahead == '\n')
        SKIP(220);
      if (lookahead == 'c')
        ADVANCE(221);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'g')
        ADVANCE(223);
      if (lookahead == 'h')
        ADVANCE(224);
      if (lookahead == 'o')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 't')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 220:
      if (lookahead == '\n')
        SKIP(220);
      if (lookahead == '\r')
        SKIP(219);
      if (lookahead == '*')
        SKIP(228);
      if (lookahead == 'c')
        ADVANCE(221);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'g')
        ADVANCE(223);
      if (lookahead == 'h')
        ADVANCE(224);
      if (lookahead == 'o')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 't')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(220);
      END_STATE();
    case 221:
      if (lookahead == 'o')
        ADVANCE(229);
      END_STATE();
    case 222:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 223:
      if (lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 224:
      if (lookahead == 'e')
        ADVANCE(232);
      END_STATE();
    case 225:
      if (lookahead == 'p')
        ADVANCE(233);
      END_STATE();
    case 226:
      if (lookahead == 'a')
        ADVANCE(234);
      if (lookahead == 'o')
        ADVANCE(235);
      if (lookahead == 'u')
        ADVANCE(236);
      END_STATE();
    case 227:
      if (lookahead == 'r')
        ADVANCE(237);
      END_STATE();
    case 228:
      if (lookahead == '\n')
        SKIP(220);
      if (lookahead == '\r')
        SKIP(219);
      if (lookahead == '*')
        SKIP(228);
      if (lookahead == 'c')
        ADVANCE(221);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'g')
        ADVANCE(223);
      if (lookahead == 'h')
        ADVANCE(224);
      if (lookahead == 'o')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 't')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(228);
      END_STATE();
    case 229:
      if (lookahead == 'n')
        ADVANCE(238);
      END_STATE();
    case 230:
      if (lookahead == 'l')
        ADVANCE(239);
      END_STATE();
    case 231:
      if (lookahead == 't')
        ADVANCE(240);
      END_STATE();
    case 232:
      if (lookahead == 'a')
        ADVANCE(241);
      END_STATE();
    case 233:
      if (lookahead == 't')
        ADVANCE(242);
      END_STATE();
    case 234:
      if (lookahead == 't')
        ADVANCE(243);
      END_STATE();
    case 235:
      if (lookahead == 's')
        ADVANCE(244);
      END_STATE();
    case 236:
      if (lookahead == 't')
        ADVANCE(245);
      END_STATE();
    case 237:
      if (lookahead == 'a')
        ADVANCE(246);
      END_STATE();
    case 238:
      if (lookahead == 'n')
        ADVANCE(247);
      END_STATE();
    case 239:
      if (lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 241:
      if (lookahead == 'd')
        ADVANCE(249);
      END_STATE();
    case 242:
      if (lookahead == 'i')
        ADVANCE(250);
      END_STATE();
    case 243:
      if (lookahead == 'c')
        ADVANCE(251);
      END_STATE();
    case 244:
      if (lookahead == 't')
        ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 246:
      if (lookahead == 'c')
        ADVANCE(253);
      END_STATE();
    case 247:
      if (lookahead == 'e')
        ADVANCE(254);
      END_STATE();
    case 248:
      if (lookahead == 't')
        ADVANCE(255);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 250:
      if (lookahead == 'o')
        ADVANCE(256);
      END_STATE();
    case 251:
      if (lookahead == 'h')
        ADVANCE(257);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 253:
      if (lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 254:
      if (lookahead == 'c')
        ADVANCE(259);
      END_STATE();
    case 255:
      if (lookahead == 'e')
        ADVANCE(260);
      END_STATE();
    case 256:
      if (lookahead == 'n')
        ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 259:
      if (lookahead == 't')
        ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 261:
      if (lookahead == 's')
        ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 264:
      if (lookahead == '\n')
        SKIP(265);
      if (lookahead == '=')
        ADVANCE(266);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(264);
      END_STATE();
    case 265:
      if (lookahead == '\n')
        SKIP(265);
      if (lookahead == '\r')
        SKIP(264);
      if (lookahead == '*')
        SKIP(268);
      if (lookahead == '=')
        ADVANCE(266);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 268:
      if (lookahead == '\n')
        SKIP(265);
      if (lookahead == '\r')
        SKIP(264);
      if (lookahead == '*')
        SKIP(268);
      if (lookahead == '=')
        ADVANCE(266);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(268);
      END_STATE();
    case 269:
      if (lookahead == '\n')
        SKIP(270);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(269);
      END_STATE();
    case 270:
      if (lookahead == '\n')
        SKIP(270);
      if (lookahead == '\r')
        SKIP(269);
      if (lookahead == '*')
        SKIP(271);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(270);
      END_STATE();
    case 271:
      if (lookahead == '\n')
        SKIP(270);
      if (lookahead == '\r')
        SKIP(269);
      if (lookahead == '*')
        SKIP(271);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_default_token1);
      if (lookahead == '\n')
        ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != ']')
        ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_default_token1);
      if (lookahead == '\n')
        ADVANCE(273);
      if (lookahead == '\r')
        ADVANCE(272);
      if (lookahead == '*')
        ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != ']')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_default_token1);
      if (lookahead != 0 &&
          lookahead != ']')
        ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_default_token1);
      if (lookahead == '\n')
        ADVANCE(273);
      if (lookahead == '\r')
        ADVANCE(272);
      if (lookahead == '*')
        ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != ']')
        ADVANCE(274);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 174},
  [2] = {.lex_state = 178},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 181},
  [5] = {.lex_state = 189},
  [6] = {.lex_state = 181},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 192},
  [9] = {.lex_state = 195},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 181},
  [13] = {.lex_state = 195},
  [14] = {.lex_state = 181},
  [15] = {.lex_state = 181},
  [16] = {.lex_state = 181},
  [17] = {.lex_state = 198},
  [18] = {.lex_state = 216},
  [19] = {.lex_state = 181},
  [20] = {.lex_state = 181},
  [21] = {.lex_state = 189},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 181},
  [24] = {.lex_state = 195},
  [25] = {.lex_state = 178},
  [26] = {.lex_state = 178},
  [27] = {.lex_state = 181},
  [28] = {.lex_state = 181},
  [29] = {.lex_state = 181},
  [30] = {.lex_state = 189},
  [31] = {.lex_state = 189},
  [32] = {.lex_state = 189},
  [33] = {.lex_state = 181},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 181},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 189},
  [38] = {.lex_state = 189},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 219},
  [42] = {.lex_state = 181},
  [43] = {.lex_state = 181},
  [44] = {.lex_state = 192},
  [45] = {.lex_state = 181},
  [46] = {.lex_state = 195},
  [47] = {.lex_state = 195},
  [48] = {.lex_state = 181},
  [49] = {.lex_state = 195},
  [50] = {.lex_state = 195},
  [51] = {.lex_state = 181},
  [52] = {.lex_state = 181},
  [53] = {.lex_state = 181},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 181},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 181},
  [58] = {.lex_state = 181},
  [59] = {.lex_state = 181},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 181},
  [69] = {.lex_state = 181},
  [70] = {.lex_state = 181},
  [71] = {.lex_state = 181},
  [72] = {.lex_state = 181},
  [73] = {.lex_state = 181},
  [74] = {.lex_state = 189},
  [75] = {.lex_state = 189},
  [76] = {.lex_state = 181},
  [77] = {.lex_state = 181},
  [78] = {.lex_state = 181},
  [79] = {.lex_state = 181},
  [80] = {.lex_state = 195},
  [81] = {.lex_state = 195},
  [82] = {.lex_state = 181},
  [83] = {.lex_state = 178},
  [84] = {.lex_state = 181},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 181},
  [87] = {.lex_state = 181},
  [88] = {.lex_state = 264},
  [89] = {.lex_state = 264},
  [90] = {.lex_state = 181},
  [91] = {.lex_state = 181},
  [92] = {.lex_state = 189},
  [93] = {.lex_state = 269},
  [94] = {.lex_state = 181},
  [95] = {.lex_state = 181},
  [96] = {.lex_state = 181},
  [97] = {.lex_state = 181},
  [98] = {.lex_state = 195},
  [99] = {.lex_state = 181},
  [100] = {.lex_state = 181},
  [101] = {.lex_state = 181},
  [102] = {.lex_state = 181},
  [103] = {.lex_state = 181},
  [104] = {.lex_state = 181},
  [105] = {.lex_state = 181},
  [106] = {.lex_state = 181},
  [107] = {.lex_state = 189},
  [108] = {.lex_state = 181},
  [109] = {.lex_state = 181},
  [110] = {.lex_state = 181},
  [111] = {.lex_state = 195},
  [112] = {.lex_state = 178},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 181},
  [115] = {.lex_state = 272},
  [116] = {.lex_state = 181},
  [117] = {.lex_state = 181},
  [118] = {.lex_state = 181},
  [119] = {.lex_state = 192},
  [120] = {.lex_state = 181},
  [121] = {.lex_state = 181},
  [122] = {.lex_state = 181},
  [123] = {.lex_state = 181},
  [124] = {.lex_state = 181},
  [125] = {.lex_state = 181},
  [126] = {.lex_state = 181},
  [127] = {.lex_state = 264},
  [128] = {.lex_state = 264},
  [129] = {.lex_state = 181},
  [130] = {.lex_state = 181},
  [131] = {.lex_state = 181},
  [132] = {.lex_state = 181},
  [133] = {.lex_state = 181},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_ATapiUse] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_group_token1] = ACTIONS(1),
    [anon_sym_ATapiName] = ACTIONS(1),
    [anon_sym_ATapiGroup] = ACTIONS(1),
    [anon_sym_ATapiParamExample] = ACTIONS(1),
    [anon_sym_ATapiDefine] = ACTIONS(1),
    [anon_sym_ATapiExample] = ACTIONS(1),
    [anon_sym_ATapiDescription] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [anon_sym_ATapiSuccessExample] = ACTIONS(1),
    [anon_sym_ATapiSampleRequest] = ACTIONS(1),
    [anon_sym_ATapiVersion] = ACTIONS(1),
    [anon_sym_ATapiHeader] = ACTIONS(1),
    [anon_sym_ATapiPermission] = ACTIONS(1),
    [anon_sym_ATapiDeprecated] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATapiError] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_version_token1] = ACTIONS(1),
    [aux_sym_name_token1] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATapiHeaderExample] = ACTIONS(1),
    [anon_sym_ATapiPrivate] = ACTIONS(1),
    [anon_sym_ATapiParam] = ACTIONS(1),
    [anon_sym_ATapiIgnore] = ACTIONS(1),
    [anon_sym_ATapiErrorExample] = ACTIONS(1),
    [anon_sym_ATapiSuccess] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
  },
  [1] = {
    [sym_apidoc] = STATE(3),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_description] = STATE(26),
    [sym_ignore] = STATE(27),
    [sym_define] = STATE(27),
    [sym_example] = STATE(27),
    [sym_apigroup] = STATE(27),
    [sym_paramexample] = STATE(27),
    [sym_permission] = STATE(27),
    [sym_apiuse] = STATE(27),
    [sym_version] = STATE(27),
    [sym__tag] = STATE(27),
    [sym_api] = STATE(27),
    [sym_apierror] = STATE(27),
    [sym_errorexample] = STATE(27),
    [sym_apiname] = STATE(27),
    [sym_apiparam] = STATE(27),
    [sym_success] = STATE(27),
    [sym_successexample] = STATE(27),
    [aux_sym_apidoc_repeat1] = STATE(27),
    [sym_deprecated] = STATE(27),
    [sym_apidescription] = STATE(27),
    [sym_header] = STATE(27),
    [sym_headerexample] = STATE(27),
    [sym_private] = STATE(27),
    [sym_samplerequest] = STATE(27),
    [anon_sym_ATapiUse] = ACTIONS(5),
    [anon_sym_ATapiHeader] = ACTIONS(7),
    [anon_sym_ATapiPermission] = ACTIONS(9),
    [anon_sym_ATapiDeprecated] = ACTIONS(11),
    [anon_sym_ATapi] = ACTIONS(13),
    [anon_sym_ATapiError] = ACTIONS(15),
    [anon_sym_ATapiName] = ACTIONS(17),
    [anon_sym_ATapiGroup] = ACTIONS(19),
    [anon_sym_ATapiParamExample] = ACTIONS(21),
    [anon_sym_ATapiDefine] = ACTIONS(23),
    [anon_sym_ATapiExample] = ACTIONS(25),
    [anon_sym_ATapiDescription] = ACTIONS(27),
    [anon_sym_ATapiSuccessExample] = ACTIONS(29),
    [anon_sym_ATapiSampleRequest] = ACTIONS(31),
    [anon_sym_ATapiVersion] = ACTIONS(33),
    [anon_sym_ATapiHeaderExample] = ACTIONS(35),
    [anon_sym_ATapiPrivate] = ACTIONS(37),
    [anon_sym_ATapiParam] = ACTIONS(39),
    [anon_sym_ATapiIgnore] = ACTIONS(41),
    [anon_sym_ATapiErrorExample] = ACTIONS(43),
    [anon_sym_ATapiSuccess] = ACTIONS(45),
    [sym__text] = ACTIONS(47),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(49),
  },
  [4] = {
    [sym_description] = STATE(29),
    [anon_sym_ATapiUse] = ACTIONS(51),
    [anon_sym_ATapiHeader] = ACTIONS(53),
    [anon_sym_ATapiPermission] = ACTIONS(51),
    [anon_sym_ATapiDeprecated] = ACTIONS(51),
    [anon_sym_ATapi] = ACTIONS(53),
    [anon_sym_ATapiError] = ACTIONS(53),
    [anon_sym_ATapiName] = ACTIONS(51),
    [anon_sym_ATapiGroup] = ACTIONS(51),
    [anon_sym_ATapiParamExample] = ACTIONS(51),
    [anon_sym_ATapiDefine] = ACTIONS(51),
    [anon_sym_ATapiExample] = ACTIONS(51),
    [anon_sym_ATapiDescription] = ACTIONS(51),
    [sym__end] = ACTIONS(51),
    [anon_sym_ATapiSuccessExample] = ACTIONS(51),
    [anon_sym_ATapiSampleRequest] = ACTIONS(51),
    [anon_sym_ATapiVersion] = ACTIONS(51),
    [anon_sym_ATapiHeaderExample] = ACTIONS(51),
    [anon_sym_ATapiPrivate] = ACTIONS(51),
    [anon_sym_ATapiParam] = ACTIONS(53),
    [anon_sym_ATapiIgnore] = ACTIONS(51),
    [anon_sym_ATapiErrorExample] = ACTIONS(51),
    [anon_sym_ATapiSuccess] = ACTIONS(53),
    [sym__text] = ACTIONS(55),
  },
  [5] = {
    [sym_description] = STATE(35),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(36),
    [sym_type] = STATE(37),
    [sym_group] = STATE(38),
    [sym_optional] = STATE(34),
    [anon_sym_ATapiUse] = ACTIONS(57),
    [anon_sym_ATapiHeader] = ACTIONS(59),
    [anon_sym_ATapiPermission] = ACTIONS(57),
    [anon_sym_ATapiDeprecated] = ACTIONS(57),
    [anon_sym_ATapi] = ACTIONS(59),
    [anon_sym_ATapiError] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [aux_sym_group_token1] = ACTIONS(63),
    [anon_sym_ATapiName] = ACTIONS(57),
    [anon_sym_ATapiGroup] = ACTIONS(57),
    [anon_sym_ATapiParamExample] = ACTIONS(57),
    [anon_sym_ATapiDefine] = ACTIONS(57),
    [anon_sym_ATapiExample] = ACTIONS(57),
    [anon_sym_ATapiDescription] = ACTIONS(57),
    [sym__end] = ACTIONS(57),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(57),
    [anon_sym_ATapiSampleRequest] = ACTIONS(57),
    [anon_sym_ATapiVersion] = ACTIONS(57),
    [anon_sym_ATapiHeaderExample] = ACTIONS(57),
    [anon_sym_ATapiPrivate] = ACTIONS(57),
    [anon_sym_ATapiParam] = ACTIONS(59),
    [anon_sym_ATapiIgnore] = ACTIONS(57),
    [anon_sym_ATapiErrorExample] = ACTIONS(57),
    [aux_sym_type_token1] = ACTIONS(67),
    [anon_sym_ATapiSuccess] = ACTIONS(59),
    [sym__text] = ACTIONS(55),
  },
  [6] = {
    [sym_description] = STATE(39),
    [anon_sym_ATapiUse] = ACTIONS(69),
    [anon_sym_ATapiHeader] = ACTIONS(71),
    [anon_sym_ATapiPermission] = ACTIONS(69),
    [anon_sym_ATapiDeprecated] = ACTIONS(69),
    [anon_sym_ATapi] = ACTIONS(71),
    [anon_sym_ATapiError] = ACTIONS(71),
    [anon_sym_ATapiName] = ACTIONS(69),
    [anon_sym_ATapiGroup] = ACTIONS(69),
    [anon_sym_ATapiParamExample] = ACTIONS(69),
    [anon_sym_ATapiDefine] = ACTIONS(69),
    [anon_sym_ATapiExample] = ACTIONS(69),
    [anon_sym_ATapiDescription] = ACTIONS(69),
    [sym__end] = ACTIONS(69),
    [anon_sym_ATapiSuccessExample] = ACTIONS(69),
    [anon_sym_ATapiSampleRequest] = ACTIONS(69),
    [anon_sym_ATapiVersion] = ACTIONS(69),
    [anon_sym_ATapiHeaderExample] = ACTIONS(69),
    [anon_sym_ATapiPrivate] = ACTIONS(69),
    [anon_sym_ATapiParam] = ACTIONS(71),
    [anon_sym_ATapiIgnore] = ACTIONS(69),
    [anon_sym_ATapiErrorExample] = ACTIONS(69),
    [anon_sym_ATapiSuccess] = ACTIONS(71),
    [sym__text] = ACTIONS(55),
  },
  [7] = {
    [sym_description] = STATE(40),
    [anon_sym_ATapiUse] = ACTIONS(73),
    [anon_sym_ATapiHeader] = ACTIONS(75),
    [anon_sym_ATapiPermission] = ACTIONS(73),
    [anon_sym_ATapiDeprecated] = ACTIONS(73),
    [anon_sym_ATapi] = ACTIONS(75),
    [anon_sym_ATapiError] = ACTIONS(75),
    [anon_sym_ATapiName] = ACTIONS(73),
    [anon_sym_ATapiGroup] = ACTIONS(73),
    [anon_sym_ATapiParamExample] = ACTIONS(73),
    [anon_sym_ATapiDefine] = ACTIONS(73),
    [anon_sym_ATapiExample] = ACTIONS(73),
    [anon_sym_ATapiDescription] = ACTIONS(73),
    [sym__end] = ACTIONS(73),
    [anon_sym_ATapiSuccessExample] = ACTIONS(73),
    [anon_sym_ATapiSampleRequest] = ACTIONS(73),
    [anon_sym_ATapiVersion] = ACTIONS(73),
    [anon_sym_ATapiHeaderExample] = ACTIONS(73),
    [anon_sym_ATapiPrivate] = ACTIONS(73),
    [anon_sym_ATapiParam] = ACTIONS(75),
    [anon_sym_ATapiIgnore] = ACTIONS(73),
    [anon_sym_ATapiErrorExample] = ACTIONS(73),
    [anon_sym_ATapiSuccess] = ACTIONS(75),
    [sym__text] = ACTIONS(55),
  },
  [8] = {
    [sym_path] = STATE(43),
    [sym_method] = STATE(44),
    [sym_description] = STATE(45),
    [anon_sym_ATapiUse] = ACTIONS(77),
    [anon_sym_ATapiHeader] = ACTIONS(79),
    [anon_sym_ATapiPermission] = ACTIONS(77),
    [anon_sym_ATapiDeprecated] = ACTIONS(77),
    [anon_sym_ATapi] = ACTIONS(79),
    [anon_sym_ATapiError] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_ATapiName] = ACTIONS(77),
    [anon_sym_ATapiGroup] = ACTIONS(77),
    [anon_sym_ATapiParamExample] = ACTIONS(77),
    [anon_sym_ATapiDefine] = ACTIONS(77),
    [anon_sym_ATapiExample] = ACTIONS(77),
    [anon_sym_ATapiDescription] = ACTIONS(77),
    [sym__end] = ACTIONS(79),
    [aux_sym_path_token1] = ACTIONS(83),
    [anon_sym_ATapiSuccessExample] = ACTIONS(77),
    [anon_sym_ATapiSampleRequest] = ACTIONS(77),
    [anon_sym_ATapiVersion] = ACTIONS(77),
    [anon_sym_ATapiHeaderExample] = ACTIONS(77),
    [anon_sym_ATapiPrivate] = ACTIONS(77),
    [anon_sym_ATapiParam] = ACTIONS(79),
    [anon_sym_ATapiIgnore] = ACTIONS(77),
    [anon_sym_ATapiErrorExample] = ACTIONS(77),
    [anon_sym_ATapiSuccess] = ACTIONS(79),
    [sym__text] = ACTIONS(55),
  },
  [9] = {
    [sym_description] = STATE(48),
    [sym_type] = STATE(49),
    [sym_group] = STATE(50),
    [sym_name] = STATE(51),
    [anon_sym_ATapiUse] = ACTIONS(85),
    [anon_sym_ATapiHeader] = ACTIONS(87),
    [anon_sym_ATapiPermission] = ACTIONS(85),
    [anon_sym_ATapiDeprecated] = ACTIONS(85),
    [anon_sym_ATapi] = ACTIONS(87),
    [anon_sym_ATapiError] = ACTIONS(87),
    [aux_sym_group_token1] = ACTIONS(89),
    [anon_sym_ATapiName] = ACTIONS(85),
    [anon_sym_ATapiGroup] = ACTIONS(85),
    [anon_sym_ATapiParamExample] = ACTIONS(85),
    [anon_sym_ATapiDefine] = ACTIONS(85),
    [anon_sym_ATapiExample] = ACTIONS(85),
    [anon_sym_ATapiDescription] = ACTIONS(85),
    [sym__end] = ACTIONS(85),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(85),
    [anon_sym_ATapiSampleRequest] = ACTIONS(85),
    [anon_sym_ATapiVersion] = ACTIONS(85),
    [anon_sym_ATapiHeaderExample] = ACTIONS(85),
    [anon_sym_ATapiPrivate] = ACTIONS(85),
    [anon_sym_ATapiParam] = ACTIONS(87),
    [anon_sym_ATapiIgnore] = ACTIONS(85),
    [anon_sym_ATapiErrorExample] = ACTIONS(85),
    [aux_sym_type_token1] = ACTIONS(91),
    [anon_sym_ATapiSuccess] = ACTIONS(87),
    [sym__text] = ACTIONS(55),
  },
  [10] = {
    [sym_description] = STATE(52),
    [anon_sym_ATapiUse] = ACTIONS(93),
    [anon_sym_ATapiHeader] = ACTIONS(95),
    [anon_sym_ATapiPermission] = ACTIONS(93),
    [anon_sym_ATapiDeprecated] = ACTIONS(93),
    [anon_sym_ATapi] = ACTIONS(95),
    [anon_sym_ATapiError] = ACTIONS(95),
    [anon_sym_ATapiName] = ACTIONS(93),
    [anon_sym_ATapiGroup] = ACTIONS(93),
    [anon_sym_ATapiParamExample] = ACTIONS(93),
    [anon_sym_ATapiDefine] = ACTIONS(93),
    [anon_sym_ATapiExample] = ACTIONS(93),
    [anon_sym_ATapiDescription] = ACTIONS(93),
    [sym__end] = ACTIONS(93),
    [anon_sym_ATapiSuccessExample] = ACTIONS(93),
    [anon_sym_ATapiSampleRequest] = ACTIONS(93),
    [anon_sym_ATapiVersion] = ACTIONS(93),
    [anon_sym_ATapiHeaderExample] = ACTIONS(93),
    [anon_sym_ATapiPrivate] = ACTIONS(93),
    [anon_sym_ATapiParam] = ACTIONS(95),
    [anon_sym_ATapiIgnore] = ACTIONS(93),
    [anon_sym_ATapiErrorExample] = ACTIONS(93),
    [anon_sym_ATapiSuccess] = ACTIONS(95),
    [sym__text] = ACTIONS(55),
  },
  [11] = {
    [sym_description] = STATE(53),
    [anon_sym_ATapiUse] = ACTIONS(97),
    [anon_sym_ATapiHeader] = ACTIONS(99),
    [anon_sym_ATapiPermission] = ACTIONS(97),
    [anon_sym_ATapiDeprecated] = ACTIONS(97),
    [anon_sym_ATapi] = ACTIONS(99),
    [anon_sym_ATapiError] = ACTIONS(99),
    [anon_sym_ATapiName] = ACTIONS(97),
    [anon_sym_ATapiGroup] = ACTIONS(97),
    [anon_sym_ATapiParamExample] = ACTIONS(97),
    [anon_sym_ATapiDefine] = ACTIONS(97),
    [anon_sym_ATapiExample] = ACTIONS(97),
    [anon_sym_ATapiDescription] = ACTIONS(97),
    [sym__end] = ACTIONS(97),
    [anon_sym_ATapiSuccessExample] = ACTIONS(97),
    [anon_sym_ATapiSampleRequest] = ACTIONS(97),
    [anon_sym_ATapiVersion] = ACTIONS(97),
    [anon_sym_ATapiHeaderExample] = ACTIONS(97),
    [anon_sym_ATapiPrivate] = ACTIONS(97),
    [anon_sym_ATapiParam] = ACTIONS(99),
    [anon_sym_ATapiIgnore] = ACTIONS(97),
    [anon_sym_ATapiErrorExample] = ACTIONS(97),
    [anon_sym_ATapiSuccess] = ACTIONS(99),
    [sym__text] = ACTIONS(55),
  },
  [12] = {
    [sym_description] = STATE(55),
    [sym_type] = STATE(56),
    [anon_sym_ATapiUse] = ACTIONS(101),
    [anon_sym_ATapiHeader] = ACTIONS(103),
    [anon_sym_ATapiPermission] = ACTIONS(101),
    [anon_sym_ATapiDeprecated] = ACTIONS(101),
    [anon_sym_ATapi] = ACTIONS(103),
    [anon_sym_ATapiError] = ACTIONS(103),
    [anon_sym_ATapiName] = ACTIONS(101),
    [anon_sym_ATapiGroup] = ACTIONS(101),
    [anon_sym_ATapiParamExample] = ACTIONS(101),
    [anon_sym_ATapiDefine] = ACTIONS(101),
    [anon_sym_ATapiExample] = ACTIONS(101),
    [anon_sym_ATapiDescription] = ACTIONS(101),
    [sym__end] = ACTIONS(101),
    [anon_sym_ATapiSuccessExample] = ACTIONS(101),
    [anon_sym_ATapiSampleRequest] = ACTIONS(101),
    [anon_sym_ATapiVersion] = ACTIONS(101),
    [anon_sym_ATapiHeaderExample] = ACTIONS(101),
    [anon_sym_ATapiPrivate] = ACTIONS(101),
    [anon_sym_ATapiParam] = ACTIONS(103),
    [anon_sym_ATapiIgnore] = ACTIONS(101),
    [anon_sym_ATapiErrorExample] = ACTIONS(101),
    [aux_sym_type_token1] = ACTIONS(105),
    [anon_sym_ATapiSuccess] = ACTIONS(103),
    [sym__text] = ACTIONS(55),
  },
  [13] = {
    [sym_description] = STATE(57),
    [sym_name] = STATE(58),
    [anon_sym_ATapiUse] = ACTIONS(107),
    [anon_sym_ATapiHeader] = ACTIONS(109),
    [anon_sym_ATapiPermission] = ACTIONS(107),
    [anon_sym_ATapiDeprecated] = ACTIONS(107),
    [anon_sym_ATapi] = ACTIONS(109),
    [anon_sym_ATapiError] = ACTIONS(109),
    [anon_sym_ATapiName] = ACTIONS(107),
    [anon_sym_ATapiGroup] = ACTIONS(107),
    [anon_sym_ATapiParamExample] = ACTIONS(107),
    [anon_sym_ATapiDefine] = ACTIONS(107),
    [anon_sym_ATapiExample] = ACTIONS(107),
    [anon_sym_ATapiDescription] = ACTIONS(107),
    [sym__end] = ACTIONS(107),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(107),
    [anon_sym_ATapiSampleRequest] = ACTIONS(107),
    [anon_sym_ATapiVersion] = ACTIONS(107),
    [anon_sym_ATapiHeaderExample] = ACTIONS(107),
    [anon_sym_ATapiPrivate] = ACTIONS(107),
    [anon_sym_ATapiParam] = ACTIONS(109),
    [anon_sym_ATapiIgnore] = ACTIONS(107),
    [anon_sym_ATapiErrorExample] = ACTIONS(107),
    [anon_sym_ATapiSuccess] = ACTIONS(109),
    [sym__text] = ACTIONS(55),
  },
  [14] = {
    [sym_description] = STATE(59),
    [sym_type] = STATE(60),
    [anon_sym_ATapiUse] = ACTIONS(111),
    [anon_sym_ATapiHeader] = ACTIONS(113),
    [anon_sym_ATapiPermission] = ACTIONS(111),
    [anon_sym_ATapiDeprecated] = ACTIONS(111),
    [anon_sym_ATapi] = ACTIONS(113),
    [anon_sym_ATapiError] = ACTIONS(113),
    [anon_sym_ATapiName] = ACTIONS(111),
    [anon_sym_ATapiGroup] = ACTIONS(111),
    [anon_sym_ATapiParamExample] = ACTIONS(111),
    [anon_sym_ATapiDefine] = ACTIONS(111),
    [anon_sym_ATapiExample] = ACTIONS(111),
    [anon_sym_ATapiDescription] = ACTIONS(111),
    [sym__end] = ACTIONS(111),
    [anon_sym_ATapiSuccessExample] = ACTIONS(111),
    [anon_sym_ATapiSampleRequest] = ACTIONS(111),
    [anon_sym_ATapiVersion] = ACTIONS(111),
    [anon_sym_ATapiHeaderExample] = ACTIONS(111),
    [anon_sym_ATapiPrivate] = ACTIONS(111),
    [anon_sym_ATapiParam] = ACTIONS(113),
    [anon_sym_ATapiIgnore] = ACTIONS(111),
    [anon_sym_ATapiErrorExample] = ACTIONS(111),
    [aux_sym_type_token1] = ACTIONS(105),
    [anon_sym_ATapiSuccess] = ACTIONS(113),
    [sym__text] = ACTIONS(55),
  },
  [15] = {
    [sym_description] = STATE(61),
    [anon_sym_ATapiUse] = ACTIONS(115),
    [anon_sym_ATapiHeader] = ACTIONS(117),
    [anon_sym_ATapiPermission] = ACTIONS(115),
    [anon_sym_ATapiDeprecated] = ACTIONS(115),
    [anon_sym_ATapi] = ACTIONS(117),
    [anon_sym_ATapiError] = ACTIONS(117),
    [anon_sym_ATapiName] = ACTIONS(115),
    [anon_sym_ATapiGroup] = ACTIONS(115),
    [anon_sym_ATapiParamExample] = ACTIONS(115),
    [anon_sym_ATapiDefine] = ACTIONS(115),
    [anon_sym_ATapiExample] = ACTIONS(115),
    [anon_sym_ATapiDescription] = ACTIONS(115),
    [sym__end] = ACTIONS(115),
    [anon_sym_ATapiSuccessExample] = ACTIONS(115),
    [anon_sym_ATapiSampleRequest] = ACTIONS(115),
    [anon_sym_ATapiVersion] = ACTIONS(115),
    [anon_sym_ATapiHeaderExample] = ACTIONS(115),
    [anon_sym_ATapiPrivate] = ACTIONS(115),
    [anon_sym_ATapiParam] = ACTIONS(117),
    [anon_sym_ATapiIgnore] = ACTIONS(115),
    [anon_sym_ATapiErrorExample] = ACTIONS(115),
    [anon_sym_ATapiSuccess] = ACTIONS(117),
    [sym__text] = ACTIONS(55),
  },
  [16] = {
    [sym_description] = STATE(62),
    [sym_type] = STATE(63),
    [anon_sym_ATapiUse] = ACTIONS(119),
    [anon_sym_ATapiHeader] = ACTIONS(121),
    [anon_sym_ATapiPermission] = ACTIONS(119),
    [anon_sym_ATapiDeprecated] = ACTIONS(119),
    [anon_sym_ATapi] = ACTIONS(121),
    [anon_sym_ATapiError] = ACTIONS(121),
    [anon_sym_ATapiName] = ACTIONS(119),
    [anon_sym_ATapiGroup] = ACTIONS(119),
    [anon_sym_ATapiParamExample] = ACTIONS(119),
    [anon_sym_ATapiDefine] = ACTIONS(119),
    [anon_sym_ATapiExample] = ACTIONS(119),
    [anon_sym_ATapiDescription] = ACTIONS(119),
    [sym__end] = ACTIONS(119),
    [anon_sym_ATapiSuccessExample] = ACTIONS(119),
    [anon_sym_ATapiSampleRequest] = ACTIONS(119),
    [anon_sym_ATapiVersion] = ACTIONS(119),
    [anon_sym_ATapiHeaderExample] = ACTIONS(119),
    [anon_sym_ATapiPrivate] = ACTIONS(119),
    [anon_sym_ATapiParam] = ACTIONS(121),
    [anon_sym_ATapiIgnore] = ACTIONS(119),
    [anon_sym_ATapiErrorExample] = ACTIONS(119),
    [aux_sym_type_token1] = ACTIONS(105),
    [anon_sym_ATapiSuccess] = ACTIONS(121),
    [sym__text] = ACTIONS(55),
  },
  [17] = {
    [sym_path] = STATE(64),
    [sym_url] = STATE(64),
    [sym_description] = STATE(66),
    [anon_sym_ATapiUse] = ACTIONS(123),
    [anon_sym_ATapiHeader] = ACTIONS(125),
    [anon_sym_ATapiPermission] = ACTIONS(123),
    [anon_sym_ATapiDeprecated] = ACTIONS(123),
    [anon_sym_ATapi] = ACTIONS(125),
    [anon_sym_ATapiError] = ACTIONS(125),
    [aux_sym_samplerequest_token1] = ACTIONS(127),
    [anon_sym_ATapiName] = ACTIONS(123),
    [anon_sym_ATapiGroup] = ACTIONS(123),
    [anon_sym_ATapiParamExample] = ACTIONS(123),
    [anon_sym_ATapiDefine] = ACTIONS(123),
    [anon_sym_ATapiExample] = ACTIONS(123),
    [anon_sym_ATapiDescription] = ACTIONS(123),
    [sym__end] = ACTIONS(125),
    [aux_sym_path_token1] = ACTIONS(83),
    [anon_sym_ATapiSuccessExample] = ACTIONS(123),
    [anon_sym_ATapiSampleRequest] = ACTIONS(123),
    [anon_sym_ATapiVersion] = ACTIONS(123),
    [anon_sym_ATapiHeaderExample] = ACTIONS(123),
    [anon_sym_ATapiPrivate] = ACTIONS(123),
    [anon_sym_ATapiParam] = ACTIONS(125),
    [anon_sym_ATapiIgnore] = ACTIONS(123),
    [anon_sym_ATapiErrorExample] = ACTIONS(123),
    [aux_sym_url_token1] = ACTIONS(129),
    [anon_sym_ATapiSuccess] = ACTIONS(125),
    [sym__text] = ACTIONS(55),
  },
  [18] = {
    [sym_description] = STATE(68),
    [anon_sym_ATapiUse] = ACTIONS(131),
    [anon_sym_ATapiHeader] = ACTIONS(133),
    [anon_sym_ATapiPermission] = ACTIONS(131),
    [anon_sym_ATapiDeprecated] = ACTIONS(131),
    [anon_sym_ATapi] = ACTIONS(133),
    [anon_sym_ATapiError] = ACTIONS(133),
    [aux_sym_version_token1] = ACTIONS(135),
    [anon_sym_ATapiName] = ACTIONS(131),
    [anon_sym_ATapiGroup] = ACTIONS(131),
    [anon_sym_ATapiParamExample] = ACTIONS(131),
    [anon_sym_ATapiDefine] = ACTIONS(131),
    [anon_sym_ATapiExample] = ACTIONS(131),
    [anon_sym_ATapiDescription] = ACTIONS(131),
    [sym__end] = ACTIONS(131),
    [anon_sym_ATapiSuccessExample] = ACTIONS(131),
    [anon_sym_ATapiSampleRequest] = ACTIONS(131),
    [anon_sym_ATapiVersion] = ACTIONS(131),
    [anon_sym_ATapiHeaderExample] = ACTIONS(131),
    [anon_sym_ATapiPrivate] = ACTIONS(131),
    [anon_sym_ATapiParam] = ACTIONS(133),
    [anon_sym_ATapiIgnore] = ACTIONS(131),
    [anon_sym_ATapiErrorExample] = ACTIONS(131),
    [anon_sym_ATapiSuccess] = ACTIONS(133),
    [sym__text] = ACTIONS(55),
  },
  [19] = {
    [sym_description] = STATE(69),
    [sym_type] = STATE(70),
    [anon_sym_ATapiUse] = ACTIONS(137),
    [anon_sym_ATapiHeader] = ACTIONS(139),
    [anon_sym_ATapiPermission] = ACTIONS(137),
    [anon_sym_ATapiDeprecated] = ACTIONS(137),
    [anon_sym_ATapi] = ACTIONS(139),
    [anon_sym_ATapiError] = ACTIONS(139),
    [anon_sym_ATapiName] = ACTIONS(137),
    [anon_sym_ATapiGroup] = ACTIONS(137),
    [anon_sym_ATapiParamExample] = ACTIONS(137),
    [anon_sym_ATapiDefine] = ACTIONS(137),
    [anon_sym_ATapiExample] = ACTIONS(137),
    [anon_sym_ATapiDescription] = ACTIONS(137),
    [sym__end] = ACTIONS(137),
    [anon_sym_ATapiSuccessExample] = ACTIONS(137),
    [anon_sym_ATapiSampleRequest] = ACTIONS(137),
    [anon_sym_ATapiVersion] = ACTIONS(137),
    [anon_sym_ATapiHeaderExample] = ACTIONS(137),
    [anon_sym_ATapiPrivate] = ACTIONS(137),
    [anon_sym_ATapiParam] = ACTIONS(139),
    [anon_sym_ATapiIgnore] = ACTIONS(137),
    [anon_sym_ATapiErrorExample] = ACTIONS(137),
    [aux_sym_type_token1] = ACTIONS(105),
    [anon_sym_ATapiSuccess] = ACTIONS(139),
    [sym__text] = ACTIONS(55),
  },
  [20] = {
    [sym_description] = STATE(71),
    [anon_sym_ATapiUse] = ACTIONS(141),
    [anon_sym_ATapiHeader] = ACTIONS(143),
    [anon_sym_ATapiPermission] = ACTIONS(141),
    [anon_sym_ATapiDeprecated] = ACTIONS(141),
    [anon_sym_ATapi] = ACTIONS(143),
    [anon_sym_ATapiError] = ACTIONS(143),
    [anon_sym_ATapiName] = ACTIONS(141),
    [anon_sym_ATapiGroup] = ACTIONS(141),
    [anon_sym_ATapiParamExample] = ACTIONS(141),
    [anon_sym_ATapiDefine] = ACTIONS(141),
    [anon_sym_ATapiExample] = ACTIONS(141),
    [anon_sym_ATapiDescription] = ACTIONS(141),
    [sym__end] = ACTIONS(141),
    [anon_sym_ATapiSuccessExample] = ACTIONS(141),
    [anon_sym_ATapiSampleRequest] = ACTIONS(141),
    [anon_sym_ATapiVersion] = ACTIONS(141),
    [anon_sym_ATapiHeaderExample] = ACTIONS(141),
    [anon_sym_ATapiPrivate] = ACTIONS(141),
    [anon_sym_ATapiParam] = ACTIONS(143),
    [anon_sym_ATapiIgnore] = ACTIONS(141),
    [anon_sym_ATapiErrorExample] = ACTIONS(141),
    [anon_sym_ATapiSuccess] = ACTIONS(143),
    [sym__text] = ACTIONS(55),
  },
  [21] = {
    [sym_description] = STATE(72),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(73),
    [sym_type] = STATE(74),
    [sym_group] = STATE(75),
    [sym_optional] = STATE(34),
    [anon_sym_ATapiUse] = ACTIONS(145),
    [anon_sym_ATapiHeader] = ACTIONS(147),
    [anon_sym_ATapiPermission] = ACTIONS(145),
    [anon_sym_ATapiDeprecated] = ACTIONS(145),
    [anon_sym_ATapi] = ACTIONS(147),
    [anon_sym_ATapiError] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(61),
    [aux_sym_group_token1] = ACTIONS(63),
    [anon_sym_ATapiName] = ACTIONS(145),
    [anon_sym_ATapiGroup] = ACTIONS(145),
    [anon_sym_ATapiParamExample] = ACTIONS(145),
    [anon_sym_ATapiDefine] = ACTIONS(145),
    [anon_sym_ATapiExample] = ACTIONS(145),
    [anon_sym_ATapiDescription] = ACTIONS(145),
    [sym__end] = ACTIONS(145),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(145),
    [anon_sym_ATapiSampleRequest] = ACTIONS(145),
    [anon_sym_ATapiVersion] = ACTIONS(145),
    [anon_sym_ATapiHeaderExample] = ACTIONS(145),
    [anon_sym_ATapiPrivate] = ACTIONS(145),
    [anon_sym_ATapiParam] = ACTIONS(147),
    [anon_sym_ATapiIgnore] = ACTIONS(145),
    [anon_sym_ATapiErrorExample] = ACTIONS(145),
    [aux_sym_type_token1] = ACTIONS(67),
    [anon_sym_ATapiSuccess] = ACTIONS(147),
    [sym__text] = ACTIONS(55),
  },
  [22] = {
    [sym_description] = STATE(76),
    [anon_sym_ATapiUse] = ACTIONS(149),
    [anon_sym_ATapiHeader] = ACTIONS(151),
    [anon_sym_ATapiPermission] = ACTIONS(149),
    [anon_sym_ATapiDeprecated] = ACTIONS(149),
    [anon_sym_ATapi] = ACTIONS(151),
    [anon_sym_ATapiError] = ACTIONS(151),
    [anon_sym_ATapiName] = ACTIONS(149),
    [anon_sym_ATapiGroup] = ACTIONS(149),
    [anon_sym_ATapiParamExample] = ACTIONS(149),
    [anon_sym_ATapiDefine] = ACTIONS(149),
    [anon_sym_ATapiExample] = ACTIONS(149),
    [anon_sym_ATapiDescription] = ACTIONS(149),
    [sym__end] = ACTIONS(149),
    [anon_sym_ATapiSuccessExample] = ACTIONS(149),
    [anon_sym_ATapiSampleRequest] = ACTIONS(149),
    [anon_sym_ATapiVersion] = ACTIONS(149),
    [anon_sym_ATapiHeaderExample] = ACTIONS(149),
    [anon_sym_ATapiPrivate] = ACTIONS(149),
    [anon_sym_ATapiParam] = ACTIONS(151),
    [anon_sym_ATapiIgnore] = ACTIONS(149),
    [anon_sym_ATapiErrorExample] = ACTIONS(149),
    [anon_sym_ATapiSuccess] = ACTIONS(151),
    [sym__text] = ACTIONS(55),
  },
  [23] = {
    [sym_description] = STATE(77),
    [sym_type] = STATE(78),
    [anon_sym_ATapiUse] = ACTIONS(153),
    [anon_sym_ATapiHeader] = ACTIONS(155),
    [anon_sym_ATapiPermission] = ACTIONS(153),
    [anon_sym_ATapiDeprecated] = ACTIONS(153),
    [anon_sym_ATapi] = ACTIONS(155),
    [anon_sym_ATapiError] = ACTIONS(155),
    [anon_sym_ATapiName] = ACTIONS(153),
    [anon_sym_ATapiGroup] = ACTIONS(153),
    [anon_sym_ATapiParamExample] = ACTIONS(153),
    [anon_sym_ATapiDefine] = ACTIONS(153),
    [anon_sym_ATapiExample] = ACTIONS(153),
    [anon_sym_ATapiDescription] = ACTIONS(153),
    [sym__end] = ACTIONS(153),
    [anon_sym_ATapiSuccessExample] = ACTIONS(153),
    [anon_sym_ATapiSampleRequest] = ACTIONS(153),
    [anon_sym_ATapiVersion] = ACTIONS(153),
    [anon_sym_ATapiHeaderExample] = ACTIONS(153),
    [anon_sym_ATapiPrivate] = ACTIONS(153),
    [anon_sym_ATapiParam] = ACTIONS(155),
    [anon_sym_ATapiIgnore] = ACTIONS(153),
    [anon_sym_ATapiErrorExample] = ACTIONS(153),
    [aux_sym_type_token1] = ACTIONS(105),
    [anon_sym_ATapiSuccess] = ACTIONS(155),
    [sym__text] = ACTIONS(55),
  },
  [24] = {
    [sym_description] = STATE(79),
    [sym_type] = STATE(80),
    [sym_group] = STATE(81),
    [sym_name] = STATE(82),
    [anon_sym_ATapiUse] = ACTIONS(157),
    [anon_sym_ATapiHeader] = ACTIONS(159),
    [anon_sym_ATapiPermission] = ACTIONS(157),
    [anon_sym_ATapiDeprecated] = ACTIONS(157),
    [anon_sym_ATapi] = ACTIONS(159),
    [anon_sym_ATapiError] = ACTIONS(159),
    [aux_sym_group_token1] = ACTIONS(89),
    [anon_sym_ATapiName] = ACTIONS(157),
    [anon_sym_ATapiGroup] = ACTIONS(157),
    [anon_sym_ATapiParamExample] = ACTIONS(157),
    [anon_sym_ATapiDefine] = ACTIONS(157),
    [anon_sym_ATapiExample] = ACTIONS(157),
    [anon_sym_ATapiDescription] = ACTIONS(157),
    [sym__end] = ACTIONS(157),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(157),
    [anon_sym_ATapiSampleRequest] = ACTIONS(157),
    [anon_sym_ATapiVersion] = ACTIONS(157),
    [anon_sym_ATapiHeaderExample] = ACTIONS(157),
    [anon_sym_ATapiPrivate] = ACTIONS(157),
    [anon_sym_ATapiParam] = ACTIONS(159),
    [anon_sym_ATapiIgnore] = ACTIONS(157),
    [anon_sym_ATapiErrorExample] = ACTIONS(157),
    [aux_sym_type_token1] = ACTIONS(91),
    [anon_sym_ATapiSuccess] = ACTIONS(159),
    [sym__text] = ACTIONS(55),
  },
  [25] = {
    [aux_sym_description_repeat1] = STATE(83),
    [anon_sym_ATapiUse] = ACTIONS(161),
    [anon_sym_ATapiHeader] = ACTIONS(163),
    [anon_sym_ATapiPermission] = ACTIONS(161),
    [anon_sym_ATapiDeprecated] = ACTIONS(161),
    [anon_sym_ATapi] = ACTIONS(163),
    [anon_sym_ATapiError] = ACTIONS(163),
    [anon_sym_ATapiName] = ACTIONS(161),
    [anon_sym_ATapiGroup] = ACTIONS(161),
    [anon_sym_ATapiParamExample] = ACTIONS(161),
    [anon_sym_ATapiDefine] = ACTIONS(161),
    [anon_sym_ATapiExample] = ACTIONS(161),
    [anon_sym_ATapiDescription] = ACTIONS(161),
    [anon_sym_ATapiSuccessExample] = ACTIONS(161),
    [anon_sym_ATapiSampleRequest] = ACTIONS(161),
    [anon_sym_ATapiVersion] = ACTIONS(161),
    [anon_sym_ATapiHeaderExample] = ACTIONS(161),
    [anon_sym_ATapiPrivate] = ACTIONS(161),
    [anon_sym_ATapiParam] = ACTIONS(163),
    [anon_sym_ATapiIgnore] = ACTIONS(161),
    [anon_sym_ATapiErrorExample] = ACTIONS(161),
    [anon_sym_ATapiSuccess] = ACTIONS(163),
    [sym__text] = ACTIONS(165),
  },
  [26] = {
    [sym_ignore] = STATE(84),
    [sym_define] = STATE(84),
    [sym_example] = STATE(84),
    [sym_apigroup] = STATE(84),
    [sym_paramexample] = STATE(84),
    [sym_permission] = STATE(84),
    [sym_apiuse] = STATE(84),
    [sym_version] = STATE(84),
    [sym__tag] = STATE(84),
    [sym_api] = STATE(84),
    [sym_apierror] = STATE(84),
    [sym_errorexample] = STATE(84),
    [sym_apiname] = STATE(84),
    [sym_apiparam] = STATE(84),
    [sym_success] = STATE(84),
    [sym_successexample] = STATE(84),
    [aux_sym_apidoc_repeat1] = STATE(84),
    [sym_deprecated] = STATE(84),
    [sym_apidescription] = STATE(84),
    [sym_header] = STATE(84),
    [sym_headerexample] = STATE(84),
    [sym_private] = STATE(84),
    [sym_samplerequest] = STATE(84),
    [anon_sym_ATapiUse] = ACTIONS(5),
    [anon_sym_ATapiHeader] = ACTIONS(7),
    [anon_sym_ATapiPermission] = ACTIONS(9),
    [anon_sym_ATapiDeprecated] = ACTIONS(11),
    [anon_sym_ATapi] = ACTIONS(13),
    [anon_sym_ATapiError] = ACTIONS(15),
    [anon_sym_ATapiName] = ACTIONS(17),
    [anon_sym_ATapiGroup] = ACTIONS(19),
    [anon_sym_ATapiParamExample] = ACTIONS(21),
    [anon_sym_ATapiDefine] = ACTIONS(23),
    [anon_sym_ATapiExample] = ACTIONS(25),
    [anon_sym_ATapiDescription] = ACTIONS(27),
    [anon_sym_ATapiSuccessExample] = ACTIONS(29),
    [anon_sym_ATapiSampleRequest] = ACTIONS(31),
    [anon_sym_ATapiVersion] = ACTIONS(33),
    [anon_sym_ATapiHeaderExample] = ACTIONS(35),
    [anon_sym_ATapiPrivate] = ACTIONS(37),
    [anon_sym_ATapiParam] = ACTIONS(39),
    [anon_sym_ATapiIgnore] = ACTIONS(41),
    [anon_sym_ATapiErrorExample] = ACTIONS(43),
    [anon_sym_ATapiSuccess] = ACTIONS(45),
  },
  [27] = {
    [sym_ignore] = STATE(86),
    [sym_define] = STATE(86),
    [sym_example] = STATE(86),
    [sym_apigroup] = STATE(86),
    [sym_paramexample] = STATE(86),
    [sym_permission] = STATE(86),
    [sym_apiuse] = STATE(86),
    [sym_version] = STATE(86),
    [sym__tag] = STATE(86),
    [sym_api] = STATE(86),
    [sym_apierror] = STATE(86),
    [sym_errorexample] = STATE(86),
    [sym_apiname] = STATE(86),
    [sym_apiparam] = STATE(86),
    [sym_success] = STATE(86),
    [sym_successexample] = STATE(86),
    [aux_sym_apidoc_repeat1] = STATE(86),
    [sym_deprecated] = STATE(86),
    [sym_apidescription] = STATE(86),
    [sym_header] = STATE(86),
    [sym_headerexample] = STATE(86),
    [sym_private] = STATE(86),
    [sym_samplerequest] = STATE(86),
    [anon_sym_ATapiUse] = ACTIONS(5),
    [anon_sym_ATapiHeader] = ACTIONS(7),
    [anon_sym_ATapiPermission] = ACTIONS(9),
    [anon_sym_ATapiDeprecated] = ACTIONS(11),
    [anon_sym_ATapi] = ACTIONS(13),
    [anon_sym_ATapiError] = ACTIONS(15),
    [anon_sym_ATapiName] = ACTIONS(17),
    [anon_sym_ATapiGroup] = ACTIONS(19),
    [anon_sym_ATapiParamExample] = ACTIONS(21),
    [anon_sym_ATapiDefine] = ACTIONS(23),
    [anon_sym_ATapiExample] = ACTIONS(25),
    [anon_sym_ATapiDescription] = ACTIONS(27),
    [sym__end] = ACTIONS(167),
    [anon_sym_ATapiSuccessExample] = ACTIONS(29),
    [anon_sym_ATapiSampleRequest] = ACTIONS(31),
    [anon_sym_ATapiVersion] = ACTIONS(33),
    [anon_sym_ATapiHeaderExample] = ACTIONS(35),
    [anon_sym_ATapiPrivate] = ACTIONS(37),
    [anon_sym_ATapiParam] = ACTIONS(39),
    [anon_sym_ATapiIgnore] = ACTIONS(41),
    [anon_sym_ATapiErrorExample] = ACTIONS(43),
    [anon_sym_ATapiSuccess] = ACTIONS(45),
  },
  [28] = {
    [aux_sym_description_repeat1] = STATE(87),
    [anon_sym_ATapiUse] = ACTIONS(161),
    [anon_sym_ATapiHeader] = ACTIONS(163),
    [anon_sym_ATapiPermission] = ACTIONS(161),
    [anon_sym_ATapiDeprecated] = ACTIONS(161),
    [anon_sym_ATapi] = ACTIONS(163),
    [anon_sym_ATapiError] = ACTIONS(163),
    [anon_sym_ATapiName] = ACTIONS(161),
    [anon_sym_ATapiGroup] = ACTIONS(161),
    [anon_sym_ATapiParamExample] = ACTIONS(161),
    [anon_sym_ATapiDefine] = ACTIONS(161),
    [anon_sym_ATapiExample] = ACTIONS(161),
    [anon_sym_ATapiDescription] = ACTIONS(161),
    [sym__end] = ACTIONS(161),
    [anon_sym_ATapiSuccessExample] = ACTIONS(161),
    [anon_sym_ATapiSampleRequest] = ACTIONS(161),
    [anon_sym_ATapiVersion] = ACTIONS(161),
    [anon_sym_ATapiHeaderExample] = ACTIONS(161),
    [anon_sym_ATapiPrivate] = ACTIONS(161),
    [anon_sym_ATapiParam] = ACTIONS(163),
    [anon_sym_ATapiIgnore] = ACTIONS(161),
    [anon_sym_ATapiErrorExample] = ACTIONS(161),
    [anon_sym_ATapiSuccess] = ACTIONS(163),
    [sym__text] = ACTIONS(169),
  },
  [29] = {
    [anon_sym_ATapiUse] = ACTIONS(171),
    [anon_sym_ATapiHeader] = ACTIONS(173),
    [anon_sym_ATapiPermission] = ACTIONS(171),
    [anon_sym_ATapiDeprecated] = ACTIONS(171),
    [anon_sym_ATapi] = ACTIONS(173),
    [anon_sym_ATapiError] = ACTIONS(173),
    [anon_sym_ATapiName] = ACTIONS(171),
    [anon_sym_ATapiGroup] = ACTIONS(171),
    [anon_sym_ATapiParamExample] = ACTIONS(171),
    [anon_sym_ATapiDefine] = ACTIONS(171),
    [anon_sym_ATapiExample] = ACTIONS(171),
    [anon_sym_ATapiDescription] = ACTIONS(171),
    [sym__end] = ACTIONS(171),
    [anon_sym_ATapiSuccessExample] = ACTIONS(171),
    [anon_sym_ATapiSampleRequest] = ACTIONS(171),
    [anon_sym_ATapiVersion] = ACTIONS(171),
    [anon_sym_ATapiHeaderExample] = ACTIONS(171),
    [anon_sym_ATapiPrivate] = ACTIONS(171),
    [anon_sym_ATapiParam] = ACTIONS(173),
    [anon_sym_ATapiIgnore] = ACTIONS(171),
    [anon_sym_ATapiErrorExample] = ACTIONS(171),
    [anon_sym_ATapiSuccess] = ACTIONS(173),
  },
  [30] = {
    [sym_name] = STATE(89),
    [aux_sym_name_token1] = ACTIONS(175),
  },
  [31] = {
    [anon_sym_ATapiUse] = ACTIONS(177),
    [anon_sym_ATapiHeader] = ACTIONS(179),
    [anon_sym_ATapiPermission] = ACTIONS(177),
    [anon_sym_ATapiDeprecated] = ACTIONS(177),
    [anon_sym_ATapi] = ACTIONS(179),
    [anon_sym_ATapiError] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_ATapiName] = ACTIONS(177),
    [anon_sym_ATapiGroup] = ACTIONS(177),
    [anon_sym_ATapiParamExample] = ACTIONS(177),
    [anon_sym_ATapiDefine] = ACTIONS(177),
    [anon_sym_ATapiExample] = ACTIONS(177),
    [anon_sym_ATapiDescription] = ACTIONS(177),
    [sym__end] = ACTIONS(177),
    [aux_sym_name_token1] = ACTIONS(177),
    [anon_sym_ATapiSuccessExample] = ACTIONS(177),
    [anon_sym_ATapiSampleRequest] = ACTIONS(177),
    [anon_sym_ATapiVersion] = ACTIONS(177),
    [anon_sym_ATapiHeaderExample] = ACTIONS(177),
    [anon_sym_ATapiPrivate] = ACTIONS(177),
    [anon_sym_ATapiParam] = ACTIONS(179),
    [anon_sym_ATapiIgnore] = ACTIONS(177),
    [anon_sym_ATapiErrorExample] = ACTIONS(177),
    [anon_sym_ATapiSuccess] = ACTIONS(179),
    [sym__text] = ACTIONS(179),
  },
  [32] = {
    [anon_sym_ATapiUse] = ACTIONS(181),
    [anon_sym_ATapiHeader] = ACTIONS(183),
    [anon_sym_ATapiPermission] = ACTIONS(181),
    [anon_sym_ATapiDeprecated] = ACTIONS(181),
    [anon_sym_ATapi] = ACTIONS(183),
    [anon_sym_ATapiError] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_ATapiName] = ACTIONS(181),
    [anon_sym_ATapiGroup] = ACTIONS(181),
    [anon_sym_ATapiParamExample] = ACTIONS(181),
    [anon_sym_ATapiDefine] = ACTIONS(181),
    [anon_sym_ATapiExample] = ACTIONS(181),
    [anon_sym_ATapiDescription] = ACTIONS(181),
    [sym__end] = ACTIONS(181),
    [aux_sym_name_token1] = ACTIONS(181),
    [anon_sym_ATapiSuccessExample] = ACTIONS(181),
    [anon_sym_ATapiSampleRequest] = ACTIONS(181),
    [anon_sym_ATapiVersion] = ACTIONS(181),
    [anon_sym_ATapiHeaderExample] = ACTIONS(181),
    [anon_sym_ATapiPrivate] = ACTIONS(181),
    [anon_sym_ATapiParam] = ACTIONS(183),
    [anon_sym_ATapiIgnore] = ACTIONS(181),
    [anon_sym_ATapiErrorExample] = ACTIONS(181),
    [aux_sym_type_token1] = ACTIONS(181),
    [anon_sym_ATapiSuccess] = ACTIONS(183),
    [sym__text] = ACTIONS(183),
  },
  [33] = {
    [anon_sym_ATapiUse] = ACTIONS(185),
    [anon_sym_ATapiHeader] = ACTIONS(187),
    [anon_sym_ATapiPermission] = ACTIONS(185),
    [anon_sym_ATapiDeprecated] = ACTIONS(185),
    [anon_sym_ATapi] = ACTIONS(187),
    [anon_sym_ATapiError] = ACTIONS(187),
    [anon_sym_ATapiName] = ACTIONS(185),
    [anon_sym_ATapiGroup] = ACTIONS(185),
    [anon_sym_ATapiParamExample] = ACTIONS(185),
    [anon_sym_ATapiDefine] = ACTIONS(185),
    [anon_sym_ATapiExample] = ACTIONS(185),
    [anon_sym_ATapiDescription] = ACTIONS(185),
    [sym__end] = ACTIONS(185),
    [anon_sym_ATapiSuccessExample] = ACTIONS(185),
    [anon_sym_ATapiSampleRequest] = ACTIONS(185),
    [anon_sym_ATapiVersion] = ACTIONS(185),
    [anon_sym_ATapiHeaderExample] = ACTIONS(185),
    [anon_sym_ATapiPrivate] = ACTIONS(185),
    [anon_sym_ATapiParam] = ACTIONS(187),
    [anon_sym_ATapiIgnore] = ACTIONS(185),
    [anon_sym_ATapiErrorExample] = ACTIONS(185),
    [anon_sym_ATapiSuccess] = ACTIONS(187),
    [sym__text] = ACTIONS(187),
  },
  [34] = {
    [anon_sym_ATapiUse] = ACTIONS(189),
    [anon_sym_ATapiHeader] = ACTIONS(191),
    [anon_sym_ATapiPermission] = ACTIONS(189),
    [anon_sym_ATapiDeprecated] = ACTIONS(189),
    [anon_sym_ATapi] = ACTIONS(191),
    [anon_sym_ATapiError] = ACTIONS(191),
    [anon_sym_ATapiName] = ACTIONS(189),
    [anon_sym_ATapiGroup] = ACTIONS(189),
    [anon_sym_ATapiParamExample] = ACTIONS(189),
    [anon_sym_ATapiDefine] = ACTIONS(189),
    [anon_sym_ATapiExample] = ACTIONS(189),
    [anon_sym_ATapiDescription] = ACTIONS(189),
    [sym__end] = ACTIONS(189),
    [anon_sym_ATapiSuccessExample] = ACTIONS(189),
    [anon_sym_ATapiSampleRequest] = ACTIONS(189),
    [anon_sym_ATapiVersion] = ACTIONS(189),
    [anon_sym_ATapiHeaderExample] = ACTIONS(189),
    [anon_sym_ATapiPrivate] = ACTIONS(189),
    [anon_sym_ATapiParam] = ACTIONS(191),
    [anon_sym_ATapiIgnore] = ACTIONS(189),
    [anon_sym_ATapiErrorExample] = ACTIONS(189),
    [anon_sym_ATapiSuccess] = ACTIONS(191),
    [sym__text] = ACTIONS(191),
  },
  [35] = {
    [anon_sym_ATapiUse] = ACTIONS(193),
    [anon_sym_ATapiHeader] = ACTIONS(195),
    [anon_sym_ATapiPermission] = ACTIONS(193),
    [anon_sym_ATapiDeprecated] = ACTIONS(193),
    [anon_sym_ATapi] = ACTIONS(195),
    [anon_sym_ATapiError] = ACTIONS(195),
    [anon_sym_ATapiName] = ACTIONS(193),
    [anon_sym_ATapiGroup] = ACTIONS(193),
    [anon_sym_ATapiParamExample] = ACTIONS(193),
    [anon_sym_ATapiDefine] = ACTIONS(193),
    [anon_sym_ATapiExample] = ACTIONS(193),
    [anon_sym_ATapiDescription] = ACTIONS(193),
    [sym__end] = ACTIONS(193),
    [anon_sym_ATapiSuccessExample] = ACTIONS(193),
    [anon_sym_ATapiSampleRequest] = ACTIONS(193),
    [anon_sym_ATapiVersion] = ACTIONS(193),
    [anon_sym_ATapiHeaderExample] = ACTIONS(193),
    [anon_sym_ATapiPrivate] = ACTIONS(193),
    [anon_sym_ATapiParam] = ACTIONS(195),
    [anon_sym_ATapiIgnore] = ACTIONS(193),
    [anon_sym_ATapiErrorExample] = ACTIONS(193),
    [anon_sym_ATapiSuccess] = ACTIONS(195),
  },
  [36] = {
    [sym_description] = STATE(90),
    [anon_sym_ATapiUse] = ACTIONS(193),
    [anon_sym_ATapiHeader] = ACTIONS(195),
    [anon_sym_ATapiPermission] = ACTIONS(193),
    [anon_sym_ATapiDeprecated] = ACTIONS(193),
    [anon_sym_ATapi] = ACTIONS(195),
    [anon_sym_ATapiError] = ACTIONS(195),
    [anon_sym_ATapiName] = ACTIONS(193),
    [anon_sym_ATapiGroup] = ACTIONS(193),
    [anon_sym_ATapiParamExample] = ACTIONS(193),
    [anon_sym_ATapiDefine] = ACTIONS(193),
    [anon_sym_ATapiExample] = ACTIONS(193),
    [anon_sym_ATapiDescription] = ACTIONS(193),
    [sym__end] = ACTIONS(193),
    [anon_sym_ATapiSuccessExample] = ACTIONS(193),
    [anon_sym_ATapiSampleRequest] = ACTIONS(193),
    [anon_sym_ATapiVersion] = ACTIONS(193),
    [anon_sym_ATapiHeaderExample] = ACTIONS(193),
    [anon_sym_ATapiPrivate] = ACTIONS(193),
    [anon_sym_ATapiParam] = ACTIONS(195),
    [anon_sym_ATapiIgnore] = ACTIONS(193),
    [anon_sym_ATapiErrorExample] = ACTIONS(193),
    [anon_sym_ATapiSuccess] = ACTIONS(195),
    [sym__text] = ACTIONS(55),
  },
  [37] = {
    [sym_description] = STATE(90),
    [sym_parameter] = STATE(91),
    [sym_name] = STATE(34),
    [sym_optional] = STATE(34),
    [anon_sym_ATapiUse] = ACTIONS(193),
    [anon_sym_ATapiHeader] = ACTIONS(195),
    [anon_sym_ATapiPermission] = ACTIONS(193),
    [anon_sym_ATapiDeprecated] = ACTIONS(193),
    [anon_sym_ATapi] = ACTIONS(195),
    [anon_sym_ATapiError] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_ATapiName] = ACTIONS(193),
    [anon_sym_ATapiGroup] = ACTIONS(193),
    [anon_sym_ATapiParamExample] = ACTIONS(193),
    [anon_sym_ATapiDefine] = ACTIONS(193),
    [anon_sym_ATapiExample] = ACTIONS(193),
    [anon_sym_ATapiDescription] = ACTIONS(193),
    [sym__end] = ACTIONS(193),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(193),
    [anon_sym_ATapiSampleRequest] = ACTIONS(193),
    [anon_sym_ATapiVersion] = ACTIONS(193),
    [anon_sym_ATapiHeaderExample] = ACTIONS(193),
    [anon_sym_ATapiPrivate] = ACTIONS(193),
    [anon_sym_ATapiParam] = ACTIONS(195),
    [anon_sym_ATapiIgnore] = ACTIONS(193),
    [anon_sym_ATapiErrorExample] = ACTIONS(193),
    [anon_sym_ATapiSuccess] = ACTIONS(195),
    [sym__text] = ACTIONS(55),
  },
  [38] = {
    [sym_description] = STATE(90),
    [sym_parameter] = STATE(91),
    [sym_type] = STATE(92),
    [sym_name] = STATE(34),
    [sym_optional] = STATE(34),
    [anon_sym_ATapiUse] = ACTIONS(193),
    [anon_sym_ATapiHeader] = ACTIONS(195),
    [anon_sym_ATapiPermission] = ACTIONS(193),
    [anon_sym_ATapiDeprecated] = ACTIONS(193),
    [anon_sym_ATapi] = ACTIONS(195),
    [anon_sym_ATapiError] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_ATapiName] = ACTIONS(193),
    [anon_sym_ATapiGroup] = ACTIONS(193),
    [anon_sym_ATapiParamExample] = ACTIONS(193),
    [anon_sym_ATapiDefine] = ACTIONS(193),
    [anon_sym_ATapiExample] = ACTIONS(193),
    [anon_sym_ATapiDescription] = ACTIONS(193),
    [sym__end] = ACTIONS(193),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(193),
    [anon_sym_ATapiSampleRequest] = ACTIONS(193),
    [anon_sym_ATapiVersion] = ACTIONS(193),
    [anon_sym_ATapiHeaderExample] = ACTIONS(193),
    [anon_sym_ATapiPrivate] = ACTIONS(193),
    [anon_sym_ATapiParam] = ACTIONS(195),
    [anon_sym_ATapiIgnore] = ACTIONS(193),
    [anon_sym_ATapiErrorExample] = ACTIONS(193),
    [aux_sym_type_token1] = ACTIONS(67),
    [anon_sym_ATapiSuccess] = ACTIONS(195),
    [sym__text] = ACTIONS(55),
  },
  [39] = {
    [anon_sym_ATapiUse] = ACTIONS(197),
    [anon_sym_ATapiHeader] = ACTIONS(199),
    [anon_sym_ATapiPermission] = ACTIONS(197),
    [anon_sym_ATapiDeprecated] = ACTIONS(197),
    [anon_sym_ATapi] = ACTIONS(199),
    [anon_sym_ATapiError] = ACTIONS(199),
    [anon_sym_ATapiName] = ACTIONS(197),
    [anon_sym_ATapiGroup] = ACTIONS(197),
    [anon_sym_ATapiParamExample] = ACTIONS(197),
    [anon_sym_ATapiDefine] = ACTIONS(197),
    [anon_sym_ATapiExample] = ACTIONS(197),
    [anon_sym_ATapiDescription] = ACTIONS(197),
    [sym__end] = ACTIONS(197),
    [anon_sym_ATapiSuccessExample] = ACTIONS(197),
    [anon_sym_ATapiSampleRequest] = ACTIONS(197),
    [anon_sym_ATapiVersion] = ACTIONS(197),
    [anon_sym_ATapiHeaderExample] = ACTIONS(197),
    [anon_sym_ATapiPrivate] = ACTIONS(197),
    [anon_sym_ATapiParam] = ACTIONS(199),
    [anon_sym_ATapiIgnore] = ACTIONS(197),
    [anon_sym_ATapiErrorExample] = ACTIONS(197),
    [anon_sym_ATapiSuccess] = ACTIONS(199),
  },
  [40] = {
    [anon_sym_ATapiUse] = ACTIONS(201),
    [anon_sym_ATapiHeader] = ACTIONS(203),
    [anon_sym_ATapiPermission] = ACTIONS(201),
    [anon_sym_ATapiDeprecated] = ACTIONS(201),
    [anon_sym_ATapi] = ACTIONS(203),
    [anon_sym_ATapiError] = ACTIONS(203),
    [anon_sym_ATapiName] = ACTIONS(201),
    [anon_sym_ATapiGroup] = ACTIONS(201),
    [anon_sym_ATapiParamExample] = ACTIONS(201),
    [anon_sym_ATapiDefine] = ACTIONS(201),
    [anon_sym_ATapiExample] = ACTIONS(201),
    [anon_sym_ATapiDescription] = ACTIONS(201),
    [sym__end] = ACTIONS(201),
    [anon_sym_ATapiSuccessExample] = ACTIONS(201),
    [anon_sym_ATapiSampleRequest] = ACTIONS(201),
    [anon_sym_ATapiVersion] = ACTIONS(201),
    [anon_sym_ATapiHeaderExample] = ACTIONS(201),
    [anon_sym_ATapiPrivate] = ACTIONS(201),
    [anon_sym_ATapiParam] = ACTIONS(203),
    [anon_sym_ATapiIgnore] = ACTIONS(201),
    [anon_sym_ATapiErrorExample] = ACTIONS(201),
    [anon_sym_ATapiSuccess] = ACTIONS(203),
  },
  [41] = {
    [anon_sym_put] = ACTIONS(205),
    [anon_sym_patch] = ACTIONS(205),
    [anon_sym_trace] = ACTIONS(205),
    [anon_sym_delete] = ACTIONS(205),
    [anon_sym_head] = ACTIONS(205),
    [anon_sym_options] = ACTIONS(205),
    [anon_sym_get] = ACTIONS(205),
    [anon_sym_post] = ACTIONS(205),
    [anon_sym_connect] = ACTIONS(205),
  },
  [42] = {
    [anon_sym_ATapiUse] = ACTIONS(207),
    [anon_sym_ATapiHeader] = ACTIONS(209),
    [anon_sym_ATapiPermission] = ACTIONS(207),
    [anon_sym_ATapiDeprecated] = ACTIONS(207),
    [anon_sym_ATapi] = ACTIONS(209),
    [anon_sym_ATapiError] = ACTIONS(209),
    [anon_sym_ATapiName] = ACTIONS(207),
    [anon_sym_ATapiGroup] = ACTIONS(207),
    [anon_sym_ATapiParamExample] = ACTIONS(207),
    [anon_sym_ATapiDefine] = ACTIONS(207),
    [anon_sym_ATapiExample] = ACTIONS(207),
    [anon_sym_ATapiDescription] = ACTIONS(207),
    [sym__end] = ACTIONS(207),
    [anon_sym_ATapiSuccessExample] = ACTIONS(207),
    [anon_sym_ATapiSampleRequest] = ACTIONS(207),
    [anon_sym_ATapiVersion] = ACTIONS(207),
    [anon_sym_ATapiHeaderExample] = ACTIONS(207),
    [anon_sym_ATapiPrivate] = ACTIONS(207),
    [anon_sym_ATapiParam] = ACTIONS(209),
    [anon_sym_ATapiIgnore] = ACTIONS(207),
    [anon_sym_ATapiErrorExample] = ACTIONS(207),
    [anon_sym_ATapiSuccess] = ACTIONS(209),
    [sym__text] = ACTIONS(209),
  },
  [43] = {
    [sym_description] = STATE(94),
    [anon_sym_ATapiUse] = ACTIONS(211),
    [anon_sym_ATapiHeader] = ACTIONS(213),
    [anon_sym_ATapiPermission] = ACTIONS(211),
    [anon_sym_ATapiDeprecated] = ACTIONS(211),
    [anon_sym_ATapi] = ACTIONS(213),
    [anon_sym_ATapiError] = ACTIONS(213),
    [anon_sym_ATapiName] = ACTIONS(211),
    [anon_sym_ATapiGroup] = ACTIONS(211),
    [anon_sym_ATapiParamExample] = ACTIONS(211),
    [anon_sym_ATapiDefine] = ACTIONS(211),
    [anon_sym_ATapiExample] = ACTIONS(211),
    [anon_sym_ATapiDescription] = ACTIONS(211),
    [sym__end] = ACTIONS(211),
    [anon_sym_ATapiSuccessExample] = ACTIONS(211),
    [anon_sym_ATapiSampleRequest] = ACTIONS(211),
    [anon_sym_ATapiVersion] = ACTIONS(211),
    [anon_sym_ATapiHeaderExample] = ACTIONS(211),
    [anon_sym_ATapiPrivate] = ACTIONS(211),
    [anon_sym_ATapiParam] = ACTIONS(213),
    [anon_sym_ATapiIgnore] = ACTIONS(211),
    [anon_sym_ATapiErrorExample] = ACTIONS(211),
    [anon_sym_ATapiSuccess] = ACTIONS(213),
    [sym__text] = ACTIONS(55),
  },
  [44] = {
    [sym_path] = STATE(95),
    [sym_description] = STATE(94),
    [anon_sym_ATapiUse] = ACTIONS(211),
    [anon_sym_ATapiHeader] = ACTIONS(213),
    [anon_sym_ATapiPermission] = ACTIONS(211),
    [anon_sym_ATapiDeprecated] = ACTIONS(211),
    [anon_sym_ATapi] = ACTIONS(213),
    [anon_sym_ATapiError] = ACTIONS(213),
    [anon_sym_ATapiName] = ACTIONS(211),
    [anon_sym_ATapiGroup] = ACTIONS(211),
    [anon_sym_ATapiParamExample] = ACTIONS(211),
    [anon_sym_ATapiDefine] = ACTIONS(211),
    [anon_sym_ATapiExample] = ACTIONS(211),
    [anon_sym_ATapiDescription] = ACTIONS(211),
    [sym__end] = ACTIONS(213),
    [aux_sym_path_token1] = ACTIONS(83),
    [anon_sym_ATapiSuccessExample] = ACTIONS(211),
    [anon_sym_ATapiSampleRequest] = ACTIONS(211),
    [anon_sym_ATapiVersion] = ACTIONS(211),
    [anon_sym_ATapiHeaderExample] = ACTIONS(211),
    [anon_sym_ATapiPrivate] = ACTIONS(211),
    [anon_sym_ATapiParam] = ACTIONS(213),
    [anon_sym_ATapiIgnore] = ACTIONS(211),
    [anon_sym_ATapiErrorExample] = ACTIONS(211),
    [anon_sym_ATapiSuccess] = ACTIONS(213),
    [sym__text] = ACTIONS(55),
  },
  [45] = {
    [anon_sym_ATapiUse] = ACTIONS(215),
    [anon_sym_ATapiHeader] = ACTIONS(217),
    [anon_sym_ATapiPermission] = ACTIONS(215),
    [anon_sym_ATapiDeprecated] = ACTIONS(215),
    [anon_sym_ATapi] = ACTIONS(217),
    [anon_sym_ATapiError] = ACTIONS(217),
    [anon_sym_ATapiName] = ACTIONS(215),
    [anon_sym_ATapiGroup] = ACTIONS(215),
    [anon_sym_ATapiParamExample] = ACTIONS(215),
    [anon_sym_ATapiDefine] = ACTIONS(215),
    [anon_sym_ATapiExample] = ACTIONS(215),
    [anon_sym_ATapiDescription] = ACTIONS(215),
    [sym__end] = ACTIONS(215),
    [anon_sym_ATapiSuccessExample] = ACTIONS(215),
    [anon_sym_ATapiSampleRequest] = ACTIONS(215),
    [anon_sym_ATapiVersion] = ACTIONS(215),
    [anon_sym_ATapiHeaderExample] = ACTIONS(215),
    [anon_sym_ATapiPrivate] = ACTIONS(215),
    [anon_sym_ATapiParam] = ACTIONS(217),
    [anon_sym_ATapiIgnore] = ACTIONS(215),
    [anon_sym_ATapiErrorExample] = ACTIONS(215),
    [anon_sym_ATapiSuccess] = ACTIONS(217),
  },
  [46] = {
    [anon_sym_ATapiUse] = ACTIONS(177),
    [anon_sym_ATapiHeader] = ACTIONS(179),
    [anon_sym_ATapiPermission] = ACTIONS(177),
    [anon_sym_ATapiDeprecated] = ACTIONS(177),
    [anon_sym_ATapi] = ACTIONS(179),
    [anon_sym_ATapiError] = ACTIONS(179),
    [anon_sym_ATapiName] = ACTIONS(177),
    [anon_sym_ATapiGroup] = ACTIONS(177),
    [anon_sym_ATapiParamExample] = ACTIONS(177),
    [anon_sym_ATapiDefine] = ACTIONS(177),
    [anon_sym_ATapiExample] = ACTIONS(177),
    [anon_sym_ATapiDescription] = ACTIONS(177),
    [sym__end] = ACTIONS(177),
    [aux_sym_name_token1] = ACTIONS(177),
    [anon_sym_ATapiSuccessExample] = ACTIONS(177),
    [anon_sym_ATapiSampleRequest] = ACTIONS(177),
    [anon_sym_ATapiVersion] = ACTIONS(177),
    [anon_sym_ATapiHeaderExample] = ACTIONS(177),
    [anon_sym_ATapiPrivate] = ACTIONS(177),
    [anon_sym_ATapiParam] = ACTIONS(179),
    [anon_sym_ATapiIgnore] = ACTIONS(177),
    [anon_sym_ATapiErrorExample] = ACTIONS(177),
    [anon_sym_ATapiSuccess] = ACTIONS(179),
    [sym__text] = ACTIONS(179),
  },
  [47] = {
    [anon_sym_ATapiUse] = ACTIONS(181),
    [anon_sym_ATapiHeader] = ACTIONS(183),
    [anon_sym_ATapiPermission] = ACTIONS(181),
    [anon_sym_ATapiDeprecated] = ACTIONS(181),
    [anon_sym_ATapi] = ACTIONS(183),
    [anon_sym_ATapiError] = ACTIONS(183),
    [anon_sym_ATapiName] = ACTIONS(181),
    [anon_sym_ATapiGroup] = ACTIONS(181),
    [anon_sym_ATapiParamExample] = ACTIONS(181),
    [anon_sym_ATapiDefine] = ACTIONS(181),
    [anon_sym_ATapiExample] = ACTIONS(181),
    [anon_sym_ATapiDescription] = ACTIONS(181),
    [sym__end] = ACTIONS(181),
    [aux_sym_name_token1] = ACTIONS(181),
    [anon_sym_ATapiSuccessExample] = ACTIONS(181),
    [anon_sym_ATapiSampleRequest] = ACTIONS(181),
    [anon_sym_ATapiVersion] = ACTIONS(181),
    [anon_sym_ATapiHeaderExample] = ACTIONS(181),
    [anon_sym_ATapiPrivate] = ACTIONS(181),
    [anon_sym_ATapiParam] = ACTIONS(183),
    [anon_sym_ATapiIgnore] = ACTIONS(181),
    [anon_sym_ATapiErrorExample] = ACTIONS(181),
    [aux_sym_type_token1] = ACTIONS(181),
    [anon_sym_ATapiSuccess] = ACTIONS(183),
    [sym__text] = ACTIONS(183),
  },
  [48] = {
    [anon_sym_ATapiUse] = ACTIONS(219),
    [anon_sym_ATapiHeader] = ACTIONS(221),
    [anon_sym_ATapiPermission] = ACTIONS(219),
    [anon_sym_ATapiDeprecated] = ACTIONS(219),
    [anon_sym_ATapi] = ACTIONS(221),
    [anon_sym_ATapiError] = ACTIONS(221),
    [anon_sym_ATapiName] = ACTIONS(219),
    [anon_sym_ATapiGroup] = ACTIONS(219),
    [anon_sym_ATapiParamExample] = ACTIONS(219),
    [anon_sym_ATapiDefine] = ACTIONS(219),
    [anon_sym_ATapiExample] = ACTIONS(219),
    [anon_sym_ATapiDescription] = ACTIONS(219),
    [sym__end] = ACTIONS(219),
    [anon_sym_ATapiSuccessExample] = ACTIONS(219),
    [anon_sym_ATapiSampleRequest] = ACTIONS(219),
    [anon_sym_ATapiVersion] = ACTIONS(219),
    [anon_sym_ATapiHeaderExample] = ACTIONS(219),
    [anon_sym_ATapiPrivate] = ACTIONS(219),
    [anon_sym_ATapiParam] = ACTIONS(221),
    [anon_sym_ATapiIgnore] = ACTIONS(219),
    [anon_sym_ATapiErrorExample] = ACTIONS(219),
    [anon_sym_ATapiSuccess] = ACTIONS(221),
  },
  [49] = {
    [sym_description] = STATE(96),
    [sym_name] = STATE(97),
    [anon_sym_ATapiUse] = ACTIONS(219),
    [anon_sym_ATapiHeader] = ACTIONS(221),
    [anon_sym_ATapiPermission] = ACTIONS(219),
    [anon_sym_ATapiDeprecated] = ACTIONS(219),
    [anon_sym_ATapi] = ACTIONS(221),
    [anon_sym_ATapiError] = ACTIONS(221),
    [anon_sym_ATapiName] = ACTIONS(219),
    [anon_sym_ATapiGroup] = ACTIONS(219),
    [anon_sym_ATapiParamExample] = ACTIONS(219),
    [anon_sym_ATapiDefine] = ACTIONS(219),
    [anon_sym_ATapiExample] = ACTIONS(219),
    [anon_sym_ATapiDescription] = ACTIONS(219),
    [sym__end] = ACTIONS(219),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(219),
    [anon_sym_ATapiSampleRequest] = ACTIONS(219),
    [anon_sym_ATapiVersion] = ACTIONS(219),
    [anon_sym_ATapiHeaderExample] = ACTIONS(219),
    [anon_sym_ATapiPrivate] = ACTIONS(219),
    [anon_sym_ATapiParam] = ACTIONS(221),
    [anon_sym_ATapiIgnore] = ACTIONS(219),
    [anon_sym_ATapiErrorExample] = ACTIONS(219),
    [anon_sym_ATapiSuccess] = ACTIONS(221),
    [sym__text] = ACTIONS(55),
  },
  [50] = {
    [sym_description] = STATE(96),
    [sym_name] = STATE(97),
    [sym_type] = STATE(98),
    [anon_sym_ATapiUse] = ACTIONS(219),
    [anon_sym_ATapiHeader] = ACTIONS(221),
    [anon_sym_ATapiPermission] = ACTIONS(219),
    [anon_sym_ATapiDeprecated] = ACTIONS(219),
    [anon_sym_ATapi] = ACTIONS(221),
    [anon_sym_ATapiError] = ACTIONS(221),
    [anon_sym_ATapiName] = ACTIONS(219),
    [anon_sym_ATapiGroup] = ACTIONS(219),
    [anon_sym_ATapiParamExample] = ACTIONS(219),
    [anon_sym_ATapiDefine] = ACTIONS(219),
    [anon_sym_ATapiExample] = ACTIONS(219),
    [anon_sym_ATapiDescription] = ACTIONS(219),
    [sym__end] = ACTIONS(219),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(219),
    [anon_sym_ATapiSampleRequest] = ACTIONS(219),
    [anon_sym_ATapiVersion] = ACTIONS(219),
    [anon_sym_ATapiHeaderExample] = ACTIONS(219),
    [anon_sym_ATapiPrivate] = ACTIONS(219),
    [anon_sym_ATapiParam] = ACTIONS(221),
    [anon_sym_ATapiIgnore] = ACTIONS(219),
    [anon_sym_ATapiErrorExample] = ACTIONS(219),
    [aux_sym_type_token1] = ACTIONS(91),
    [anon_sym_ATapiSuccess] = ACTIONS(221),
    [sym__text] = ACTIONS(55),
  },
  [51] = {
    [sym_description] = STATE(96),
    [anon_sym_ATapiUse] = ACTIONS(219),
    [anon_sym_ATapiHeader] = ACTIONS(221),
    [anon_sym_ATapiPermission] = ACTIONS(219),
    [anon_sym_ATapiDeprecated] = ACTIONS(219),
    [anon_sym_ATapi] = ACTIONS(221),
    [anon_sym_ATapiError] = ACTIONS(221),
    [anon_sym_ATapiName] = ACTIONS(219),
    [anon_sym_ATapiGroup] = ACTIONS(219),
    [anon_sym_ATapiParamExample] = ACTIONS(219),
    [anon_sym_ATapiDefine] = ACTIONS(219),
    [anon_sym_ATapiExample] = ACTIONS(219),
    [anon_sym_ATapiDescription] = ACTIONS(219),
    [sym__end] = ACTIONS(219),
    [anon_sym_ATapiSuccessExample] = ACTIONS(219),
    [anon_sym_ATapiSampleRequest] = ACTIONS(219),
    [anon_sym_ATapiVersion] = ACTIONS(219),
    [anon_sym_ATapiHeaderExample] = ACTIONS(219),
    [anon_sym_ATapiPrivate] = ACTIONS(219),
    [anon_sym_ATapiParam] = ACTIONS(221),
    [anon_sym_ATapiIgnore] = ACTIONS(219),
    [anon_sym_ATapiErrorExample] = ACTIONS(219),
    [anon_sym_ATapiSuccess] = ACTIONS(221),
    [sym__text] = ACTIONS(55),
  },
  [52] = {
    [anon_sym_ATapiUse] = ACTIONS(223),
    [anon_sym_ATapiHeader] = ACTIONS(225),
    [anon_sym_ATapiPermission] = ACTIONS(223),
    [anon_sym_ATapiDeprecated] = ACTIONS(223),
    [anon_sym_ATapi] = ACTIONS(225),
    [anon_sym_ATapiError] = ACTIONS(225),
    [anon_sym_ATapiName] = ACTIONS(223),
    [anon_sym_ATapiGroup] = ACTIONS(223),
    [anon_sym_ATapiParamExample] = ACTIONS(223),
    [anon_sym_ATapiDefine] = ACTIONS(223),
    [anon_sym_ATapiExample] = ACTIONS(223),
    [anon_sym_ATapiDescription] = ACTIONS(223),
    [sym__end] = ACTIONS(223),
    [anon_sym_ATapiSuccessExample] = ACTIONS(223),
    [anon_sym_ATapiSampleRequest] = ACTIONS(223),
    [anon_sym_ATapiVersion] = ACTIONS(223),
    [anon_sym_ATapiHeaderExample] = ACTIONS(223),
    [anon_sym_ATapiPrivate] = ACTIONS(223),
    [anon_sym_ATapiParam] = ACTIONS(225),
    [anon_sym_ATapiIgnore] = ACTIONS(223),
    [anon_sym_ATapiErrorExample] = ACTIONS(223),
    [anon_sym_ATapiSuccess] = ACTIONS(225),
  },
  [53] = {
    [anon_sym_ATapiUse] = ACTIONS(227),
    [anon_sym_ATapiHeader] = ACTIONS(229),
    [anon_sym_ATapiPermission] = ACTIONS(227),
    [anon_sym_ATapiDeprecated] = ACTIONS(227),
    [anon_sym_ATapi] = ACTIONS(229),
    [anon_sym_ATapiError] = ACTIONS(229),
    [anon_sym_ATapiName] = ACTIONS(227),
    [anon_sym_ATapiGroup] = ACTIONS(227),
    [anon_sym_ATapiParamExample] = ACTIONS(227),
    [anon_sym_ATapiDefine] = ACTIONS(227),
    [anon_sym_ATapiExample] = ACTIONS(227),
    [anon_sym_ATapiDescription] = ACTIONS(227),
    [sym__end] = ACTIONS(227),
    [anon_sym_ATapiSuccessExample] = ACTIONS(227),
    [anon_sym_ATapiSampleRequest] = ACTIONS(227),
    [anon_sym_ATapiVersion] = ACTIONS(227),
    [anon_sym_ATapiHeaderExample] = ACTIONS(227),
    [anon_sym_ATapiPrivate] = ACTIONS(227),
    [anon_sym_ATapiParam] = ACTIONS(229),
    [anon_sym_ATapiIgnore] = ACTIONS(227),
    [anon_sym_ATapiErrorExample] = ACTIONS(227),
    [anon_sym_ATapiSuccess] = ACTIONS(229),
  },
  [54] = {
    [anon_sym_ATapiUse] = ACTIONS(177),
    [anon_sym_ATapiHeader] = ACTIONS(179),
    [anon_sym_ATapiPermission] = ACTIONS(177),
    [anon_sym_ATapiDeprecated] = ACTIONS(177),
    [anon_sym_ATapi] = ACTIONS(179),
    [anon_sym_ATapiError] = ACTIONS(179),
    [anon_sym_ATapiName] = ACTIONS(177),
    [anon_sym_ATapiGroup] = ACTIONS(177),
    [anon_sym_ATapiParamExample] = ACTIONS(177),
    [anon_sym_ATapiDefine] = ACTIONS(177),
    [anon_sym_ATapiExample] = ACTIONS(177),
    [anon_sym_ATapiDescription] = ACTIONS(177),
    [sym__end] = ACTIONS(177),
    [anon_sym_ATapiSuccessExample] = ACTIONS(177),
    [anon_sym_ATapiSampleRequest] = ACTIONS(177),
    [anon_sym_ATapiVersion] = ACTIONS(177),
    [anon_sym_ATapiHeaderExample] = ACTIONS(177),
    [anon_sym_ATapiPrivate] = ACTIONS(177),
    [anon_sym_ATapiParam] = ACTIONS(179),
    [anon_sym_ATapiIgnore] = ACTIONS(177),
    [anon_sym_ATapiErrorExample] = ACTIONS(177),
    [anon_sym_ATapiSuccess] = ACTIONS(179),
    [sym__text] = ACTIONS(179),
  },
  [55] = {
    [anon_sym_ATapiUse] = ACTIONS(231),
    [anon_sym_ATapiHeader] = ACTIONS(233),
    [anon_sym_ATapiPermission] = ACTIONS(231),
    [anon_sym_ATapiDeprecated] = ACTIONS(231),
    [anon_sym_ATapi] = ACTIONS(233),
    [anon_sym_ATapiError] = ACTIONS(233),
    [anon_sym_ATapiName] = ACTIONS(231),
    [anon_sym_ATapiGroup] = ACTIONS(231),
    [anon_sym_ATapiParamExample] = ACTIONS(231),
    [anon_sym_ATapiDefine] = ACTIONS(231),
    [anon_sym_ATapiExample] = ACTIONS(231),
    [anon_sym_ATapiDescription] = ACTIONS(231),
    [sym__end] = ACTIONS(231),
    [anon_sym_ATapiSuccessExample] = ACTIONS(231),
    [anon_sym_ATapiSampleRequest] = ACTIONS(231),
    [anon_sym_ATapiVersion] = ACTIONS(231),
    [anon_sym_ATapiHeaderExample] = ACTIONS(231),
    [anon_sym_ATapiPrivate] = ACTIONS(231),
    [anon_sym_ATapiParam] = ACTIONS(233),
    [anon_sym_ATapiIgnore] = ACTIONS(231),
    [anon_sym_ATapiErrorExample] = ACTIONS(231),
    [anon_sym_ATapiSuccess] = ACTIONS(233),
  },
  [56] = {
    [sym_description] = STATE(99),
    [anon_sym_ATapiUse] = ACTIONS(235),
    [anon_sym_ATapiHeader] = ACTIONS(237),
    [anon_sym_ATapiPermission] = ACTIONS(235),
    [anon_sym_ATapiDeprecated] = ACTIONS(235),
    [anon_sym_ATapi] = ACTIONS(237),
    [anon_sym_ATapiError] = ACTIONS(237),
    [anon_sym_ATapiName] = ACTIONS(235),
    [anon_sym_ATapiGroup] = ACTIONS(235),
    [anon_sym_ATapiParamExample] = ACTIONS(235),
    [anon_sym_ATapiDefine] = ACTIONS(235),
    [anon_sym_ATapiExample] = ACTIONS(235),
    [anon_sym_ATapiDescription] = ACTIONS(235),
    [sym__end] = ACTIONS(235),
    [anon_sym_ATapiSuccessExample] = ACTIONS(235),
    [anon_sym_ATapiSampleRequest] = ACTIONS(235),
    [anon_sym_ATapiVersion] = ACTIONS(235),
    [anon_sym_ATapiHeaderExample] = ACTIONS(235),
    [anon_sym_ATapiPrivate] = ACTIONS(235),
    [anon_sym_ATapiParam] = ACTIONS(237),
    [anon_sym_ATapiIgnore] = ACTIONS(235),
    [anon_sym_ATapiErrorExample] = ACTIONS(235),
    [anon_sym_ATapiSuccess] = ACTIONS(237),
    [sym__text] = ACTIONS(55),
  },
  [57] = {
    [anon_sym_ATapiUse] = ACTIONS(239),
    [anon_sym_ATapiHeader] = ACTIONS(241),
    [anon_sym_ATapiPermission] = ACTIONS(239),
    [anon_sym_ATapiDeprecated] = ACTIONS(239),
    [anon_sym_ATapi] = ACTIONS(241),
    [anon_sym_ATapiError] = ACTIONS(241),
    [anon_sym_ATapiName] = ACTIONS(239),
    [anon_sym_ATapiGroup] = ACTIONS(239),
    [anon_sym_ATapiParamExample] = ACTIONS(239),
    [anon_sym_ATapiDefine] = ACTIONS(239),
    [anon_sym_ATapiExample] = ACTIONS(239),
    [anon_sym_ATapiDescription] = ACTIONS(239),
    [sym__end] = ACTIONS(239),
    [anon_sym_ATapiSuccessExample] = ACTIONS(239),
    [anon_sym_ATapiSampleRequest] = ACTIONS(239),
    [anon_sym_ATapiVersion] = ACTIONS(239),
    [anon_sym_ATapiHeaderExample] = ACTIONS(239),
    [anon_sym_ATapiPrivate] = ACTIONS(239),
    [anon_sym_ATapiParam] = ACTIONS(241),
    [anon_sym_ATapiIgnore] = ACTIONS(239),
    [anon_sym_ATapiErrorExample] = ACTIONS(239),
    [anon_sym_ATapiSuccess] = ACTIONS(241),
  },
  [58] = {
    [sym_description] = STATE(100),
    [anon_sym_ATapiUse] = ACTIONS(243),
    [anon_sym_ATapiHeader] = ACTIONS(245),
    [anon_sym_ATapiPermission] = ACTIONS(243),
    [anon_sym_ATapiDeprecated] = ACTIONS(243),
    [anon_sym_ATapi] = ACTIONS(245),
    [anon_sym_ATapiError] = ACTIONS(245),
    [anon_sym_ATapiName] = ACTIONS(243),
    [anon_sym_ATapiGroup] = ACTIONS(243),
    [anon_sym_ATapiParamExample] = ACTIONS(243),
    [anon_sym_ATapiDefine] = ACTIONS(243),
    [anon_sym_ATapiExample] = ACTIONS(243),
    [anon_sym_ATapiDescription] = ACTIONS(243),
    [sym__end] = ACTIONS(243),
    [anon_sym_ATapiSuccessExample] = ACTIONS(243),
    [anon_sym_ATapiSampleRequest] = ACTIONS(243),
    [anon_sym_ATapiVersion] = ACTIONS(243),
    [anon_sym_ATapiHeaderExample] = ACTIONS(243),
    [anon_sym_ATapiPrivate] = ACTIONS(243),
    [anon_sym_ATapiParam] = ACTIONS(245),
    [anon_sym_ATapiIgnore] = ACTIONS(243),
    [anon_sym_ATapiErrorExample] = ACTIONS(243),
    [anon_sym_ATapiSuccess] = ACTIONS(245),
    [sym__text] = ACTIONS(55),
  },
  [59] = {
    [anon_sym_ATapiUse] = ACTIONS(247),
    [anon_sym_ATapiHeader] = ACTIONS(249),
    [anon_sym_ATapiPermission] = ACTIONS(247),
    [anon_sym_ATapiDeprecated] = ACTIONS(247),
    [anon_sym_ATapi] = ACTIONS(249),
    [anon_sym_ATapiError] = ACTIONS(249),
    [anon_sym_ATapiName] = ACTIONS(247),
    [anon_sym_ATapiGroup] = ACTIONS(247),
    [anon_sym_ATapiParamExample] = ACTIONS(247),
    [anon_sym_ATapiDefine] = ACTIONS(247),
    [anon_sym_ATapiExample] = ACTIONS(247),
    [anon_sym_ATapiDescription] = ACTIONS(247),
    [sym__end] = ACTIONS(247),
    [anon_sym_ATapiSuccessExample] = ACTIONS(247),
    [anon_sym_ATapiSampleRequest] = ACTIONS(247),
    [anon_sym_ATapiVersion] = ACTIONS(247),
    [anon_sym_ATapiHeaderExample] = ACTIONS(247),
    [anon_sym_ATapiPrivate] = ACTIONS(247),
    [anon_sym_ATapiParam] = ACTIONS(249),
    [anon_sym_ATapiIgnore] = ACTIONS(247),
    [anon_sym_ATapiErrorExample] = ACTIONS(247),
    [anon_sym_ATapiSuccess] = ACTIONS(249),
  },
  [60] = {
    [sym_description] = STATE(101),
    [anon_sym_ATapiUse] = ACTIONS(251),
    [anon_sym_ATapiHeader] = ACTIONS(253),
    [anon_sym_ATapiPermission] = ACTIONS(251),
    [anon_sym_ATapiDeprecated] = ACTIONS(251),
    [anon_sym_ATapi] = ACTIONS(253),
    [anon_sym_ATapiError] = ACTIONS(253),
    [anon_sym_ATapiName] = ACTIONS(251),
    [anon_sym_ATapiGroup] = ACTIONS(251),
    [anon_sym_ATapiParamExample] = ACTIONS(251),
    [anon_sym_ATapiDefine] = ACTIONS(251),
    [anon_sym_ATapiExample] = ACTIONS(251),
    [anon_sym_ATapiDescription] = ACTIONS(251),
    [sym__end] = ACTIONS(251),
    [anon_sym_ATapiSuccessExample] = ACTIONS(251),
    [anon_sym_ATapiSampleRequest] = ACTIONS(251),
    [anon_sym_ATapiVersion] = ACTIONS(251),
    [anon_sym_ATapiHeaderExample] = ACTIONS(251),
    [anon_sym_ATapiPrivate] = ACTIONS(251),
    [anon_sym_ATapiParam] = ACTIONS(253),
    [anon_sym_ATapiIgnore] = ACTIONS(251),
    [anon_sym_ATapiErrorExample] = ACTIONS(251),
    [anon_sym_ATapiSuccess] = ACTIONS(253),
    [sym__text] = ACTIONS(55),
  },
  [61] = {
    [anon_sym_ATapiUse] = ACTIONS(255),
    [anon_sym_ATapiHeader] = ACTIONS(257),
    [anon_sym_ATapiPermission] = ACTIONS(255),
    [anon_sym_ATapiDeprecated] = ACTIONS(255),
    [anon_sym_ATapi] = ACTIONS(257),
    [anon_sym_ATapiError] = ACTIONS(257),
    [anon_sym_ATapiName] = ACTIONS(255),
    [anon_sym_ATapiGroup] = ACTIONS(255),
    [anon_sym_ATapiParamExample] = ACTIONS(255),
    [anon_sym_ATapiDefine] = ACTIONS(255),
    [anon_sym_ATapiExample] = ACTIONS(255),
    [anon_sym_ATapiDescription] = ACTIONS(255),
    [sym__end] = ACTIONS(255),
    [anon_sym_ATapiSuccessExample] = ACTIONS(255),
    [anon_sym_ATapiSampleRequest] = ACTIONS(255),
    [anon_sym_ATapiVersion] = ACTIONS(255),
    [anon_sym_ATapiHeaderExample] = ACTIONS(255),
    [anon_sym_ATapiPrivate] = ACTIONS(255),
    [anon_sym_ATapiParam] = ACTIONS(257),
    [anon_sym_ATapiIgnore] = ACTIONS(255),
    [anon_sym_ATapiErrorExample] = ACTIONS(255),
    [anon_sym_ATapiSuccess] = ACTIONS(257),
  },
  [62] = {
    [anon_sym_ATapiUse] = ACTIONS(259),
    [anon_sym_ATapiHeader] = ACTIONS(261),
    [anon_sym_ATapiPermission] = ACTIONS(259),
    [anon_sym_ATapiDeprecated] = ACTIONS(259),
    [anon_sym_ATapi] = ACTIONS(261),
    [anon_sym_ATapiError] = ACTIONS(261),
    [anon_sym_ATapiName] = ACTIONS(259),
    [anon_sym_ATapiGroup] = ACTIONS(259),
    [anon_sym_ATapiParamExample] = ACTIONS(259),
    [anon_sym_ATapiDefine] = ACTIONS(259),
    [anon_sym_ATapiExample] = ACTIONS(259),
    [anon_sym_ATapiDescription] = ACTIONS(259),
    [sym__end] = ACTIONS(259),
    [anon_sym_ATapiSuccessExample] = ACTIONS(259),
    [anon_sym_ATapiSampleRequest] = ACTIONS(259),
    [anon_sym_ATapiVersion] = ACTIONS(259),
    [anon_sym_ATapiHeaderExample] = ACTIONS(259),
    [anon_sym_ATapiPrivate] = ACTIONS(259),
    [anon_sym_ATapiParam] = ACTIONS(261),
    [anon_sym_ATapiIgnore] = ACTIONS(259),
    [anon_sym_ATapiErrorExample] = ACTIONS(259),
    [anon_sym_ATapiSuccess] = ACTIONS(261),
  },
  [63] = {
    [sym_description] = STATE(102),
    [anon_sym_ATapiUse] = ACTIONS(263),
    [anon_sym_ATapiHeader] = ACTIONS(265),
    [anon_sym_ATapiPermission] = ACTIONS(263),
    [anon_sym_ATapiDeprecated] = ACTIONS(263),
    [anon_sym_ATapi] = ACTIONS(265),
    [anon_sym_ATapiError] = ACTIONS(265),
    [anon_sym_ATapiName] = ACTIONS(263),
    [anon_sym_ATapiGroup] = ACTIONS(263),
    [anon_sym_ATapiParamExample] = ACTIONS(263),
    [anon_sym_ATapiDefine] = ACTIONS(263),
    [anon_sym_ATapiExample] = ACTIONS(263),
    [anon_sym_ATapiDescription] = ACTIONS(263),
    [sym__end] = ACTIONS(263),
    [anon_sym_ATapiSuccessExample] = ACTIONS(263),
    [anon_sym_ATapiSampleRequest] = ACTIONS(263),
    [anon_sym_ATapiVersion] = ACTIONS(263),
    [anon_sym_ATapiHeaderExample] = ACTIONS(263),
    [anon_sym_ATapiPrivate] = ACTIONS(263),
    [anon_sym_ATapiParam] = ACTIONS(265),
    [anon_sym_ATapiIgnore] = ACTIONS(263),
    [anon_sym_ATapiErrorExample] = ACTIONS(263),
    [anon_sym_ATapiSuccess] = ACTIONS(265),
    [sym__text] = ACTIONS(55),
  },
  [64] = {
    [sym_description] = STATE(103),
    [anon_sym_ATapiUse] = ACTIONS(267),
    [anon_sym_ATapiHeader] = ACTIONS(269),
    [anon_sym_ATapiPermission] = ACTIONS(267),
    [anon_sym_ATapiDeprecated] = ACTIONS(267),
    [anon_sym_ATapi] = ACTIONS(269),
    [anon_sym_ATapiError] = ACTIONS(269),
    [anon_sym_ATapiName] = ACTIONS(267),
    [anon_sym_ATapiGroup] = ACTIONS(267),
    [anon_sym_ATapiParamExample] = ACTIONS(267),
    [anon_sym_ATapiDefine] = ACTIONS(267),
    [anon_sym_ATapiExample] = ACTIONS(267),
    [anon_sym_ATapiDescription] = ACTIONS(267),
    [sym__end] = ACTIONS(267),
    [anon_sym_ATapiSuccessExample] = ACTIONS(267),
    [anon_sym_ATapiSampleRequest] = ACTIONS(267),
    [anon_sym_ATapiVersion] = ACTIONS(267),
    [anon_sym_ATapiHeaderExample] = ACTIONS(267),
    [anon_sym_ATapiPrivate] = ACTIONS(267),
    [anon_sym_ATapiParam] = ACTIONS(269),
    [anon_sym_ATapiIgnore] = ACTIONS(267),
    [anon_sym_ATapiErrorExample] = ACTIONS(267),
    [anon_sym_ATapiSuccess] = ACTIONS(269),
    [sym__text] = ACTIONS(55),
  },
  [65] = {
    [anon_sym_ATapiUse] = ACTIONS(271),
    [anon_sym_ATapiHeader] = ACTIONS(273),
    [anon_sym_ATapiPermission] = ACTIONS(271),
    [anon_sym_ATapiDeprecated] = ACTIONS(271),
    [anon_sym_ATapi] = ACTIONS(273),
    [anon_sym_ATapiError] = ACTIONS(273),
    [anon_sym_ATapiName] = ACTIONS(271),
    [anon_sym_ATapiGroup] = ACTIONS(271),
    [anon_sym_ATapiParamExample] = ACTIONS(271),
    [anon_sym_ATapiDefine] = ACTIONS(271),
    [anon_sym_ATapiExample] = ACTIONS(271),
    [anon_sym_ATapiDescription] = ACTIONS(271),
    [sym__end] = ACTIONS(271),
    [anon_sym_ATapiSuccessExample] = ACTIONS(271),
    [anon_sym_ATapiSampleRequest] = ACTIONS(271),
    [anon_sym_ATapiVersion] = ACTIONS(271),
    [anon_sym_ATapiHeaderExample] = ACTIONS(271),
    [anon_sym_ATapiPrivate] = ACTIONS(271),
    [anon_sym_ATapiParam] = ACTIONS(273),
    [anon_sym_ATapiIgnore] = ACTIONS(271),
    [anon_sym_ATapiErrorExample] = ACTIONS(271),
    [anon_sym_ATapiSuccess] = ACTIONS(273),
    [sym__text] = ACTIONS(273),
  },
  [66] = {
    [anon_sym_ATapiUse] = ACTIONS(267),
    [anon_sym_ATapiHeader] = ACTIONS(269),
    [anon_sym_ATapiPermission] = ACTIONS(267),
    [anon_sym_ATapiDeprecated] = ACTIONS(267),
    [anon_sym_ATapi] = ACTIONS(269),
    [anon_sym_ATapiError] = ACTIONS(269),
    [anon_sym_ATapiName] = ACTIONS(267),
    [anon_sym_ATapiGroup] = ACTIONS(267),
    [anon_sym_ATapiParamExample] = ACTIONS(267),
    [anon_sym_ATapiDefine] = ACTIONS(267),
    [anon_sym_ATapiExample] = ACTIONS(267),
    [anon_sym_ATapiDescription] = ACTIONS(267),
    [sym__end] = ACTIONS(267),
    [anon_sym_ATapiSuccessExample] = ACTIONS(267),
    [anon_sym_ATapiSampleRequest] = ACTIONS(267),
    [anon_sym_ATapiVersion] = ACTIONS(267),
    [anon_sym_ATapiHeaderExample] = ACTIONS(267),
    [anon_sym_ATapiPrivate] = ACTIONS(267),
    [anon_sym_ATapiParam] = ACTIONS(269),
    [anon_sym_ATapiIgnore] = ACTIONS(267),
    [anon_sym_ATapiErrorExample] = ACTIONS(267),
    [anon_sym_ATapiSuccess] = ACTIONS(269),
  },
  [67] = {
    [anon_sym_ATapiUse] = ACTIONS(275),
    [anon_sym_ATapiHeader] = ACTIONS(277),
    [anon_sym_ATapiPermission] = ACTIONS(275),
    [anon_sym_ATapiDeprecated] = ACTIONS(275),
    [anon_sym_ATapi] = ACTIONS(277),
    [anon_sym_ATapiError] = ACTIONS(277),
    [anon_sym_ATapiName] = ACTIONS(275),
    [anon_sym_ATapiGroup] = ACTIONS(275),
    [anon_sym_ATapiParamExample] = ACTIONS(275),
    [anon_sym_ATapiDefine] = ACTIONS(275),
    [anon_sym_ATapiExample] = ACTIONS(275),
    [anon_sym_ATapiDescription] = ACTIONS(275),
    [sym__end] = ACTIONS(275),
    [anon_sym_ATapiSuccessExample] = ACTIONS(275),
    [anon_sym_ATapiSampleRequest] = ACTIONS(275),
    [anon_sym_ATapiVersion] = ACTIONS(275),
    [anon_sym_ATapiHeaderExample] = ACTIONS(275),
    [anon_sym_ATapiPrivate] = ACTIONS(275),
    [anon_sym_ATapiParam] = ACTIONS(277),
    [anon_sym_ATapiIgnore] = ACTIONS(275),
    [anon_sym_ATapiErrorExample] = ACTIONS(275),
    [anon_sym_ATapiSuccess] = ACTIONS(277),
  },
  [68] = {
    [anon_sym_ATapiUse] = ACTIONS(279),
    [anon_sym_ATapiHeader] = ACTIONS(281),
    [anon_sym_ATapiPermission] = ACTIONS(279),
    [anon_sym_ATapiDeprecated] = ACTIONS(279),
    [anon_sym_ATapi] = ACTIONS(281),
    [anon_sym_ATapiError] = ACTIONS(281),
    [anon_sym_ATapiName] = ACTIONS(279),
    [anon_sym_ATapiGroup] = ACTIONS(279),
    [anon_sym_ATapiParamExample] = ACTIONS(279),
    [anon_sym_ATapiDefine] = ACTIONS(279),
    [anon_sym_ATapiExample] = ACTIONS(279),
    [anon_sym_ATapiDescription] = ACTIONS(279),
    [sym__end] = ACTIONS(279),
    [anon_sym_ATapiSuccessExample] = ACTIONS(279),
    [anon_sym_ATapiSampleRequest] = ACTIONS(279),
    [anon_sym_ATapiVersion] = ACTIONS(279),
    [anon_sym_ATapiHeaderExample] = ACTIONS(279),
    [anon_sym_ATapiPrivate] = ACTIONS(279),
    [anon_sym_ATapiParam] = ACTIONS(281),
    [anon_sym_ATapiIgnore] = ACTIONS(279),
    [anon_sym_ATapiErrorExample] = ACTIONS(279),
    [anon_sym_ATapiSuccess] = ACTIONS(281),
  },
  [69] = {
    [anon_sym_ATapiUse] = ACTIONS(283),
    [anon_sym_ATapiHeader] = ACTIONS(285),
    [anon_sym_ATapiPermission] = ACTIONS(283),
    [anon_sym_ATapiDeprecated] = ACTIONS(283),
    [anon_sym_ATapi] = ACTIONS(285),
    [anon_sym_ATapiError] = ACTIONS(285),
    [anon_sym_ATapiName] = ACTIONS(283),
    [anon_sym_ATapiGroup] = ACTIONS(283),
    [anon_sym_ATapiParamExample] = ACTIONS(283),
    [anon_sym_ATapiDefine] = ACTIONS(283),
    [anon_sym_ATapiExample] = ACTIONS(283),
    [anon_sym_ATapiDescription] = ACTIONS(283),
    [sym__end] = ACTIONS(283),
    [anon_sym_ATapiSuccessExample] = ACTIONS(283),
    [anon_sym_ATapiSampleRequest] = ACTIONS(283),
    [anon_sym_ATapiVersion] = ACTIONS(283),
    [anon_sym_ATapiHeaderExample] = ACTIONS(283),
    [anon_sym_ATapiPrivate] = ACTIONS(283),
    [anon_sym_ATapiParam] = ACTIONS(285),
    [anon_sym_ATapiIgnore] = ACTIONS(283),
    [anon_sym_ATapiErrorExample] = ACTIONS(283),
    [anon_sym_ATapiSuccess] = ACTIONS(285),
  },
  [70] = {
    [sym_description] = STATE(104),
    [anon_sym_ATapiUse] = ACTIONS(287),
    [anon_sym_ATapiHeader] = ACTIONS(289),
    [anon_sym_ATapiPermission] = ACTIONS(287),
    [anon_sym_ATapiDeprecated] = ACTIONS(287),
    [anon_sym_ATapi] = ACTIONS(289),
    [anon_sym_ATapiError] = ACTIONS(289),
    [anon_sym_ATapiName] = ACTIONS(287),
    [anon_sym_ATapiGroup] = ACTIONS(287),
    [anon_sym_ATapiParamExample] = ACTIONS(287),
    [anon_sym_ATapiDefine] = ACTIONS(287),
    [anon_sym_ATapiExample] = ACTIONS(287),
    [anon_sym_ATapiDescription] = ACTIONS(287),
    [sym__end] = ACTIONS(287),
    [anon_sym_ATapiSuccessExample] = ACTIONS(287),
    [anon_sym_ATapiSampleRequest] = ACTIONS(287),
    [anon_sym_ATapiVersion] = ACTIONS(287),
    [anon_sym_ATapiHeaderExample] = ACTIONS(287),
    [anon_sym_ATapiPrivate] = ACTIONS(287),
    [anon_sym_ATapiParam] = ACTIONS(289),
    [anon_sym_ATapiIgnore] = ACTIONS(287),
    [anon_sym_ATapiErrorExample] = ACTIONS(287),
    [anon_sym_ATapiSuccess] = ACTIONS(289),
    [sym__text] = ACTIONS(55),
  },
  [71] = {
    [anon_sym_ATapiUse] = ACTIONS(291),
    [anon_sym_ATapiHeader] = ACTIONS(293),
    [anon_sym_ATapiPermission] = ACTIONS(291),
    [anon_sym_ATapiDeprecated] = ACTIONS(291),
    [anon_sym_ATapi] = ACTIONS(293),
    [anon_sym_ATapiError] = ACTIONS(293),
    [anon_sym_ATapiName] = ACTIONS(291),
    [anon_sym_ATapiGroup] = ACTIONS(291),
    [anon_sym_ATapiParamExample] = ACTIONS(291),
    [anon_sym_ATapiDefine] = ACTIONS(291),
    [anon_sym_ATapiExample] = ACTIONS(291),
    [anon_sym_ATapiDescription] = ACTIONS(291),
    [sym__end] = ACTIONS(291),
    [anon_sym_ATapiSuccessExample] = ACTIONS(291),
    [anon_sym_ATapiSampleRequest] = ACTIONS(291),
    [anon_sym_ATapiVersion] = ACTIONS(291),
    [anon_sym_ATapiHeaderExample] = ACTIONS(291),
    [anon_sym_ATapiPrivate] = ACTIONS(291),
    [anon_sym_ATapiParam] = ACTIONS(293),
    [anon_sym_ATapiIgnore] = ACTIONS(291),
    [anon_sym_ATapiErrorExample] = ACTIONS(291),
    [anon_sym_ATapiSuccess] = ACTIONS(293),
  },
  [72] = {
    [anon_sym_ATapiUse] = ACTIONS(295),
    [anon_sym_ATapiHeader] = ACTIONS(297),
    [anon_sym_ATapiPermission] = ACTIONS(295),
    [anon_sym_ATapiDeprecated] = ACTIONS(295),
    [anon_sym_ATapi] = ACTIONS(297),
    [anon_sym_ATapiError] = ACTIONS(297),
    [anon_sym_ATapiName] = ACTIONS(295),
    [anon_sym_ATapiGroup] = ACTIONS(295),
    [anon_sym_ATapiParamExample] = ACTIONS(295),
    [anon_sym_ATapiDefine] = ACTIONS(295),
    [anon_sym_ATapiExample] = ACTIONS(295),
    [anon_sym_ATapiDescription] = ACTIONS(295),
    [sym__end] = ACTIONS(295),
    [anon_sym_ATapiSuccessExample] = ACTIONS(295),
    [anon_sym_ATapiSampleRequest] = ACTIONS(295),
    [anon_sym_ATapiVersion] = ACTIONS(295),
    [anon_sym_ATapiHeaderExample] = ACTIONS(295),
    [anon_sym_ATapiPrivate] = ACTIONS(295),
    [anon_sym_ATapiParam] = ACTIONS(297),
    [anon_sym_ATapiIgnore] = ACTIONS(295),
    [anon_sym_ATapiErrorExample] = ACTIONS(295),
    [anon_sym_ATapiSuccess] = ACTIONS(297),
  },
  [73] = {
    [sym_description] = STATE(105),
    [anon_sym_ATapiUse] = ACTIONS(295),
    [anon_sym_ATapiHeader] = ACTIONS(297),
    [anon_sym_ATapiPermission] = ACTIONS(295),
    [anon_sym_ATapiDeprecated] = ACTIONS(295),
    [anon_sym_ATapi] = ACTIONS(297),
    [anon_sym_ATapiError] = ACTIONS(297),
    [anon_sym_ATapiName] = ACTIONS(295),
    [anon_sym_ATapiGroup] = ACTIONS(295),
    [anon_sym_ATapiParamExample] = ACTIONS(295),
    [anon_sym_ATapiDefine] = ACTIONS(295),
    [anon_sym_ATapiExample] = ACTIONS(295),
    [anon_sym_ATapiDescription] = ACTIONS(295),
    [sym__end] = ACTIONS(295),
    [anon_sym_ATapiSuccessExample] = ACTIONS(295),
    [anon_sym_ATapiSampleRequest] = ACTIONS(295),
    [anon_sym_ATapiVersion] = ACTIONS(295),
    [anon_sym_ATapiHeaderExample] = ACTIONS(295),
    [anon_sym_ATapiPrivate] = ACTIONS(295),
    [anon_sym_ATapiParam] = ACTIONS(297),
    [anon_sym_ATapiIgnore] = ACTIONS(295),
    [anon_sym_ATapiErrorExample] = ACTIONS(295),
    [anon_sym_ATapiSuccess] = ACTIONS(297),
    [sym__text] = ACTIONS(55),
  },
  [74] = {
    [sym_description] = STATE(105),
    [sym_parameter] = STATE(106),
    [sym_name] = STATE(34),
    [sym_optional] = STATE(34),
    [anon_sym_ATapiUse] = ACTIONS(295),
    [anon_sym_ATapiHeader] = ACTIONS(297),
    [anon_sym_ATapiPermission] = ACTIONS(295),
    [anon_sym_ATapiDeprecated] = ACTIONS(295),
    [anon_sym_ATapi] = ACTIONS(297),
    [anon_sym_ATapiError] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_ATapiName] = ACTIONS(295),
    [anon_sym_ATapiGroup] = ACTIONS(295),
    [anon_sym_ATapiParamExample] = ACTIONS(295),
    [anon_sym_ATapiDefine] = ACTIONS(295),
    [anon_sym_ATapiExample] = ACTIONS(295),
    [anon_sym_ATapiDescription] = ACTIONS(295),
    [sym__end] = ACTIONS(295),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(295),
    [anon_sym_ATapiSampleRequest] = ACTIONS(295),
    [anon_sym_ATapiVersion] = ACTIONS(295),
    [anon_sym_ATapiHeaderExample] = ACTIONS(295),
    [anon_sym_ATapiPrivate] = ACTIONS(295),
    [anon_sym_ATapiParam] = ACTIONS(297),
    [anon_sym_ATapiIgnore] = ACTIONS(295),
    [anon_sym_ATapiErrorExample] = ACTIONS(295),
    [anon_sym_ATapiSuccess] = ACTIONS(297),
    [sym__text] = ACTIONS(55),
  },
  [75] = {
    [sym_description] = STATE(105),
    [sym_parameter] = STATE(106),
    [sym_type] = STATE(107),
    [sym_name] = STATE(34),
    [sym_optional] = STATE(34),
    [anon_sym_ATapiUse] = ACTIONS(295),
    [anon_sym_ATapiHeader] = ACTIONS(297),
    [anon_sym_ATapiPermission] = ACTIONS(295),
    [anon_sym_ATapiDeprecated] = ACTIONS(295),
    [anon_sym_ATapi] = ACTIONS(297),
    [anon_sym_ATapiError] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_ATapiName] = ACTIONS(295),
    [anon_sym_ATapiGroup] = ACTIONS(295),
    [anon_sym_ATapiParamExample] = ACTIONS(295),
    [anon_sym_ATapiDefine] = ACTIONS(295),
    [anon_sym_ATapiExample] = ACTIONS(295),
    [anon_sym_ATapiDescription] = ACTIONS(295),
    [sym__end] = ACTIONS(295),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(295),
    [anon_sym_ATapiSampleRequest] = ACTIONS(295),
    [anon_sym_ATapiVersion] = ACTIONS(295),
    [anon_sym_ATapiHeaderExample] = ACTIONS(295),
    [anon_sym_ATapiPrivate] = ACTIONS(295),
    [anon_sym_ATapiParam] = ACTIONS(297),
    [anon_sym_ATapiIgnore] = ACTIONS(295),
    [anon_sym_ATapiErrorExample] = ACTIONS(295),
    [aux_sym_type_token1] = ACTIONS(67),
    [anon_sym_ATapiSuccess] = ACTIONS(297),
    [sym__text] = ACTIONS(55),
  },
  [76] = {
    [anon_sym_ATapiUse] = ACTIONS(299),
    [anon_sym_ATapiHeader] = ACTIONS(301),
    [anon_sym_ATapiPermission] = ACTIONS(299),
    [anon_sym_ATapiDeprecated] = ACTIONS(299),
    [anon_sym_ATapi] = ACTIONS(301),
    [anon_sym_ATapiError] = ACTIONS(301),
    [anon_sym_ATapiName] = ACTIONS(299),
    [anon_sym_ATapiGroup] = ACTIONS(299),
    [anon_sym_ATapiParamExample] = ACTIONS(299),
    [anon_sym_ATapiDefine] = ACTIONS(299),
    [anon_sym_ATapiExample] = ACTIONS(299),
    [anon_sym_ATapiDescription] = ACTIONS(299),
    [sym__end] = ACTIONS(299),
    [anon_sym_ATapiSuccessExample] = ACTIONS(299),
    [anon_sym_ATapiSampleRequest] = ACTIONS(299),
    [anon_sym_ATapiVersion] = ACTIONS(299),
    [anon_sym_ATapiHeaderExample] = ACTIONS(299),
    [anon_sym_ATapiPrivate] = ACTIONS(299),
    [anon_sym_ATapiParam] = ACTIONS(301),
    [anon_sym_ATapiIgnore] = ACTIONS(299),
    [anon_sym_ATapiErrorExample] = ACTIONS(299),
    [anon_sym_ATapiSuccess] = ACTIONS(301),
  },
  [77] = {
    [anon_sym_ATapiUse] = ACTIONS(303),
    [anon_sym_ATapiHeader] = ACTIONS(305),
    [anon_sym_ATapiPermission] = ACTIONS(303),
    [anon_sym_ATapiDeprecated] = ACTIONS(303),
    [anon_sym_ATapi] = ACTIONS(305),
    [anon_sym_ATapiError] = ACTIONS(305),
    [anon_sym_ATapiName] = ACTIONS(303),
    [anon_sym_ATapiGroup] = ACTIONS(303),
    [anon_sym_ATapiParamExample] = ACTIONS(303),
    [anon_sym_ATapiDefine] = ACTIONS(303),
    [anon_sym_ATapiExample] = ACTIONS(303),
    [anon_sym_ATapiDescription] = ACTIONS(303),
    [sym__end] = ACTIONS(303),
    [anon_sym_ATapiSuccessExample] = ACTIONS(303),
    [anon_sym_ATapiSampleRequest] = ACTIONS(303),
    [anon_sym_ATapiVersion] = ACTIONS(303),
    [anon_sym_ATapiHeaderExample] = ACTIONS(303),
    [anon_sym_ATapiPrivate] = ACTIONS(303),
    [anon_sym_ATapiParam] = ACTIONS(305),
    [anon_sym_ATapiIgnore] = ACTIONS(303),
    [anon_sym_ATapiErrorExample] = ACTIONS(303),
    [anon_sym_ATapiSuccess] = ACTIONS(305),
  },
  [78] = {
    [sym_description] = STATE(108),
    [anon_sym_ATapiUse] = ACTIONS(307),
    [anon_sym_ATapiHeader] = ACTIONS(309),
    [anon_sym_ATapiPermission] = ACTIONS(307),
    [anon_sym_ATapiDeprecated] = ACTIONS(307),
    [anon_sym_ATapi] = ACTIONS(309),
    [anon_sym_ATapiError] = ACTIONS(309),
    [anon_sym_ATapiName] = ACTIONS(307),
    [anon_sym_ATapiGroup] = ACTIONS(307),
    [anon_sym_ATapiParamExample] = ACTIONS(307),
    [anon_sym_ATapiDefine] = ACTIONS(307),
    [anon_sym_ATapiExample] = ACTIONS(307),
    [anon_sym_ATapiDescription] = ACTIONS(307),
    [sym__end] = ACTIONS(307),
    [anon_sym_ATapiSuccessExample] = ACTIONS(307),
    [anon_sym_ATapiSampleRequest] = ACTIONS(307),
    [anon_sym_ATapiVersion] = ACTIONS(307),
    [anon_sym_ATapiHeaderExample] = ACTIONS(307),
    [anon_sym_ATapiPrivate] = ACTIONS(307),
    [anon_sym_ATapiParam] = ACTIONS(309),
    [anon_sym_ATapiIgnore] = ACTIONS(307),
    [anon_sym_ATapiErrorExample] = ACTIONS(307),
    [anon_sym_ATapiSuccess] = ACTIONS(309),
    [sym__text] = ACTIONS(55),
  },
  [79] = {
    [anon_sym_ATapiUse] = ACTIONS(311),
    [anon_sym_ATapiHeader] = ACTIONS(313),
    [anon_sym_ATapiPermission] = ACTIONS(311),
    [anon_sym_ATapiDeprecated] = ACTIONS(311),
    [anon_sym_ATapi] = ACTIONS(313),
    [anon_sym_ATapiError] = ACTIONS(313),
    [anon_sym_ATapiName] = ACTIONS(311),
    [anon_sym_ATapiGroup] = ACTIONS(311),
    [anon_sym_ATapiParamExample] = ACTIONS(311),
    [anon_sym_ATapiDefine] = ACTIONS(311),
    [anon_sym_ATapiExample] = ACTIONS(311),
    [anon_sym_ATapiDescription] = ACTIONS(311),
    [sym__end] = ACTIONS(311),
    [anon_sym_ATapiSuccessExample] = ACTIONS(311),
    [anon_sym_ATapiSampleRequest] = ACTIONS(311),
    [anon_sym_ATapiVersion] = ACTIONS(311),
    [anon_sym_ATapiHeaderExample] = ACTIONS(311),
    [anon_sym_ATapiPrivate] = ACTIONS(311),
    [anon_sym_ATapiParam] = ACTIONS(313),
    [anon_sym_ATapiIgnore] = ACTIONS(311),
    [anon_sym_ATapiErrorExample] = ACTIONS(311),
    [anon_sym_ATapiSuccess] = ACTIONS(313),
  },
  [80] = {
    [sym_description] = STATE(109),
    [sym_name] = STATE(110),
    [anon_sym_ATapiUse] = ACTIONS(311),
    [anon_sym_ATapiHeader] = ACTIONS(313),
    [anon_sym_ATapiPermission] = ACTIONS(311),
    [anon_sym_ATapiDeprecated] = ACTIONS(311),
    [anon_sym_ATapi] = ACTIONS(313),
    [anon_sym_ATapiError] = ACTIONS(313),
    [anon_sym_ATapiName] = ACTIONS(311),
    [anon_sym_ATapiGroup] = ACTIONS(311),
    [anon_sym_ATapiParamExample] = ACTIONS(311),
    [anon_sym_ATapiDefine] = ACTIONS(311),
    [anon_sym_ATapiExample] = ACTIONS(311),
    [anon_sym_ATapiDescription] = ACTIONS(311),
    [sym__end] = ACTIONS(311),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(311),
    [anon_sym_ATapiSampleRequest] = ACTIONS(311),
    [anon_sym_ATapiVersion] = ACTIONS(311),
    [anon_sym_ATapiHeaderExample] = ACTIONS(311),
    [anon_sym_ATapiPrivate] = ACTIONS(311),
    [anon_sym_ATapiParam] = ACTIONS(313),
    [anon_sym_ATapiIgnore] = ACTIONS(311),
    [anon_sym_ATapiErrorExample] = ACTIONS(311),
    [anon_sym_ATapiSuccess] = ACTIONS(313),
    [sym__text] = ACTIONS(55),
  },
  [81] = {
    [sym_description] = STATE(109),
    [sym_name] = STATE(110),
    [sym_type] = STATE(111),
    [anon_sym_ATapiUse] = ACTIONS(311),
    [anon_sym_ATapiHeader] = ACTIONS(313),
    [anon_sym_ATapiPermission] = ACTIONS(311),
    [anon_sym_ATapiDeprecated] = ACTIONS(311),
    [anon_sym_ATapi] = ACTIONS(313),
    [anon_sym_ATapiError] = ACTIONS(313),
    [anon_sym_ATapiName] = ACTIONS(311),
    [anon_sym_ATapiGroup] = ACTIONS(311),
    [anon_sym_ATapiParamExample] = ACTIONS(311),
    [anon_sym_ATapiDefine] = ACTIONS(311),
    [anon_sym_ATapiExample] = ACTIONS(311),
    [anon_sym_ATapiDescription] = ACTIONS(311),
    [sym__end] = ACTIONS(311),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(311),
    [anon_sym_ATapiSampleRequest] = ACTIONS(311),
    [anon_sym_ATapiVersion] = ACTIONS(311),
    [anon_sym_ATapiHeaderExample] = ACTIONS(311),
    [anon_sym_ATapiPrivate] = ACTIONS(311),
    [anon_sym_ATapiParam] = ACTIONS(313),
    [anon_sym_ATapiIgnore] = ACTIONS(311),
    [anon_sym_ATapiErrorExample] = ACTIONS(311),
    [aux_sym_type_token1] = ACTIONS(91),
    [anon_sym_ATapiSuccess] = ACTIONS(313),
    [sym__text] = ACTIONS(55),
  },
  [82] = {
    [sym_description] = STATE(109),
    [anon_sym_ATapiUse] = ACTIONS(311),
    [anon_sym_ATapiHeader] = ACTIONS(313),
    [anon_sym_ATapiPermission] = ACTIONS(311),
    [anon_sym_ATapiDeprecated] = ACTIONS(311),
    [anon_sym_ATapi] = ACTIONS(313),
    [anon_sym_ATapiError] = ACTIONS(313),
    [anon_sym_ATapiName] = ACTIONS(311),
    [anon_sym_ATapiGroup] = ACTIONS(311),
    [anon_sym_ATapiParamExample] = ACTIONS(311),
    [anon_sym_ATapiDefine] = ACTIONS(311),
    [anon_sym_ATapiExample] = ACTIONS(311),
    [anon_sym_ATapiDescription] = ACTIONS(311),
    [sym__end] = ACTIONS(311),
    [anon_sym_ATapiSuccessExample] = ACTIONS(311),
    [anon_sym_ATapiSampleRequest] = ACTIONS(311),
    [anon_sym_ATapiVersion] = ACTIONS(311),
    [anon_sym_ATapiHeaderExample] = ACTIONS(311),
    [anon_sym_ATapiPrivate] = ACTIONS(311),
    [anon_sym_ATapiParam] = ACTIONS(313),
    [anon_sym_ATapiIgnore] = ACTIONS(311),
    [anon_sym_ATapiErrorExample] = ACTIONS(311),
    [anon_sym_ATapiSuccess] = ACTIONS(313),
    [sym__text] = ACTIONS(55),
  },
  [83] = {
    [aux_sym_description_repeat1] = STATE(112),
    [anon_sym_ATapiUse] = ACTIONS(315),
    [anon_sym_ATapiHeader] = ACTIONS(317),
    [anon_sym_ATapiPermission] = ACTIONS(315),
    [anon_sym_ATapiDeprecated] = ACTIONS(315),
    [anon_sym_ATapi] = ACTIONS(317),
    [anon_sym_ATapiError] = ACTIONS(317),
    [anon_sym_ATapiName] = ACTIONS(315),
    [anon_sym_ATapiGroup] = ACTIONS(315),
    [anon_sym_ATapiParamExample] = ACTIONS(315),
    [anon_sym_ATapiDefine] = ACTIONS(315),
    [anon_sym_ATapiExample] = ACTIONS(315),
    [anon_sym_ATapiDescription] = ACTIONS(315),
    [anon_sym_ATapiSuccessExample] = ACTIONS(315),
    [anon_sym_ATapiSampleRequest] = ACTIONS(315),
    [anon_sym_ATapiVersion] = ACTIONS(315),
    [anon_sym_ATapiHeaderExample] = ACTIONS(315),
    [anon_sym_ATapiPrivate] = ACTIONS(315),
    [anon_sym_ATapiParam] = ACTIONS(317),
    [anon_sym_ATapiIgnore] = ACTIONS(315),
    [anon_sym_ATapiErrorExample] = ACTIONS(315),
    [anon_sym_ATapiSuccess] = ACTIONS(317),
    [sym__text] = ACTIONS(319),
  },
  [84] = {
    [sym_ignore] = STATE(86),
    [sym_define] = STATE(86),
    [sym_example] = STATE(86),
    [sym_apigroup] = STATE(86),
    [sym_paramexample] = STATE(86),
    [sym_permission] = STATE(86),
    [sym_apiuse] = STATE(86),
    [sym_version] = STATE(86),
    [sym__tag] = STATE(86),
    [sym_api] = STATE(86),
    [sym_apierror] = STATE(86),
    [sym_errorexample] = STATE(86),
    [sym_apiname] = STATE(86),
    [sym_apiparam] = STATE(86),
    [sym_success] = STATE(86),
    [sym_successexample] = STATE(86),
    [aux_sym_apidoc_repeat1] = STATE(86),
    [sym_deprecated] = STATE(86),
    [sym_apidescription] = STATE(86),
    [sym_header] = STATE(86),
    [sym_headerexample] = STATE(86),
    [sym_private] = STATE(86),
    [sym_samplerequest] = STATE(86),
    [anon_sym_ATapiUse] = ACTIONS(5),
    [anon_sym_ATapiHeader] = ACTIONS(7),
    [anon_sym_ATapiPermission] = ACTIONS(9),
    [anon_sym_ATapiDeprecated] = ACTIONS(11),
    [anon_sym_ATapi] = ACTIONS(13),
    [anon_sym_ATapiError] = ACTIONS(15),
    [anon_sym_ATapiName] = ACTIONS(17),
    [anon_sym_ATapiGroup] = ACTIONS(19),
    [anon_sym_ATapiParamExample] = ACTIONS(21),
    [anon_sym_ATapiDefine] = ACTIONS(23),
    [anon_sym_ATapiExample] = ACTIONS(25),
    [anon_sym_ATapiDescription] = ACTIONS(27),
    [sym__end] = ACTIONS(321),
    [anon_sym_ATapiSuccessExample] = ACTIONS(29),
    [anon_sym_ATapiSampleRequest] = ACTIONS(31),
    [anon_sym_ATapiVersion] = ACTIONS(33),
    [anon_sym_ATapiHeaderExample] = ACTIONS(35),
    [anon_sym_ATapiPrivate] = ACTIONS(37),
    [anon_sym_ATapiParam] = ACTIONS(39),
    [anon_sym_ATapiIgnore] = ACTIONS(41),
    [anon_sym_ATapiErrorExample] = ACTIONS(43),
    [anon_sym_ATapiSuccess] = ACTIONS(45),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(323),
  },
  [86] = {
    [sym_ignore] = STATE(86),
    [sym_define] = STATE(86),
    [sym_example] = STATE(86),
    [sym_apigroup] = STATE(86),
    [sym_paramexample] = STATE(86),
    [sym_permission] = STATE(86),
    [sym_apiuse] = STATE(86),
    [sym_version] = STATE(86),
    [sym__tag] = STATE(86),
    [sym_api] = STATE(86),
    [sym_apierror] = STATE(86),
    [sym_errorexample] = STATE(86),
    [sym_apiname] = STATE(86),
    [sym_apiparam] = STATE(86),
    [sym_success] = STATE(86),
    [sym_successexample] = STATE(86),
    [aux_sym_apidoc_repeat1] = STATE(86),
    [sym_deprecated] = STATE(86),
    [sym_apidescription] = STATE(86),
    [sym_header] = STATE(86),
    [sym_headerexample] = STATE(86),
    [sym_private] = STATE(86),
    [sym_samplerequest] = STATE(86),
    [anon_sym_ATapiUse] = ACTIONS(325),
    [anon_sym_ATapiHeader] = ACTIONS(328),
    [anon_sym_ATapiPermission] = ACTIONS(331),
    [anon_sym_ATapiDeprecated] = ACTIONS(334),
    [anon_sym_ATapi] = ACTIONS(337),
    [anon_sym_ATapiError] = ACTIONS(340),
    [anon_sym_ATapiName] = ACTIONS(343),
    [anon_sym_ATapiGroup] = ACTIONS(346),
    [anon_sym_ATapiParamExample] = ACTIONS(349),
    [anon_sym_ATapiDefine] = ACTIONS(352),
    [anon_sym_ATapiExample] = ACTIONS(355),
    [anon_sym_ATapiDescription] = ACTIONS(358),
    [sym__end] = ACTIONS(361),
    [anon_sym_ATapiSuccessExample] = ACTIONS(363),
    [anon_sym_ATapiSampleRequest] = ACTIONS(366),
    [anon_sym_ATapiVersion] = ACTIONS(369),
    [anon_sym_ATapiHeaderExample] = ACTIONS(372),
    [anon_sym_ATapiPrivate] = ACTIONS(375),
    [anon_sym_ATapiParam] = ACTIONS(378),
    [anon_sym_ATapiIgnore] = ACTIONS(381),
    [anon_sym_ATapiErrorExample] = ACTIONS(384),
    [anon_sym_ATapiSuccess] = ACTIONS(387),
  },
  [87] = {
    [aux_sym_description_repeat1] = STATE(114),
    [anon_sym_ATapiUse] = ACTIONS(315),
    [anon_sym_ATapiHeader] = ACTIONS(317),
    [anon_sym_ATapiPermission] = ACTIONS(315),
    [anon_sym_ATapiDeprecated] = ACTIONS(315),
    [anon_sym_ATapi] = ACTIONS(317),
    [anon_sym_ATapiError] = ACTIONS(317),
    [anon_sym_ATapiName] = ACTIONS(315),
    [anon_sym_ATapiGroup] = ACTIONS(315),
    [anon_sym_ATapiParamExample] = ACTIONS(315),
    [anon_sym_ATapiDefine] = ACTIONS(315),
    [anon_sym_ATapiExample] = ACTIONS(315),
    [anon_sym_ATapiDescription] = ACTIONS(315),
    [sym__end] = ACTIONS(315),
    [anon_sym_ATapiSuccessExample] = ACTIONS(315),
    [anon_sym_ATapiSampleRequest] = ACTIONS(315),
    [anon_sym_ATapiVersion] = ACTIONS(315),
    [anon_sym_ATapiHeaderExample] = ACTIONS(315),
    [anon_sym_ATapiPrivate] = ACTIONS(315),
    [anon_sym_ATapiParam] = ACTIONS(317),
    [anon_sym_ATapiIgnore] = ACTIONS(315),
    [anon_sym_ATapiErrorExample] = ACTIONS(315),
    [anon_sym_ATapiSuccess] = ACTIONS(317),
    [sym__text] = ACTIONS(390),
  },
  [88] = {
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
  },
  [89] = {
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_RBRACK] = ACTIONS(394),
  },
  [90] = {
    [anon_sym_ATapiUse] = ACTIONS(396),
    [anon_sym_ATapiHeader] = ACTIONS(398),
    [anon_sym_ATapiPermission] = ACTIONS(396),
    [anon_sym_ATapiDeprecated] = ACTIONS(396),
    [anon_sym_ATapi] = ACTIONS(398),
    [anon_sym_ATapiError] = ACTIONS(398),
    [anon_sym_ATapiName] = ACTIONS(396),
    [anon_sym_ATapiGroup] = ACTIONS(396),
    [anon_sym_ATapiParamExample] = ACTIONS(396),
    [anon_sym_ATapiDefine] = ACTIONS(396),
    [anon_sym_ATapiExample] = ACTIONS(396),
    [anon_sym_ATapiDescription] = ACTIONS(396),
    [sym__end] = ACTIONS(396),
    [anon_sym_ATapiSuccessExample] = ACTIONS(396),
    [anon_sym_ATapiSampleRequest] = ACTIONS(396),
    [anon_sym_ATapiVersion] = ACTIONS(396),
    [anon_sym_ATapiHeaderExample] = ACTIONS(396),
    [anon_sym_ATapiPrivate] = ACTIONS(396),
    [anon_sym_ATapiParam] = ACTIONS(398),
    [anon_sym_ATapiIgnore] = ACTIONS(396),
    [anon_sym_ATapiErrorExample] = ACTIONS(396),
    [anon_sym_ATapiSuccess] = ACTIONS(398),
  },
  [91] = {
    [sym_description] = STATE(117),
    [anon_sym_ATapiUse] = ACTIONS(396),
    [anon_sym_ATapiHeader] = ACTIONS(398),
    [anon_sym_ATapiPermission] = ACTIONS(396),
    [anon_sym_ATapiDeprecated] = ACTIONS(396),
    [anon_sym_ATapi] = ACTIONS(398),
    [anon_sym_ATapiError] = ACTIONS(398),
    [anon_sym_ATapiName] = ACTIONS(396),
    [anon_sym_ATapiGroup] = ACTIONS(396),
    [anon_sym_ATapiParamExample] = ACTIONS(396),
    [anon_sym_ATapiDefine] = ACTIONS(396),
    [anon_sym_ATapiExample] = ACTIONS(396),
    [anon_sym_ATapiDescription] = ACTIONS(396),
    [sym__end] = ACTIONS(396),
    [anon_sym_ATapiSuccessExample] = ACTIONS(396),
    [anon_sym_ATapiSampleRequest] = ACTIONS(396),
    [anon_sym_ATapiVersion] = ACTIONS(396),
    [anon_sym_ATapiHeaderExample] = ACTIONS(396),
    [anon_sym_ATapiPrivate] = ACTIONS(396),
    [anon_sym_ATapiParam] = ACTIONS(398),
    [anon_sym_ATapiIgnore] = ACTIONS(396),
    [anon_sym_ATapiErrorExample] = ACTIONS(396),
    [anon_sym_ATapiSuccess] = ACTIONS(398),
    [sym__text] = ACTIONS(55),
  },
  [92] = {
    [sym_description] = STATE(117),
    [sym_parameter] = STATE(118),
    [sym_name] = STATE(34),
    [sym_optional] = STATE(34),
    [anon_sym_ATapiUse] = ACTIONS(396),
    [anon_sym_ATapiHeader] = ACTIONS(398),
    [anon_sym_ATapiPermission] = ACTIONS(396),
    [anon_sym_ATapiDeprecated] = ACTIONS(396),
    [anon_sym_ATapi] = ACTIONS(398),
    [anon_sym_ATapiError] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_ATapiName] = ACTIONS(396),
    [anon_sym_ATapiGroup] = ACTIONS(396),
    [anon_sym_ATapiParamExample] = ACTIONS(396),
    [anon_sym_ATapiDefine] = ACTIONS(396),
    [anon_sym_ATapiExample] = ACTIONS(396),
    [anon_sym_ATapiDescription] = ACTIONS(396),
    [sym__end] = ACTIONS(396),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(396),
    [anon_sym_ATapiSampleRequest] = ACTIONS(396),
    [anon_sym_ATapiVersion] = ACTIONS(396),
    [anon_sym_ATapiHeaderExample] = ACTIONS(396),
    [anon_sym_ATapiPrivate] = ACTIONS(396),
    [anon_sym_ATapiParam] = ACTIONS(398),
    [anon_sym_ATapiIgnore] = ACTIONS(396),
    [anon_sym_ATapiErrorExample] = ACTIONS(396),
    [anon_sym_ATapiSuccess] = ACTIONS(398),
    [sym__text] = ACTIONS(55),
  },
  [93] = {
    [anon_sym_RBRACE] = ACTIONS(400),
  },
  [94] = {
    [anon_sym_ATapiUse] = ACTIONS(402),
    [anon_sym_ATapiHeader] = ACTIONS(404),
    [anon_sym_ATapiPermission] = ACTIONS(402),
    [anon_sym_ATapiDeprecated] = ACTIONS(402),
    [anon_sym_ATapi] = ACTIONS(404),
    [anon_sym_ATapiError] = ACTIONS(404),
    [anon_sym_ATapiName] = ACTIONS(402),
    [anon_sym_ATapiGroup] = ACTIONS(402),
    [anon_sym_ATapiParamExample] = ACTIONS(402),
    [anon_sym_ATapiDefine] = ACTIONS(402),
    [anon_sym_ATapiExample] = ACTIONS(402),
    [anon_sym_ATapiDescription] = ACTIONS(402),
    [sym__end] = ACTIONS(402),
    [anon_sym_ATapiSuccessExample] = ACTIONS(402),
    [anon_sym_ATapiSampleRequest] = ACTIONS(402),
    [anon_sym_ATapiVersion] = ACTIONS(402),
    [anon_sym_ATapiHeaderExample] = ACTIONS(402),
    [anon_sym_ATapiPrivate] = ACTIONS(402),
    [anon_sym_ATapiParam] = ACTIONS(404),
    [anon_sym_ATapiIgnore] = ACTIONS(402),
    [anon_sym_ATapiErrorExample] = ACTIONS(402),
    [anon_sym_ATapiSuccess] = ACTIONS(404),
  },
  [95] = {
    [sym_description] = STATE(120),
    [anon_sym_ATapiUse] = ACTIONS(406),
    [anon_sym_ATapiHeader] = ACTIONS(408),
    [anon_sym_ATapiPermission] = ACTIONS(406),
    [anon_sym_ATapiDeprecated] = ACTIONS(406),
    [anon_sym_ATapi] = ACTIONS(408),
    [anon_sym_ATapiError] = ACTIONS(408),
    [anon_sym_ATapiName] = ACTIONS(406),
    [anon_sym_ATapiGroup] = ACTIONS(406),
    [anon_sym_ATapiParamExample] = ACTIONS(406),
    [anon_sym_ATapiDefine] = ACTIONS(406),
    [anon_sym_ATapiExample] = ACTIONS(406),
    [anon_sym_ATapiDescription] = ACTIONS(406),
    [sym__end] = ACTIONS(406),
    [anon_sym_ATapiSuccessExample] = ACTIONS(406),
    [anon_sym_ATapiSampleRequest] = ACTIONS(406),
    [anon_sym_ATapiVersion] = ACTIONS(406),
    [anon_sym_ATapiHeaderExample] = ACTIONS(406),
    [anon_sym_ATapiPrivate] = ACTIONS(406),
    [anon_sym_ATapiParam] = ACTIONS(408),
    [anon_sym_ATapiIgnore] = ACTIONS(406),
    [anon_sym_ATapiErrorExample] = ACTIONS(406),
    [anon_sym_ATapiSuccess] = ACTIONS(408),
    [sym__text] = ACTIONS(55),
  },
  [96] = {
    [anon_sym_ATapiUse] = ACTIONS(410),
    [anon_sym_ATapiHeader] = ACTIONS(412),
    [anon_sym_ATapiPermission] = ACTIONS(410),
    [anon_sym_ATapiDeprecated] = ACTIONS(410),
    [anon_sym_ATapi] = ACTIONS(412),
    [anon_sym_ATapiError] = ACTIONS(412),
    [anon_sym_ATapiName] = ACTIONS(410),
    [anon_sym_ATapiGroup] = ACTIONS(410),
    [anon_sym_ATapiParamExample] = ACTIONS(410),
    [anon_sym_ATapiDefine] = ACTIONS(410),
    [anon_sym_ATapiExample] = ACTIONS(410),
    [anon_sym_ATapiDescription] = ACTIONS(410),
    [sym__end] = ACTIONS(410),
    [anon_sym_ATapiSuccessExample] = ACTIONS(410),
    [anon_sym_ATapiSampleRequest] = ACTIONS(410),
    [anon_sym_ATapiVersion] = ACTIONS(410),
    [anon_sym_ATapiHeaderExample] = ACTIONS(410),
    [anon_sym_ATapiPrivate] = ACTIONS(410),
    [anon_sym_ATapiParam] = ACTIONS(412),
    [anon_sym_ATapiIgnore] = ACTIONS(410),
    [anon_sym_ATapiErrorExample] = ACTIONS(410),
    [anon_sym_ATapiSuccess] = ACTIONS(412),
  },
  [97] = {
    [sym_description] = STATE(121),
    [anon_sym_ATapiUse] = ACTIONS(410),
    [anon_sym_ATapiHeader] = ACTIONS(412),
    [anon_sym_ATapiPermission] = ACTIONS(410),
    [anon_sym_ATapiDeprecated] = ACTIONS(410),
    [anon_sym_ATapi] = ACTIONS(412),
    [anon_sym_ATapiError] = ACTIONS(412),
    [anon_sym_ATapiName] = ACTIONS(410),
    [anon_sym_ATapiGroup] = ACTIONS(410),
    [anon_sym_ATapiParamExample] = ACTIONS(410),
    [anon_sym_ATapiDefine] = ACTIONS(410),
    [anon_sym_ATapiExample] = ACTIONS(410),
    [anon_sym_ATapiDescription] = ACTIONS(410),
    [sym__end] = ACTIONS(410),
    [anon_sym_ATapiSuccessExample] = ACTIONS(410),
    [anon_sym_ATapiSampleRequest] = ACTIONS(410),
    [anon_sym_ATapiVersion] = ACTIONS(410),
    [anon_sym_ATapiHeaderExample] = ACTIONS(410),
    [anon_sym_ATapiPrivate] = ACTIONS(410),
    [anon_sym_ATapiParam] = ACTIONS(412),
    [anon_sym_ATapiIgnore] = ACTIONS(410),
    [anon_sym_ATapiErrorExample] = ACTIONS(410),
    [anon_sym_ATapiSuccess] = ACTIONS(412),
    [sym__text] = ACTIONS(55),
  },
  [98] = {
    [sym_description] = STATE(121),
    [sym_name] = STATE(122),
    [anon_sym_ATapiUse] = ACTIONS(410),
    [anon_sym_ATapiHeader] = ACTIONS(412),
    [anon_sym_ATapiPermission] = ACTIONS(410),
    [anon_sym_ATapiDeprecated] = ACTIONS(410),
    [anon_sym_ATapi] = ACTIONS(412),
    [anon_sym_ATapiError] = ACTIONS(412),
    [anon_sym_ATapiName] = ACTIONS(410),
    [anon_sym_ATapiGroup] = ACTIONS(410),
    [anon_sym_ATapiParamExample] = ACTIONS(410),
    [anon_sym_ATapiDefine] = ACTIONS(410),
    [anon_sym_ATapiExample] = ACTIONS(410),
    [anon_sym_ATapiDescription] = ACTIONS(410),
    [sym__end] = ACTIONS(410),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(410),
    [anon_sym_ATapiSampleRequest] = ACTIONS(410),
    [anon_sym_ATapiVersion] = ACTIONS(410),
    [anon_sym_ATapiHeaderExample] = ACTIONS(410),
    [anon_sym_ATapiPrivate] = ACTIONS(410),
    [anon_sym_ATapiParam] = ACTIONS(412),
    [anon_sym_ATapiIgnore] = ACTIONS(410),
    [anon_sym_ATapiErrorExample] = ACTIONS(410),
    [anon_sym_ATapiSuccess] = ACTIONS(412),
    [sym__text] = ACTIONS(55),
  },
  [99] = {
    [anon_sym_ATapiUse] = ACTIONS(414),
    [anon_sym_ATapiHeader] = ACTIONS(416),
    [anon_sym_ATapiPermission] = ACTIONS(414),
    [anon_sym_ATapiDeprecated] = ACTIONS(414),
    [anon_sym_ATapi] = ACTIONS(416),
    [anon_sym_ATapiError] = ACTIONS(416),
    [anon_sym_ATapiName] = ACTIONS(414),
    [anon_sym_ATapiGroup] = ACTIONS(414),
    [anon_sym_ATapiParamExample] = ACTIONS(414),
    [anon_sym_ATapiDefine] = ACTIONS(414),
    [anon_sym_ATapiExample] = ACTIONS(414),
    [anon_sym_ATapiDescription] = ACTIONS(414),
    [sym__end] = ACTIONS(414),
    [anon_sym_ATapiSuccessExample] = ACTIONS(414),
    [anon_sym_ATapiSampleRequest] = ACTIONS(414),
    [anon_sym_ATapiVersion] = ACTIONS(414),
    [anon_sym_ATapiHeaderExample] = ACTIONS(414),
    [anon_sym_ATapiPrivate] = ACTIONS(414),
    [anon_sym_ATapiParam] = ACTIONS(416),
    [anon_sym_ATapiIgnore] = ACTIONS(414),
    [anon_sym_ATapiErrorExample] = ACTIONS(414),
    [anon_sym_ATapiSuccess] = ACTIONS(416),
  },
  [100] = {
    [anon_sym_ATapiUse] = ACTIONS(418),
    [anon_sym_ATapiHeader] = ACTIONS(420),
    [anon_sym_ATapiPermission] = ACTIONS(418),
    [anon_sym_ATapiDeprecated] = ACTIONS(418),
    [anon_sym_ATapi] = ACTIONS(420),
    [anon_sym_ATapiError] = ACTIONS(420),
    [anon_sym_ATapiName] = ACTIONS(418),
    [anon_sym_ATapiGroup] = ACTIONS(418),
    [anon_sym_ATapiParamExample] = ACTIONS(418),
    [anon_sym_ATapiDefine] = ACTIONS(418),
    [anon_sym_ATapiExample] = ACTIONS(418),
    [anon_sym_ATapiDescription] = ACTIONS(418),
    [sym__end] = ACTIONS(418),
    [anon_sym_ATapiSuccessExample] = ACTIONS(418),
    [anon_sym_ATapiSampleRequest] = ACTIONS(418),
    [anon_sym_ATapiVersion] = ACTIONS(418),
    [anon_sym_ATapiHeaderExample] = ACTIONS(418),
    [anon_sym_ATapiPrivate] = ACTIONS(418),
    [anon_sym_ATapiParam] = ACTIONS(420),
    [anon_sym_ATapiIgnore] = ACTIONS(418),
    [anon_sym_ATapiErrorExample] = ACTIONS(418),
    [anon_sym_ATapiSuccess] = ACTIONS(420),
  },
  [101] = {
    [anon_sym_ATapiUse] = ACTIONS(422),
    [anon_sym_ATapiHeader] = ACTIONS(424),
    [anon_sym_ATapiPermission] = ACTIONS(422),
    [anon_sym_ATapiDeprecated] = ACTIONS(422),
    [anon_sym_ATapi] = ACTIONS(424),
    [anon_sym_ATapiError] = ACTIONS(424),
    [anon_sym_ATapiName] = ACTIONS(422),
    [anon_sym_ATapiGroup] = ACTIONS(422),
    [anon_sym_ATapiParamExample] = ACTIONS(422),
    [anon_sym_ATapiDefine] = ACTIONS(422),
    [anon_sym_ATapiExample] = ACTIONS(422),
    [anon_sym_ATapiDescription] = ACTIONS(422),
    [sym__end] = ACTIONS(422),
    [anon_sym_ATapiSuccessExample] = ACTIONS(422),
    [anon_sym_ATapiSampleRequest] = ACTIONS(422),
    [anon_sym_ATapiVersion] = ACTIONS(422),
    [anon_sym_ATapiHeaderExample] = ACTIONS(422),
    [anon_sym_ATapiPrivate] = ACTIONS(422),
    [anon_sym_ATapiParam] = ACTIONS(424),
    [anon_sym_ATapiIgnore] = ACTIONS(422),
    [anon_sym_ATapiErrorExample] = ACTIONS(422),
    [anon_sym_ATapiSuccess] = ACTIONS(424),
  },
  [102] = {
    [anon_sym_ATapiUse] = ACTIONS(426),
    [anon_sym_ATapiHeader] = ACTIONS(428),
    [anon_sym_ATapiPermission] = ACTIONS(426),
    [anon_sym_ATapiDeprecated] = ACTIONS(426),
    [anon_sym_ATapi] = ACTIONS(428),
    [anon_sym_ATapiError] = ACTIONS(428),
    [anon_sym_ATapiName] = ACTIONS(426),
    [anon_sym_ATapiGroup] = ACTIONS(426),
    [anon_sym_ATapiParamExample] = ACTIONS(426),
    [anon_sym_ATapiDefine] = ACTIONS(426),
    [anon_sym_ATapiExample] = ACTIONS(426),
    [anon_sym_ATapiDescription] = ACTIONS(426),
    [sym__end] = ACTIONS(426),
    [anon_sym_ATapiSuccessExample] = ACTIONS(426),
    [anon_sym_ATapiSampleRequest] = ACTIONS(426),
    [anon_sym_ATapiVersion] = ACTIONS(426),
    [anon_sym_ATapiHeaderExample] = ACTIONS(426),
    [anon_sym_ATapiPrivate] = ACTIONS(426),
    [anon_sym_ATapiParam] = ACTIONS(428),
    [anon_sym_ATapiIgnore] = ACTIONS(426),
    [anon_sym_ATapiErrorExample] = ACTIONS(426),
    [anon_sym_ATapiSuccess] = ACTIONS(428),
  },
  [103] = {
    [anon_sym_ATapiUse] = ACTIONS(430),
    [anon_sym_ATapiHeader] = ACTIONS(432),
    [anon_sym_ATapiPermission] = ACTIONS(430),
    [anon_sym_ATapiDeprecated] = ACTIONS(430),
    [anon_sym_ATapi] = ACTIONS(432),
    [anon_sym_ATapiError] = ACTIONS(432),
    [anon_sym_ATapiName] = ACTIONS(430),
    [anon_sym_ATapiGroup] = ACTIONS(430),
    [anon_sym_ATapiParamExample] = ACTIONS(430),
    [anon_sym_ATapiDefine] = ACTIONS(430),
    [anon_sym_ATapiExample] = ACTIONS(430),
    [anon_sym_ATapiDescription] = ACTIONS(430),
    [sym__end] = ACTIONS(430),
    [anon_sym_ATapiSuccessExample] = ACTIONS(430),
    [anon_sym_ATapiSampleRequest] = ACTIONS(430),
    [anon_sym_ATapiVersion] = ACTIONS(430),
    [anon_sym_ATapiHeaderExample] = ACTIONS(430),
    [anon_sym_ATapiPrivate] = ACTIONS(430),
    [anon_sym_ATapiParam] = ACTIONS(432),
    [anon_sym_ATapiIgnore] = ACTIONS(430),
    [anon_sym_ATapiErrorExample] = ACTIONS(430),
    [anon_sym_ATapiSuccess] = ACTIONS(432),
  },
  [104] = {
    [anon_sym_ATapiUse] = ACTIONS(434),
    [anon_sym_ATapiHeader] = ACTIONS(436),
    [anon_sym_ATapiPermission] = ACTIONS(434),
    [anon_sym_ATapiDeprecated] = ACTIONS(434),
    [anon_sym_ATapi] = ACTIONS(436),
    [anon_sym_ATapiError] = ACTIONS(436),
    [anon_sym_ATapiName] = ACTIONS(434),
    [anon_sym_ATapiGroup] = ACTIONS(434),
    [anon_sym_ATapiParamExample] = ACTIONS(434),
    [anon_sym_ATapiDefine] = ACTIONS(434),
    [anon_sym_ATapiExample] = ACTIONS(434),
    [anon_sym_ATapiDescription] = ACTIONS(434),
    [sym__end] = ACTIONS(434),
    [anon_sym_ATapiSuccessExample] = ACTIONS(434),
    [anon_sym_ATapiSampleRequest] = ACTIONS(434),
    [anon_sym_ATapiVersion] = ACTIONS(434),
    [anon_sym_ATapiHeaderExample] = ACTIONS(434),
    [anon_sym_ATapiPrivate] = ACTIONS(434),
    [anon_sym_ATapiParam] = ACTIONS(436),
    [anon_sym_ATapiIgnore] = ACTIONS(434),
    [anon_sym_ATapiErrorExample] = ACTIONS(434),
    [anon_sym_ATapiSuccess] = ACTIONS(436),
  },
  [105] = {
    [anon_sym_ATapiUse] = ACTIONS(438),
    [anon_sym_ATapiHeader] = ACTIONS(440),
    [anon_sym_ATapiPermission] = ACTIONS(438),
    [anon_sym_ATapiDeprecated] = ACTIONS(438),
    [anon_sym_ATapi] = ACTIONS(440),
    [anon_sym_ATapiError] = ACTIONS(440),
    [anon_sym_ATapiName] = ACTIONS(438),
    [anon_sym_ATapiGroup] = ACTIONS(438),
    [anon_sym_ATapiParamExample] = ACTIONS(438),
    [anon_sym_ATapiDefine] = ACTIONS(438),
    [anon_sym_ATapiExample] = ACTIONS(438),
    [anon_sym_ATapiDescription] = ACTIONS(438),
    [sym__end] = ACTIONS(438),
    [anon_sym_ATapiSuccessExample] = ACTIONS(438),
    [anon_sym_ATapiSampleRequest] = ACTIONS(438),
    [anon_sym_ATapiVersion] = ACTIONS(438),
    [anon_sym_ATapiHeaderExample] = ACTIONS(438),
    [anon_sym_ATapiPrivate] = ACTIONS(438),
    [anon_sym_ATapiParam] = ACTIONS(440),
    [anon_sym_ATapiIgnore] = ACTIONS(438),
    [anon_sym_ATapiErrorExample] = ACTIONS(438),
    [anon_sym_ATapiSuccess] = ACTIONS(440),
  },
  [106] = {
    [sym_description] = STATE(123),
    [anon_sym_ATapiUse] = ACTIONS(438),
    [anon_sym_ATapiHeader] = ACTIONS(440),
    [anon_sym_ATapiPermission] = ACTIONS(438),
    [anon_sym_ATapiDeprecated] = ACTIONS(438),
    [anon_sym_ATapi] = ACTIONS(440),
    [anon_sym_ATapiError] = ACTIONS(440),
    [anon_sym_ATapiName] = ACTIONS(438),
    [anon_sym_ATapiGroup] = ACTIONS(438),
    [anon_sym_ATapiParamExample] = ACTIONS(438),
    [anon_sym_ATapiDefine] = ACTIONS(438),
    [anon_sym_ATapiExample] = ACTIONS(438),
    [anon_sym_ATapiDescription] = ACTIONS(438),
    [sym__end] = ACTIONS(438),
    [anon_sym_ATapiSuccessExample] = ACTIONS(438),
    [anon_sym_ATapiSampleRequest] = ACTIONS(438),
    [anon_sym_ATapiVersion] = ACTIONS(438),
    [anon_sym_ATapiHeaderExample] = ACTIONS(438),
    [anon_sym_ATapiPrivate] = ACTIONS(438),
    [anon_sym_ATapiParam] = ACTIONS(440),
    [anon_sym_ATapiIgnore] = ACTIONS(438),
    [anon_sym_ATapiErrorExample] = ACTIONS(438),
    [anon_sym_ATapiSuccess] = ACTIONS(440),
    [sym__text] = ACTIONS(55),
  },
  [107] = {
    [sym_description] = STATE(123),
    [sym_parameter] = STATE(124),
    [sym_name] = STATE(34),
    [sym_optional] = STATE(34),
    [anon_sym_ATapiUse] = ACTIONS(438),
    [anon_sym_ATapiHeader] = ACTIONS(440),
    [anon_sym_ATapiPermission] = ACTIONS(438),
    [anon_sym_ATapiDeprecated] = ACTIONS(438),
    [anon_sym_ATapi] = ACTIONS(440),
    [anon_sym_ATapiError] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_ATapiName] = ACTIONS(438),
    [anon_sym_ATapiGroup] = ACTIONS(438),
    [anon_sym_ATapiParamExample] = ACTIONS(438),
    [anon_sym_ATapiDefine] = ACTIONS(438),
    [anon_sym_ATapiExample] = ACTIONS(438),
    [anon_sym_ATapiDescription] = ACTIONS(438),
    [sym__end] = ACTIONS(438),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(438),
    [anon_sym_ATapiSampleRequest] = ACTIONS(438),
    [anon_sym_ATapiVersion] = ACTIONS(438),
    [anon_sym_ATapiHeaderExample] = ACTIONS(438),
    [anon_sym_ATapiPrivate] = ACTIONS(438),
    [anon_sym_ATapiParam] = ACTIONS(440),
    [anon_sym_ATapiIgnore] = ACTIONS(438),
    [anon_sym_ATapiErrorExample] = ACTIONS(438),
    [anon_sym_ATapiSuccess] = ACTIONS(440),
    [sym__text] = ACTIONS(55),
  },
  [108] = {
    [anon_sym_ATapiUse] = ACTIONS(442),
    [anon_sym_ATapiHeader] = ACTIONS(444),
    [anon_sym_ATapiPermission] = ACTIONS(442),
    [anon_sym_ATapiDeprecated] = ACTIONS(442),
    [anon_sym_ATapi] = ACTIONS(444),
    [anon_sym_ATapiError] = ACTIONS(444),
    [anon_sym_ATapiName] = ACTIONS(442),
    [anon_sym_ATapiGroup] = ACTIONS(442),
    [anon_sym_ATapiParamExample] = ACTIONS(442),
    [anon_sym_ATapiDefine] = ACTIONS(442),
    [anon_sym_ATapiExample] = ACTIONS(442),
    [anon_sym_ATapiDescription] = ACTIONS(442),
    [sym__end] = ACTIONS(442),
    [anon_sym_ATapiSuccessExample] = ACTIONS(442),
    [anon_sym_ATapiSampleRequest] = ACTIONS(442),
    [anon_sym_ATapiVersion] = ACTIONS(442),
    [anon_sym_ATapiHeaderExample] = ACTIONS(442),
    [anon_sym_ATapiPrivate] = ACTIONS(442),
    [anon_sym_ATapiParam] = ACTIONS(444),
    [anon_sym_ATapiIgnore] = ACTIONS(442),
    [anon_sym_ATapiErrorExample] = ACTIONS(442),
    [anon_sym_ATapiSuccess] = ACTIONS(444),
  },
  [109] = {
    [anon_sym_ATapiUse] = ACTIONS(446),
    [anon_sym_ATapiHeader] = ACTIONS(448),
    [anon_sym_ATapiPermission] = ACTIONS(446),
    [anon_sym_ATapiDeprecated] = ACTIONS(446),
    [anon_sym_ATapi] = ACTIONS(448),
    [anon_sym_ATapiError] = ACTIONS(448),
    [anon_sym_ATapiName] = ACTIONS(446),
    [anon_sym_ATapiGroup] = ACTIONS(446),
    [anon_sym_ATapiParamExample] = ACTIONS(446),
    [anon_sym_ATapiDefine] = ACTIONS(446),
    [anon_sym_ATapiExample] = ACTIONS(446),
    [anon_sym_ATapiDescription] = ACTIONS(446),
    [sym__end] = ACTIONS(446),
    [anon_sym_ATapiSuccessExample] = ACTIONS(446),
    [anon_sym_ATapiSampleRequest] = ACTIONS(446),
    [anon_sym_ATapiVersion] = ACTIONS(446),
    [anon_sym_ATapiHeaderExample] = ACTIONS(446),
    [anon_sym_ATapiPrivate] = ACTIONS(446),
    [anon_sym_ATapiParam] = ACTIONS(448),
    [anon_sym_ATapiIgnore] = ACTIONS(446),
    [anon_sym_ATapiErrorExample] = ACTIONS(446),
    [anon_sym_ATapiSuccess] = ACTIONS(448),
  },
  [110] = {
    [sym_description] = STATE(125),
    [anon_sym_ATapiUse] = ACTIONS(446),
    [anon_sym_ATapiHeader] = ACTIONS(448),
    [anon_sym_ATapiPermission] = ACTIONS(446),
    [anon_sym_ATapiDeprecated] = ACTIONS(446),
    [anon_sym_ATapi] = ACTIONS(448),
    [anon_sym_ATapiError] = ACTIONS(448),
    [anon_sym_ATapiName] = ACTIONS(446),
    [anon_sym_ATapiGroup] = ACTIONS(446),
    [anon_sym_ATapiParamExample] = ACTIONS(446),
    [anon_sym_ATapiDefine] = ACTIONS(446),
    [anon_sym_ATapiExample] = ACTIONS(446),
    [anon_sym_ATapiDescription] = ACTIONS(446),
    [sym__end] = ACTIONS(446),
    [anon_sym_ATapiSuccessExample] = ACTIONS(446),
    [anon_sym_ATapiSampleRequest] = ACTIONS(446),
    [anon_sym_ATapiVersion] = ACTIONS(446),
    [anon_sym_ATapiHeaderExample] = ACTIONS(446),
    [anon_sym_ATapiPrivate] = ACTIONS(446),
    [anon_sym_ATapiParam] = ACTIONS(448),
    [anon_sym_ATapiIgnore] = ACTIONS(446),
    [anon_sym_ATapiErrorExample] = ACTIONS(446),
    [anon_sym_ATapiSuccess] = ACTIONS(448),
    [sym__text] = ACTIONS(55),
  },
  [111] = {
    [sym_description] = STATE(125),
    [sym_name] = STATE(126),
    [anon_sym_ATapiUse] = ACTIONS(446),
    [anon_sym_ATapiHeader] = ACTIONS(448),
    [anon_sym_ATapiPermission] = ACTIONS(446),
    [anon_sym_ATapiDeprecated] = ACTIONS(446),
    [anon_sym_ATapi] = ACTIONS(448),
    [anon_sym_ATapiError] = ACTIONS(448),
    [anon_sym_ATapiName] = ACTIONS(446),
    [anon_sym_ATapiGroup] = ACTIONS(446),
    [anon_sym_ATapiParamExample] = ACTIONS(446),
    [anon_sym_ATapiDefine] = ACTIONS(446),
    [anon_sym_ATapiExample] = ACTIONS(446),
    [anon_sym_ATapiDescription] = ACTIONS(446),
    [sym__end] = ACTIONS(446),
    [aux_sym_name_token1] = ACTIONS(65),
    [anon_sym_ATapiSuccessExample] = ACTIONS(446),
    [anon_sym_ATapiSampleRequest] = ACTIONS(446),
    [anon_sym_ATapiVersion] = ACTIONS(446),
    [anon_sym_ATapiHeaderExample] = ACTIONS(446),
    [anon_sym_ATapiPrivate] = ACTIONS(446),
    [anon_sym_ATapiParam] = ACTIONS(448),
    [anon_sym_ATapiIgnore] = ACTIONS(446),
    [anon_sym_ATapiErrorExample] = ACTIONS(446),
    [anon_sym_ATapiSuccess] = ACTIONS(448),
    [sym__text] = ACTIONS(55),
  },
  [112] = {
    [aux_sym_description_repeat1] = STATE(112),
    [anon_sym_ATapiUse] = ACTIONS(450),
    [anon_sym_ATapiHeader] = ACTIONS(452),
    [anon_sym_ATapiPermission] = ACTIONS(450),
    [anon_sym_ATapiDeprecated] = ACTIONS(450),
    [anon_sym_ATapi] = ACTIONS(452),
    [anon_sym_ATapiError] = ACTIONS(452),
    [anon_sym_ATapiName] = ACTIONS(450),
    [anon_sym_ATapiGroup] = ACTIONS(450),
    [anon_sym_ATapiParamExample] = ACTIONS(450),
    [anon_sym_ATapiDefine] = ACTIONS(450),
    [anon_sym_ATapiExample] = ACTIONS(450),
    [anon_sym_ATapiDescription] = ACTIONS(450),
    [anon_sym_ATapiSuccessExample] = ACTIONS(450),
    [anon_sym_ATapiSampleRequest] = ACTIONS(450),
    [anon_sym_ATapiVersion] = ACTIONS(450),
    [anon_sym_ATapiHeaderExample] = ACTIONS(450),
    [anon_sym_ATapiPrivate] = ACTIONS(450),
    [anon_sym_ATapiParam] = ACTIONS(452),
    [anon_sym_ATapiIgnore] = ACTIONS(450),
    [anon_sym_ATapiErrorExample] = ACTIONS(450),
    [anon_sym_ATapiSuccess] = ACTIONS(452),
    [sym__text] = ACTIONS(454),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(457),
  },
  [114] = {
    [aux_sym_description_repeat1] = STATE(114),
    [anon_sym_ATapiUse] = ACTIONS(450),
    [anon_sym_ATapiHeader] = ACTIONS(452),
    [anon_sym_ATapiPermission] = ACTIONS(450),
    [anon_sym_ATapiDeprecated] = ACTIONS(450),
    [anon_sym_ATapi] = ACTIONS(452),
    [anon_sym_ATapiError] = ACTIONS(452),
    [anon_sym_ATapiName] = ACTIONS(450),
    [anon_sym_ATapiGroup] = ACTIONS(450),
    [anon_sym_ATapiParamExample] = ACTIONS(450),
    [anon_sym_ATapiDefine] = ACTIONS(450),
    [anon_sym_ATapiExample] = ACTIONS(450),
    [anon_sym_ATapiDescription] = ACTIONS(450),
    [sym__end] = ACTIONS(450),
    [anon_sym_ATapiSuccessExample] = ACTIONS(450),
    [anon_sym_ATapiSampleRequest] = ACTIONS(450),
    [anon_sym_ATapiVersion] = ACTIONS(450),
    [anon_sym_ATapiHeaderExample] = ACTIONS(450),
    [anon_sym_ATapiPrivate] = ACTIONS(450),
    [anon_sym_ATapiParam] = ACTIONS(452),
    [anon_sym_ATapiIgnore] = ACTIONS(450),
    [anon_sym_ATapiErrorExample] = ACTIONS(450),
    [anon_sym_ATapiSuccess] = ACTIONS(452),
    [sym__text] = ACTIONS(459),
  },
  [115] = {
    [sym_default] = STATE(128),
    [aux_sym_default_token1] = ACTIONS(462),
  },
  [116] = {
    [anon_sym_ATapiUse] = ACTIONS(464),
    [anon_sym_ATapiHeader] = ACTIONS(466),
    [anon_sym_ATapiPermission] = ACTIONS(464),
    [anon_sym_ATapiDeprecated] = ACTIONS(464),
    [anon_sym_ATapi] = ACTIONS(466),
    [anon_sym_ATapiError] = ACTIONS(466),
    [anon_sym_ATapiName] = ACTIONS(464),
    [anon_sym_ATapiGroup] = ACTIONS(464),
    [anon_sym_ATapiParamExample] = ACTIONS(464),
    [anon_sym_ATapiDefine] = ACTIONS(464),
    [anon_sym_ATapiExample] = ACTIONS(464),
    [anon_sym_ATapiDescription] = ACTIONS(464),
    [sym__end] = ACTIONS(464),
    [anon_sym_ATapiSuccessExample] = ACTIONS(464),
    [anon_sym_ATapiSampleRequest] = ACTIONS(464),
    [anon_sym_ATapiVersion] = ACTIONS(464),
    [anon_sym_ATapiHeaderExample] = ACTIONS(464),
    [anon_sym_ATapiPrivate] = ACTIONS(464),
    [anon_sym_ATapiParam] = ACTIONS(466),
    [anon_sym_ATapiIgnore] = ACTIONS(464),
    [anon_sym_ATapiErrorExample] = ACTIONS(464),
    [anon_sym_ATapiSuccess] = ACTIONS(466),
    [sym__text] = ACTIONS(466),
  },
  [117] = {
    [anon_sym_ATapiUse] = ACTIONS(468),
    [anon_sym_ATapiHeader] = ACTIONS(470),
    [anon_sym_ATapiPermission] = ACTIONS(468),
    [anon_sym_ATapiDeprecated] = ACTIONS(468),
    [anon_sym_ATapi] = ACTIONS(470),
    [anon_sym_ATapiError] = ACTIONS(470),
    [anon_sym_ATapiName] = ACTIONS(468),
    [anon_sym_ATapiGroup] = ACTIONS(468),
    [anon_sym_ATapiParamExample] = ACTIONS(468),
    [anon_sym_ATapiDefine] = ACTIONS(468),
    [anon_sym_ATapiExample] = ACTIONS(468),
    [anon_sym_ATapiDescription] = ACTIONS(468),
    [sym__end] = ACTIONS(468),
    [anon_sym_ATapiSuccessExample] = ACTIONS(468),
    [anon_sym_ATapiSampleRequest] = ACTIONS(468),
    [anon_sym_ATapiVersion] = ACTIONS(468),
    [anon_sym_ATapiHeaderExample] = ACTIONS(468),
    [anon_sym_ATapiPrivate] = ACTIONS(468),
    [anon_sym_ATapiParam] = ACTIONS(470),
    [anon_sym_ATapiIgnore] = ACTIONS(468),
    [anon_sym_ATapiErrorExample] = ACTIONS(468),
    [anon_sym_ATapiSuccess] = ACTIONS(470),
  },
  [118] = {
    [sym_description] = STATE(129),
    [anon_sym_ATapiUse] = ACTIONS(468),
    [anon_sym_ATapiHeader] = ACTIONS(470),
    [anon_sym_ATapiPermission] = ACTIONS(468),
    [anon_sym_ATapiDeprecated] = ACTIONS(468),
    [anon_sym_ATapi] = ACTIONS(470),
    [anon_sym_ATapiError] = ACTIONS(470),
    [anon_sym_ATapiName] = ACTIONS(468),
    [anon_sym_ATapiGroup] = ACTIONS(468),
    [anon_sym_ATapiParamExample] = ACTIONS(468),
    [anon_sym_ATapiDefine] = ACTIONS(468),
    [anon_sym_ATapiExample] = ACTIONS(468),
    [anon_sym_ATapiDescription] = ACTIONS(468),
    [sym__end] = ACTIONS(468),
    [anon_sym_ATapiSuccessExample] = ACTIONS(468),
    [anon_sym_ATapiSampleRequest] = ACTIONS(468),
    [anon_sym_ATapiVersion] = ACTIONS(468),
    [anon_sym_ATapiHeaderExample] = ACTIONS(468),
    [anon_sym_ATapiPrivate] = ACTIONS(468),
    [anon_sym_ATapiParam] = ACTIONS(470),
    [anon_sym_ATapiIgnore] = ACTIONS(468),
    [anon_sym_ATapiErrorExample] = ACTIONS(468),
    [anon_sym_ATapiSuccess] = ACTIONS(470),
    [sym__text] = ACTIONS(55),
  },
  [119] = {
    [anon_sym_ATapiUse] = ACTIONS(472),
    [anon_sym_ATapiHeader] = ACTIONS(474),
    [anon_sym_ATapiPermission] = ACTIONS(472),
    [anon_sym_ATapiDeprecated] = ACTIONS(472),
    [anon_sym_ATapi] = ACTIONS(474),
    [anon_sym_ATapiError] = ACTIONS(474),
    [anon_sym_ATapiName] = ACTIONS(472),
    [anon_sym_ATapiGroup] = ACTIONS(472),
    [anon_sym_ATapiParamExample] = ACTIONS(472),
    [anon_sym_ATapiDefine] = ACTIONS(472),
    [anon_sym_ATapiExample] = ACTIONS(472),
    [anon_sym_ATapiDescription] = ACTIONS(472),
    [sym__end] = ACTIONS(474),
    [aux_sym_path_token1] = ACTIONS(474),
    [anon_sym_ATapiSuccessExample] = ACTIONS(472),
    [anon_sym_ATapiSampleRequest] = ACTIONS(472),
    [anon_sym_ATapiVersion] = ACTIONS(472),
    [anon_sym_ATapiHeaderExample] = ACTIONS(472),
    [anon_sym_ATapiPrivate] = ACTIONS(472),
    [anon_sym_ATapiParam] = ACTIONS(474),
    [anon_sym_ATapiIgnore] = ACTIONS(472),
    [anon_sym_ATapiErrorExample] = ACTIONS(472),
    [anon_sym_ATapiSuccess] = ACTIONS(474),
    [sym__text] = ACTIONS(474),
  },
  [120] = {
    [anon_sym_ATapiUse] = ACTIONS(476),
    [anon_sym_ATapiHeader] = ACTIONS(478),
    [anon_sym_ATapiPermission] = ACTIONS(476),
    [anon_sym_ATapiDeprecated] = ACTIONS(476),
    [anon_sym_ATapi] = ACTIONS(478),
    [anon_sym_ATapiError] = ACTIONS(478),
    [anon_sym_ATapiName] = ACTIONS(476),
    [anon_sym_ATapiGroup] = ACTIONS(476),
    [anon_sym_ATapiParamExample] = ACTIONS(476),
    [anon_sym_ATapiDefine] = ACTIONS(476),
    [anon_sym_ATapiExample] = ACTIONS(476),
    [anon_sym_ATapiDescription] = ACTIONS(476),
    [sym__end] = ACTIONS(476),
    [anon_sym_ATapiSuccessExample] = ACTIONS(476),
    [anon_sym_ATapiSampleRequest] = ACTIONS(476),
    [anon_sym_ATapiVersion] = ACTIONS(476),
    [anon_sym_ATapiHeaderExample] = ACTIONS(476),
    [anon_sym_ATapiPrivate] = ACTIONS(476),
    [anon_sym_ATapiParam] = ACTIONS(478),
    [anon_sym_ATapiIgnore] = ACTIONS(476),
    [anon_sym_ATapiErrorExample] = ACTIONS(476),
    [anon_sym_ATapiSuccess] = ACTIONS(478),
  },
  [121] = {
    [anon_sym_ATapiUse] = ACTIONS(480),
    [anon_sym_ATapiHeader] = ACTIONS(482),
    [anon_sym_ATapiPermission] = ACTIONS(480),
    [anon_sym_ATapiDeprecated] = ACTIONS(480),
    [anon_sym_ATapi] = ACTIONS(482),
    [anon_sym_ATapiError] = ACTIONS(482),
    [anon_sym_ATapiName] = ACTIONS(480),
    [anon_sym_ATapiGroup] = ACTIONS(480),
    [anon_sym_ATapiParamExample] = ACTIONS(480),
    [anon_sym_ATapiDefine] = ACTIONS(480),
    [anon_sym_ATapiExample] = ACTIONS(480),
    [anon_sym_ATapiDescription] = ACTIONS(480),
    [sym__end] = ACTIONS(480),
    [anon_sym_ATapiSuccessExample] = ACTIONS(480),
    [anon_sym_ATapiSampleRequest] = ACTIONS(480),
    [anon_sym_ATapiVersion] = ACTIONS(480),
    [anon_sym_ATapiHeaderExample] = ACTIONS(480),
    [anon_sym_ATapiPrivate] = ACTIONS(480),
    [anon_sym_ATapiParam] = ACTIONS(482),
    [anon_sym_ATapiIgnore] = ACTIONS(480),
    [anon_sym_ATapiErrorExample] = ACTIONS(480),
    [anon_sym_ATapiSuccess] = ACTIONS(482),
  },
  [122] = {
    [sym_description] = STATE(130),
    [anon_sym_ATapiUse] = ACTIONS(480),
    [anon_sym_ATapiHeader] = ACTIONS(482),
    [anon_sym_ATapiPermission] = ACTIONS(480),
    [anon_sym_ATapiDeprecated] = ACTIONS(480),
    [anon_sym_ATapi] = ACTIONS(482),
    [anon_sym_ATapiError] = ACTIONS(482),
    [anon_sym_ATapiName] = ACTIONS(480),
    [anon_sym_ATapiGroup] = ACTIONS(480),
    [anon_sym_ATapiParamExample] = ACTIONS(480),
    [anon_sym_ATapiDefine] = ACTIONS(480),
    [anon_sym_ATapiExample] = ACTIONS(480),
    [anon_sym_ATapiDescription] = ACTIONS(480),
    [sym__end] = ACTIONS(480),
    [anon_sym_ATapiSuccessExample] = ACTIONS(480),
    [anon_sym_ATapiSampleRequest] = ACTIONS(480),
    [anon_sym_ATapiVersion] = ACTIONS(480),
    [anon_sym_ATapiHeaderExample] = ACTIONS(480),
    [anon_sym_ATapiPrivate] = ACTIONS(480),
    [anon_sym_ATapiParam] = ACTIONS(482),
    [anon_sym_ATapiIgnore] = ACTIONS(480),
    [anon_sym_ATapiErrorExample] = ACTIONS(480),
    [anon_sym_ATapiSuccess] = ACTIONS(482),
    [sym__text] = ACTIONS(55),
  },
  [123] = {
    [anon_sym_ATapiUse] = ACTIONS(484),
    [anon_sym_ATapiHeader] = ACTIONS(486),
    [anon_sym_ATapiPermission] = ACTIONS(484),
    [anon_sym_ATapiDeprecated] = ACTIONS(484),
    [anon_sym_ATapi] = ACTIONS(486),
    [anon_sym_ATapiError] = ACTIONS(486),
    [anon_sym_ATapiName] = ACTIONS(484),
    [anon_sym_ATapiGroup] = ACTIONS(484),
    [anon_sym_ATapiParamExample] = ACTIONS(484),
    [anon_sym_ATapiDefine] = ACTIONS(484),
    [anon_sym_ATapiExample] = ACTIONS(484),
    [anon_sym_ATapiDescription] = ACTIONS(484),
    [sym__end] = ACTIONS(484),
    [anon_sym_ATapiSuccessExample] = ACTIONS(484),
    [anon_sym_ATapiSampleRequest] = ACTIONS(484),
    [anon_sym_ATapiVersion] = ACTIONS(484),
    [anon_sym_ATapiHeaderExample] = ACTIONS(484),
    [anon_sym_ATapiPrivate] = ACTIONS(484),
    [anon_sym_ATapiParam] = ACTIONS(486),
    [anon_sym_ATapiIgnore] = ACTIONS(484),
    [anon_sym_ATapiErrorExample] = ACTIONS(484),
    [anon_sym_ATapiSuccess] = ACTIONS(486),
  },
  [124] = {
    [sym_description] = STATE(131),
    [anon_sym_ATapiUse] = ACTIONS(484),
    [anon_sym_ATapiHeader] = ACTIONS(486),
    [anon_sym_ATapiPermission] = ACTIONS(484),
    [anon_sym_ATapiDeprecated] = ACTIONS(484),
    [anon_sym_ATapi] = ACTIONS(486),
    [anon_sym_ATapiError] = ACTIONS(486),
    [anon_sym_ATapiName] = ACTIONS(484),
    [anon_sym_ATapiGroup] = ACTIONS(484),
    [anon_sym_ATapiParamExample] = ACTIONS(484),
    [anon_sym_ATapiDefine] = ACTIONS(484),
    [anon_sym_ATapiExample] = ACTIONS(484),
    [anon_sym_ATapiDescription] = ACTIONS(484),
    [sym__end] = ACTIONS(484),
    [anon_sym_ATapiSuccessExample] = ACTIONS(484),
    [anon_sym_ATapiSampleRequest] = ACTIONS(484),
    [anon_sym_ATapiVersion] = ACTIONS(484),
    [anon_sym_ATapiHeaderExample] = ACTIONS(484),
    [anon_sym_ATapiPrivate] = ACTIONS(484),
    [anon_sym_ATapiParam] = ACTIONS(486),
    [anon_sym_ATapiIgnore] = ACTIONS(484),
    [anon_sym_ATapiErrorExample] = ACTIONS(484),
    [anon_sym_ATapiSuccess] = ACTIONS(486),
    [sym__text] = ACTIONS(55),
  },
  [125] = {
    [anon_sym_ATapiUse] = ACTIONS(488),
    [anon_sym_ATapiHeader] = ACTIONS(490),
    [anon_sym_ATapiPermission] = ACTIONS(488),
    [anon_sym_ATapiDeprecated] = ACTIONS(488),
    [anon_sym_ATapi] = ACTIONS(490),
    [anon_sym_ATapiError] = ACTIONS(490),
    [anon_sym_ATapiName] = ACTIONS(488),
    [anon_sym_ATapiGroup] = ACTIONS(488),
    [anon_sym_ATapiParamExample] = ACTIONS(488),
    [anon_sym_ATapiDefine] = ACTIONS(488),
    [anon_sym_ATapiExample] = ACTIONS(488),
    [anon_sym_ATapiDescription] = ACTIONS(488),
    [sym__end] = ACTIONS(488),
    [anon_sym_ATapiSuccessExample] = ACTIONS(488),
    [anon_sym_ATapiSampleRequest] = ACTIONS(488),
    [anon_sym_ATapiVersion] = ACTIONS(488),
    [anon_sym_ATapiHeaderExample] = ACTIONS(488),
    [anon_sym_ATapiPrivate] = ACTIONS(488),
    [anon_sym_ATapiParam] = ACTIONS(490),
    [anon_sym_ATapiIgnore] = ACTIONS(488),
    [anon_sym_ATapiErrorExample] = ACTIONS(488),
    [anon_sym_ATapiSuccess] = ACTIONS(490),
  },
  [126] = {
    [sym_description] = STATE(132),
    [anon_sym_ATapiUse] = ACTIONS(488),
    [anon_sym_ATapiHeader] = ACTIONS(490),
    [anon_sym_ATapiPermission] = ACTIONS(488),
    [anon_sym_ATapiDeprecated] = ACTIONS(488),
    [anon_sym_ATapi] = ACTIONS(490),
    [anon_sym_ATapiError] = ACTIONS(490),
    [anon_sym_ATapiName] = ACTIONS(488),
    [anon_sym_ATapiGroup] = ACTIONS(488),
    [anon_sym_ATapiParamExample] = ACTIONS(488),
    [anon_sym_ATapiDefine] = ACTIONS(488),
    [anon_sym_ATapiExample] = ACTIONS(488),
    [anon_sym_ATapiDescription] = ACTIONS(488),
    [sym__end] = ACTIONS(488),
    [anon_sym_ATapiSuccessExample] = ACTIONS(488),
    [anon_sym_ATapiSampleRequest] = ACTIONS(488),
    [anon_sym_ATapiVersion] = ACTIONS(488),
    [anon_sym_ATapiHeaderExample] = ACTIONS(488),
    [anon_sym_ATapiPrivate] = ACTIONS(488),
    [anon_sym_ATapiParam] = ACTIONS(490),
    [anon_sym_ATapiIgnore] = ACTIONS(488),
    [anon_sym_ATapiErrorExample] = ACTIONS(488),
    [anon_sym_ATapiSuccess] = ACTIONS(490),
    [sym__text] = ACTIONS(55),
  },
  [127] = {
    [anon_sym_RBRACK] = ACTIONS(492),
  },
  [128] = {
    [anon_sym_RBRACK] = ACTIONS(494),
  },
  [129] = {
    [anon_sym_ATapiUse] = ACTIONS(496),
    [anon_sym_ATapiHeader] = ACTIONS(498),
    [anon_sym_ATapiPermission] = ACTIONS(496),
    [anon_sym_ATapiDeprecated] = ACTIONS(496),
    [anon_sym_ATapi] = ACTIONS(498),
    [anon_sym_ATapiError] = ACTIONS(498),
    [anon_sym_ATapiName] = ACTIONS(496),
    [anon_sym_ATapiGroup] = ACTIONS(496),
    [anon_sym_ATapiParamExample] = ACTIONS(496),
    [anon_sym_ATapiDefine] = ACTIONS(496),
    [anon_sym_ATapiExample] = ACTIONS(496),
    [anon_sym_ATapiDescription] = ACTIONS(496),
    [sym__end] = ACTIONS(496),
    [anon_sym_ATapiSuccessExample] = ACTIONS(496),
    [anon_sym_ATapiSampleRequest] = ACTIONS(496),
    [anon_sym_ATapiVersion] = ACTIONS(496),
    [anon_sym_ATapiHeaderExample] = ACTIONS(496),
    [anon_sym_ATapiPrivate] = ACTIONS(496),
    [anon_sym_ATapiParam] = ACTIONS(498),
    [anon_sym_ATapiIgnore] = ACTIONS(496),
    [anon_sym_ATapiErrorExample] = ACTIONS(496),
    [anon_sym_ATapiSuccess] = ACTIONS(498),
  },
  [130] = {
    [anon_sym_ATapiUse] = ACTIONS(500),
    [anon_sym_ATapiHeader] = ACTIONS(502),
    [anon_sym_ATapiPermission] = ACTIONS(500),
    [anon_sym_ATapiDeprecated] = ACTIONS(500),
    [anon_sym_ATapi] = ACTIONS(502),
    [anon_sym_ATapiError] = ACTIONS(502),
    [anon_sym_ATapiName] = ACTIONS(500),
    [anon_sym_ATapiGroup] = ACTIONS(500),
    [anon_sym_ATapiParamExample] = ACTIONS(500),
    [anon_sym_ATapiDefine] = ACTIONS(500),
    [anon_sym_ATapiExample] = ACTIONS(500),
    [anon_sym_ATapiDescription] = ACTIONS(500),
    [sym__end] = ACTIONS(500),
    [anon_sym_ATapiSuccessExample] = ACTIONS(500),
    [anon_sym_ATapiSampleRequest] = ACTIONS(500),
    [anon_sym_ATapiVersion] = ACTIONS(500),
    [anon_sym_ATapiHeaderExample] = ACTIONS(500),
    [anon_sym_ATapiPrivate] = ACTIONS(500),
    [anon_sym_ATapiParam] = ACTIONS(502),
    [anon_sym_ATapiIgnore] = ACTIONS(500),
    [anon_sym_ATapiErrorExample] = ACTIONS(500),
    [anon_sym_ATapiSuccess] = ACTIONS(502),
  },
  [131] = {
    [anon_sym_ATapiUse] = ACTIONS(504),
    [anon_sym_ATapiHeader] = ACTIONS(506),
    [anon_sym_ATapiPermission] = ACTIONS(504),
    [anon_sym_ATapiDeprecated] = ACTIONS(504),
    [anon_sym_ATapi] = ACTIONS(506),
    [anon_sym_ATapiError] = ACTIONS(506),
    [anon_sym_ATapiName] = ACTIONS(504),
    [anon_sym_ATapiGroup] = ACTIONS(504),
    [anon_sym_ATapiParamExample] = ACTIONS(504),
    [anon_sym_ATapiDefine] = ACTIONS(504),
    [anon_sym_ATapiExample] = ACTIONS(504),
    [anon_sym_ATapiDescription] = ACTIONS(504),
    [sym__end] = ACTIONS(504),
    [anon_sym_ATapiSuccessExample] = ACTIONS(504),
    [anon_sym_ATapiSampleRequest] = ACTIONS(504),
    [anon_sym_ATapiVersion] = ACTIONS(504),
    [anon_sym_ATapiHeaderExample] = ACTIONS(504),
    [anon_sym_ATapiPrivate] = ACTIONS(504),
    [anon_sym_ATapiParam] = ACTIONS(506),
    [anon_sym_ATapiIgnore] = ACTIONS(504),
    [anon_sym_ATapiErrorExample] = ACTIONS(504),
    [anon_sym_ATapiSuccess] = ACTIONS(506),
  },
  [132] = {
    [anon_sym_ATapiUse] = ACTIONS(508),
    [anon_sym_ATapiHeader] = ACTIONS(510),
    [anon_sym_ATapiPermission] = ACTIONS(508),
    [anon_sym_ATapiDeprecated] = ACTIONS(508),
    [anon_sym_ATapi] = ACTIONS(510),
    [anon_sym_ATapiError] = ACTIONS(510),
    [anon_sym_ATapiName] = ACTIONS(508),
    [anon_sym_ATapiGroup] = ACTIONS(508),
    [anon_sym_ATapiParamExample] = ACTIONS(508),
    [anon_sym_ATapiDefine] = ACTIONS(508),
    [anon_sym_ATapiExample] = ACTIONS(508),
    [anon_sym_ATapiDescription] = ACTIONS(508),
    [sym__end] = ACTIONS(508),
    [anon_sym_ATapiSuccessExample] = ACTIONS(508),
    [anon_sym_ATapiSampleRequest] = ACTIONS(508),
    [anon_sym_ATapiVersion] = ACTIONS(508),
    [anon_sym_ATapiHeaderExample] = ACTIONS(508),
    [anon_sym_ATapiPrivate] = ACTIONS(508),
    [anon_sym_ATapiParam] = ACTIONS(510),
    [anon_sym_ATapiIgnore] = ACTIONS(508),
    [anon_sym_ATapiErrorExample] = ACTIONS(508),
    [anon_sym_ATapiSuccess] = ACTIONS(510),
  },
  [133] = {
    [anon_sym_ATapiUse] = ACTIONS(512),
    [anon_sym_ATapiHeader] = ACTIONS(514),
    [anon_sym_ATapiPermission] = ACTIONS(512),
    [anon_sym_ATapiDeprecated] = ACTIONS(512),
    [anon_sym_ATapi] = ACTIONS(514),
    [anon_sym_ATapiError] = ACTIONS(514),
    [anon_sym_ATapiName] = ACTIONS(512),
    [anon_sym_ATapiGroup] = ACTIONS(512),
    [anon_sym_ATapiParamExample] = ACTIONS(512),
    [anon_sym_ATapiDefine] = ACTIONS(512),
    [anon_sym_ATapiExample] = ACTIONS(512),
    [anon_sym_ATapiDescription] = ACTIONS(512),
    [sym__end] = ACTIONS(512),
    [anon_sym_ATapiSuccessExample] = ACTIONS(512),
    [anon_sym_ATapiSampleRequest] = ACTIONS(512),
    [anon_sym_ATapiVersion] = ACTIONS(512),
    [anon_sym_ATapiHeaderExample] = ACTIONS(512),
    [anon_sym_ATapiPrivate] = ACTIONS(512),
    [anon_sym_ATapiParam] = ACTIONS(514),
    [anon_sym_ATapiIgnore] = ACTIONS(512),
    [anon_sym_ATapiErrorExample] = ACTIONS(512),
    [anon_sym_ATapiSuccess] = ACTIONS(514),
    [sym__text] = ACTIONS(514),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = false}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = false}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = false}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, SHIFT(22),
  [43] = {.count = 1, .reusable = true}, SHIFT(23),
  [45] = {.count = 1, .reusable = false}, SHIFT(24),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_apiuse, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_apiuse, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_header, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_header, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(32),
  [65] = {.count = 1, .reusable = true}, SHIFT(33),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_permission, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_permission, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_deprecated, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_deprecated, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_api, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_api, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(41),
  [83] = {.count = 1, .reusable = false}, SHIFT(42),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_apierror, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_apierror, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(47),
  [91] = {.count = 1, .reusable = true}, SHIFT(46),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_apiname, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_apiname, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_apigroup, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_apigroup, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_paramexample, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_paramexample, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(54),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_define, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_define, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_example, 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_example, 1),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_apidescription, 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_apidescription, 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_successexample, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_successexample, 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_samplerequest, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_samplerequest, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(64),
  [129] = {.count = 1, .reusable = true}, SHIFT(65),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_version, 1),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_version, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(67),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_headerexample, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_headerexample, 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_private, 1),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_private, 1),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_apiparam, 1),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_apiparam, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_ignore, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_ignore, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_errorexample, 1),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_errorexample, 1),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_success, 1),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_success, 1),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [165] = {.count = 1, .reusable = true}, SHIFT(83),
  [167] = {.count = 1, .reusable = true}, SHIFT(85),
  [169] = {.count = 1, .reusable = false}, SHIFT(87),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_apiuse, 2, .production_id = 1),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_apiuse, 2, .production_id = 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(88),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_group, 1),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_group, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_name, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 1),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 1),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_header, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_header, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_permission, 2, .production_id = 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_permission, 2, .production_id = 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_deprecated, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_deprecated, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(93),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_api, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_api, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_api, 2, .production_id = 2),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_api, 2, .production_id = 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_apierror, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_apierror, 2),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_apiname, 2, .production_id = 1),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_apiname, 2, .production_id = 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_apigroup, 2, .production_id = 2),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_apigroup, 2, .production_id = 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_paramexample, 2, .production_id = 2),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_paramexample, 2, .production_id = 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_paramexample, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_paramexample, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2, .production_id = 2),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2, .production_id = 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_example, 2, .production_id = 2),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_example, 2, .production_id = 2),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_example, 2),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_example, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_apidescription, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_apidescription, 2),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_successexample, 2, .production_id = 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_successexample, 2, .production_id = 2),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_successexample, 2),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_successexample, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_samplerequest, 2),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_samplerequest, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_url, 1),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_url, 1),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_version, 2),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_version, 2),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_version, 2, .production_id = 1),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_version, 2, .production_id = 1),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_headerexample, 2, .production_id = 2),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_headerexample, 2, .production_id = 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_headerexample, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_headerexample, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_private, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_private, 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_apiparam, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_apiparam, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_ignore, 2),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_ignore, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_errorexample, 2, .production_id = 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_errorexample, 2, .production_id = 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_errorexample, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_errorexample, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_success, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_success, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_description, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_description, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(112),
  [321] = {.count = 1, .reusable = true}, SHIFT(113),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_apidoc, 3),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(4),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(5),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(6),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(7),
  [337] = {.count = 2, .reusable = false}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(8),
  [340] = {.count = 2, .reusable = false}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(9),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(10),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(11),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(12),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(13),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(14),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(15),
  [361] = {.count = 1, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(16),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(17),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(18),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(19),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(20),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(21),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(22),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(23),
  [387] = {.count = 2, .reusable = false}, REDUCE(aux_sym_apidoc_repeat1, 2), SHIFT_REPEAT(24),
  [390] = {.count = 1, .reusable = false}, SHIFT(114),
  [392] = {.count = 1, .reusable = true}, SHIFT(115),
  [394] = {.count = 1, .reusable = true}, SHIFT(116),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_header, 3),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_header, 3),
  [400] = {.count = 1, .reusable = true}, SHIFT(119),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_api, 3, .production_id = 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_api, 3, .production_id = 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_api, 3),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_api, 3),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_apierror, 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_apierror, 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_paramexample, 3, .production_id = 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_paramexample, 3, .production_id = 3),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_define, 3, .production_id = 3),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_define, 3, .production_id = 3),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_example, 3, .production_id = 3),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_example, 3, .production_id = 3),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_successexample, 3, .production_id = 3),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_successexample, 3, .production_id = 3),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_samplerequest, 3),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_samplerequest, 3),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_headerexample, 3, .production_id = 3),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_headerexample, 3, .production_id = 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_apiparam, 3),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_apiparam, 3),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_errorexample, 3, .production_id = 3),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_errorexample, 3, .production_id = 3),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_success, 3),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_success, 3),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [452] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(112),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_apidoc, 4),
  [459] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(114),
  [462] = {.count = 1, .reusable = true}, SHIFT(127),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 3),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_header, 4),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_header, 4),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_method, 3),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_method, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_api, 4, .production_id = 4),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_api, 4, .production_id = 4),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_apierror, 4),
  [482] = {.count = 1, .reusable = false}, REDUCE(sym_apierror, 4),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_apiparam, 4),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_apiparam, 4),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_success, 4),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_success, 4),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [494] = {.count = 1, .reusable = true}, SHIFT(133),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_header, 5),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_header, 5),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_apierror, 5),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym_apierror, 5),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_apiparam, 5),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_apiparam, 5),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_success, 5),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym_success, 5),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 5),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_apidoc(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
