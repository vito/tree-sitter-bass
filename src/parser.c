#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum {
  sym__ws = 1,
  sym_comment = 2,
  sym_int = 3,
  sym_keyword = 4,
  sym_string_escape = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_token1 = 7,
  sym_ignore = 8,
  sym_null = 9,
  sym_bool = 10,
  sym_symbol = 11,
  sym_command = 12,
  sym_path = 13,
  sym_relpath = 14,
  anon_sym_CARET = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  sym_source = 22,
  sym__gap = 23,
  sym__form = 24,
  sym_string = 25,
  sym_subpath = 26,
  sym_subbind = 27,
  sym_meta = 28,
  sym_list = 29,
  sym_scope = 30,
  sym_cons = 31,
  aux_sym_source_repeat1 = 32,
  aux_sym_string_repeat1 = 33,
  aux_sym_meta_repeat1 = 34,
  aux_sym_list_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_int] = "int",
  [sym_keyword] = "keyword",
  [sym_string_escape] = "string_escape",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_ignore] = "ignore",
  [sym_null] = "null",
  [sym_bool] = "bool",
  [sym_symbol] = "symbol",
  [sym_command] = "command",
  [sym_path] = "path",
  [sym_relpath] = "relpath",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source] = "source",
  [sym__gap] = "_gap",
  [sym__form] = "_form",
  [sym_string] = "string",
  [sym_subpath] = "subpath",
  [sym_subbind] = "subbind",
  [sym_meta] = "meta",
  [sym_list] = "list",
  [sym_scope] = "scope",
  [sym_cons] = "cons",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_int] = sym_int,
  [sym_keyword] = sym_keyword,
  [sym_string_escape] = sym_string_escape,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_ignore] = sym_ignore,
  [sym_null] = sym_null,
  [sym_bool] = sym_bool,
  [sym_symbol] = sym_symbol,
  [sym_command] = sym_command,
  [sym_path] = sym_path,
  [sym_relpath] = sym_relpath,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source] = sym_source,
  [sym__gap] = sym__gap,
  [sym__form] = sym__form,
  [sym_string] = sym_string,
  [sym_subpath] = sym_subpath,
  [sym_subbind] = sym_subbind,
  [sym_meta] = sym_meta,
  [sym_list] = sym_list,
  [sym_scope] = sym_scope,
  [sym_cons] = sym_cons,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ignore] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_relpath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_subpath] = {
    .visible = true,
    .named = true,
  },
  [sym_subbind] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_cons] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_close = 1,
  field_escape = 2,
  field_form = 3,
  field_keyword = 4,
  field_marker = 5,
  field_meta = 6,
  field_open = 7,
  field_path = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_escape] = "escape",
  [field_form] = "form",
  [field_keyword] = "keyword",
  [field_marker] = "marker",
  [field_meta] = "meta",
  [field_open] = "open",
  [field_path] = "path",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_escape, 0},
  [1] =
    {field_form, 0},
    {field_keyword, 1},
  [3] =
    {field_form, 0},
    {field_path, 1},
  [5] =
    {field_close, 1},
    {field_open, 0},
  [7] =
    {field_value, 0},
  [8] =
    {field_escape, 1, .inherited = true},
  [9] =
    {field_escape, 0, .inherited = true},
    {field_escape, 1, .inherited = true},
  [11] =
    {field_form, 2},
    {field_marker, 0},
    {field_meta, 1},
  [14] =
    {field_close, 2},
    {field_open, 0},
    {field_value, 1, .inherited = true},
  [17] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [19] =
    {field_form, 3},
    {field_marker, 0},
    {field_meta, 1},
  [22] =
    {field_form, 3},
    {field_marker, 0},
    {field_meta, 2},
  [25] =
    {field_form, 4},
    {field_marker, 0},
    {field_meta, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : (c <= ',' || c == '/'))))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_comment_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '('
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < '/'
        ? c == ','
        : c <= '/')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '('
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || (c >= ' ' && c <= '"')))
      : (c <= ')' || (c < '/'
        ? c == ','
        : c <= '/')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '('
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= ')' || (c < '/'
        ? c == ','
        : c <= '/')))
    : (c <= ';' || (c < '}'
      ? (c < '{'
        ? (c >= '[' && c <= '^')
        : c <= '{')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_command_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_path_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ',' ||
          lookahead == 133 ||
          lookahead == 160) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(36);
      if (!sym_command_character_set_1(lookahead)) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 4:
      if (!sym_command_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ',' ||
          lookahead == 133 ||
          lookahead == 160) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ',' ||
          lookahead == 133 ||
          lookahead == 160) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__ws);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == 133 ||
          lookahead == 160) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(10);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_keyword);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string_escape);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_string_escape);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_ignore);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_null);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_bool);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(10);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(15);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(26);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(21);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(30);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(20);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(27);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(31);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(25);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(25);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(28);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_command);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(36);
      if (!sym_command_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(36);
      if (!sym_path_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_relpath);
      if (lookahead == '/') ADVANCE(38);
      if (!sym_command_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_relpath);
      if (lookahead == '/') ADVANCE(38);
      if (!sym_path_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_string_escape] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_ignore] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_command] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
    [sym_relpath] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(67),
    [sym__gap] = STATE(9),
    [sym__form] = STATE(9),
    [sym_string] = STATE(9),
    [sym_subpath] = STATE(9),
    [sym_subbind] = STATE(45),
    [sym_meta] = STATE(9),
    [sym_list] = STATE(9),
    [sym_scope] = STATE(9),
    [sym_cons] = STATE(9),
    [aux_sym_source_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_int] = ACTIONS(5),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_ignore] = ACTIONS(5),
    [sym_null] = ACTIONS(5),
    [sym_bool] = ACTIONS(5),
    [sym_symbol] = ACTIONS(9),
    [sym_command] = ACTIONS(5),
    [sym_path] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [2] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(19),
    [sym_comment] = ACTIONS(19),
    [sym_int] = ACTIONS(22),
    [sym_keyword] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(22),
    [sym_null] = ACTIONS(22),
    [sym_bool] = ACTIONS(22),
    [sym_symbol] = ACTIONS(28),
    [sym_command] = ACTIONS(22),
    [sym_path] = ACTIONS(22),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(42),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [3] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [4] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(63),
  },
  [5] = {
    [sym__gap] = STATE(16),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(16),
    [sym__ws] = ACTIONS(65),
    [sym_comment] = ACTIONS(65),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [6] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(3),
    [sym__ws] = ACTIONS(69),
    [sym_comment] = ACTIONS(69),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [7] = {
    [sym__gap] = STATE(14),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(14),
    [sym__ws] = ACTIONS(73),
    [sym_comment] = ACTIONS(73),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(75),
  },
  [8] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [9] = {
    [sym__gap] = STATE(10),
    [sym__form] = STATE(10),
    [sym_string] = STATE(10),
    [sym_subpath] = STATE(10),
    [sym_subbind] = STATE(45),
    [sym_meta] = STATE(10),
    [sym_list] = STATE(10),
    [sym_scope] = STATE(10),
    [sym_cons] = STATE(10),
    [aux_sym_source_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym__ws] = ACTIONS(81),
    [sym_comment] = ACTIONS(81),
    [sym_int] = ACTIONS(81),
    [sym_keyword] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_ignore] = ACTIONS(81),
    [sym_null] = ACTIONS(81),
    [sym_bool] = ACTIONS(81),
    [sym_symbol] = ACTIONS(9),
    [sym_command] = ACTIONS(81),
    [sym_path] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [10] = {
    [sym__gap] = STATE(10),
    [sym__form] = STATE(10),
    [sym_string] = STATE(10),
    [sym_subpath] = STATE(10),
    [sym_subbind] = STATE(45),
    [sym_meta] = STATE(10),
    [sym_list] = STATE(10),
    [sym_scope] = STATE(10),
    [sym_cons] = STATE(10),
    [aux_sym_source_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym__ws] = ACTIONS(85),
    [sym_comment] = ACTIONS(85),
    [sym_int] = ACTIONS(85),
    [sym_keyword] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [sym_ignore] = ACTIONS(85),
    [sym_null] = ACTIONS(85),
    [sym_bool] = ACTIONS(85),
    [sym_symbol] = ACTIONS(91),
    [sym_command] = ACTIONS(85),
    [sym_path] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(103),
  },
  [11] = {
    [sym__gap] = STATE(4),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(4),
    [sym__ws] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(108),
  },
  [12] = {
    [sym__gap] = STATE(15),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(15),
    [sym__ws] = ACTIONS(110),
    [sym_comment] = ACTIONS(110),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [13] = {
    [sym__gap] = STATE(8),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(8),
    [sym__ws] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [14] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(118),
  },
  [15] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [16] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(34),
    [sym_string] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
    [sym_int] = ACTIONS(47),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_bool] = ACTIONS(47),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(47),
    [sym_path] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [17] = {
    [sym__gap] = STATE(47),
    [sym__form] = STATE(27),
    [sym_string] = STATE(27),
    [sym_subpath] = STATE(27),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(27),
    [sym_list] = STATE(27),
    [sym_scope] = STATE(27),
    [sym_cons] = STATE(27),
    [aux_sym_meta_repeat1] = STATE(47),
    [sym__ws] = ACTIONS(124),
    [sym_comment] = ACTIONS(124),
    [sym_int] = ACTIONS(126),
    [sym_keyword] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(126),
    [sym_null] = ACTIONS(126),
    [sym_bool] = ACTIONS(126),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(126),
    [sym_path] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [18] = {
    [sym__gap] = STATE(47),
    [sym__form] = STATE(33),
    [sym_string] = STATE(33),
    [sym_subpath] = STATE(33),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(33),
    [sym_list] = STATE(33),
    [sym_scope] = STATE(33),
    [sym_cons] = STATE(33),
    [aux_sym_meta_repeat1] = STATE(47),
    [sym__ws] = ACTIONS(124),
    [sym_comment] = ACTIONS(124),
    [sym_int] = ACTIONS(128),
    [sym_keyword] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(128),
    [sym_null] = ACTIONS(128),
    [sym_bool] = ACTIONS(128),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(128),
    [sym_path] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [19] = {
    [sym__gap] = STATE(47),
    [sym__form] = STATE(20),
    [sym_string] = STATE(20),
    [sym_subpath] = STATE(20),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(20),
    [sym_list] = STATE(20),
    [sym_scope] = STATE(20),
    [sym_cons] = STATE(20),
    [aux_sym_meta_repeat1] = STATE(47),
    [sym__ws] = ACTIONS(124),
    [sym_comment] = ACTIONS(124),
    [sym_int] = ACTIONS(130),
    [sym_keyword] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(130),
    [sym_null] = ACTIONS(130),
    [sym_bool] = ACTIONS(130),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(130),
    [sym_path] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [20] = {
    [sym__gap] = STATE(18),
    [sym__form] = STATE(35),
    [sym_string] = STATE(35),
    [sym_subpath] = STATE(35),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(35),
    [sym_list] = STATE(35),
    [sym_scope] = STATE(35),
    [sym_cons] = STATE(35),
    [aux_sym_meta_repeat1] = STATE(18),
    [sym__ws] = ACTIONS(132),
    [sym_comment] = ACTIONS(132),
    [sym_int] = ACTIONS(134),
    [sym_keyword] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(134),
    [sym_null] = ACTIONS(134),
    [sym_bool] = ACTIONS(134),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(134),
    [sym_path] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [21] = {
    [sym__gap] = STATE(17),
    [sym__form] = STATE(23),
    [sym_string] = STATE(23),
    [sym_subpath] = STATE(23),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(23),
    [sym_list] = STATE(23),
    [sym_scope] = STATE(23),
    [sym_cons] = STATE(23),
    [aux_sym_meta_repeat1] = STATE(17),
    [sym__ws] = ACTIONS(136),
    [sym_comment] = ACTIONS(136),
    [sym_int] = ACTIONS(138),
    [sym_keyword] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(138),
    [sym_null] = ACTIONS(138),
    [sym_bool] = ACTIONS(138),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(138),
    [sym_path] = ACTIONS(138),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [22] = {
    [sym__gap] = STATE(47),
    [sym__form] = STATE(36),
    [sym_string] = STATE(36),
    [sym_subpath] = STATE(36),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(36),
    [sym_list] = STATE(36),
    [sym_scope] = STATE(36),
    [sym_cons] = STATE(36),
    [aux_sym_meta_repeat1] = STATE(47),
    [sym__ws] = ACTIONS(124),
    [sym_comment] = ACTIONS(124),
    [sym_int] = ACTIONS(140),
    [sym_keyword] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(140),
    [sym_null] = ACTIONS(140),
    [sym_bool] = ACTIONS(140),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(140),
    [sym_path] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [23] = {
    [sym__gap] = STATE(26),
    [sym__form] = STATE(53),
    [sym_string] = STATE(53),
    [sym_subpath] = STATE(53),
    [sym_subbind] = STATE(45),
    [sym_meta] = STATE(53),
    [sym_list] = STATE(53),
    [sym_scope] = STATE(53),
    [sym_cons] = STATE(53),
    [aux_sym_meta_repeat1] = STATE(26),
    [sym__ws] = ACTIONS(142),
    [sym_comment] = ACTIONS(142),
    [sym_int] = ACTIONS(144),
    [sym_keyword] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_ignore] = ACTIONS(144),
    [sym_null] = ACTIONS(144),
    [sym_bool] = ACTIONS(144),
    [sym_symbol] = ACTIONS(9),
    [sym_command] = ACTIONS(144),
    [sym_path] = ACTIONS(144),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [24] = {
    [sym__gap] = STATE(19),
    [sym__form] = STATE(25),
    [sym_string] = STATE(25),
    [sym_subpath] = STATE(25),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [aux_sym_meta_repeat1] = STATE(19),
    [sym__ws] = ACTIONS(146),
    [sym_comment] = ACTIONS(146),
    [sym_int] = ACTIONS(148),
    [sym_keyword] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(148),
    [sym_null] = ACTIONS(148),
    [sym_bool] = ACTIONS(148),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(148),
    [sym_path] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [25] = {
    [sym__gap] = STATE(22),
    [sym__form] = STATE(32),
    [sym_string] = STATE(32),
    [sym_subpath] = STATE(32),
    [sym_subbind] = STATE(30),
    [sym_meta] = STATE(32),
    [sym_list] = STATE(32),
    [sym_scope] = STATE(32),
    [sym_cons] = STATE(32),
    [aux_sym_meta_repeat1] = STATE(22),
    [sym__ws] = ACTIONS(150),
    [sym_comment] = ACTIONS(150),
    [sym_int] = ACTIONS(152),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_ignore] = ACTIONS(152),
    [sym_null] = ACTIONS(152),
    [sym_bool] = ACTIONS(152),
    [sym_symbol] = ACTIONS(51),
    [sym_command] = ACTIONS(152),
    [sym_path] = ACTIONS(152),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [26] = {
    [sym__gap] = STATE(47),
    [sym__form] = STATE(58),
    [sym_string] = STATE(58),
    [sym_subpath] = STATE(58),
    [sym_subbind] = STATE(45),
    [sym_meta] = STATE(58),
    [sym_list] = STATE(58),
    [sym_scope] = STATE(58),
    [sym_cons] = STATE(58),
    [aux_sym_meta_repeat1] = STATE(47),
    [sym__ws] = ACTIONS(124),
    [sym_comment] = ACTIONS(124),
    [sym_int] = ACTIONS(154),
    [sym_keyword] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_ignore] = ACTIONS(154),
    [sym_null] = ACTIONS(154),
    [sym_bool] = ACTIONS(154),
    [sym_symbol] = ACTIONS(9),
    [sym_command] = ACTIONS(154),
    [sym_path] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [27] = {
    [sym__gap] = STATE(28),
    [sym__form] = STATE(55),
    [sym_string] = STATE(55),
    [sym_subpath] = STATE(55),
    [sym_subbind] = STATE(45),
    [sym_meta] = STATE(55),
    [sym_list] = STATE(55),
    [sym_scope] = STATE(55),
    [sym_cons] = STATE(55),
    [aux_sym_meta_repeat1] = STATE(28),
    [sym__ws] = ACTIONS(156),
    [sym_comment] = ACTIONS(156),
    [sym_int] = ACTIONS(158),
    [sym_keyword] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_ignore] = ACTIONS(158),
    [sym_null] = ACTIONS(158),
    [sym_bool] = ACTIONS(158),
    [sym_symbol] = ACTIONS(9),
    [sym_command] = ACTIONS(158),
    [sym_path] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [28] = {
    [sym__gap] = STATE(47),
    [sym__form] = STATE(54),
    [sym_string] = STATE(54),
    [sym_subpath] = STATE(54),
    [sym_subbind] = STATE(45),
    [sym_meta] = STATE(54),
    [sym_list] = STATE(54),
    [sym_scope] = STATE(54),
    [sym_cons] = STATE(54),
    [aux_sym_meta_repeat1] = STATE(47),
    [sym__ws] = ACTIONS(124),
    [sym_comment] = ACTIONS(124),
    [sym_int] = ACTIONS(160),
    [sym_keyword] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_ignore] = ACTIONS(160),
    [sym_null] = ACTIONS(160),
    [sym_bool] = ACTIONS(160),
    [sym_symbol] = ACTIONS(9),
    [sym_command] = ACTIONS(160),
    [sym_path] = ACTIONS(160),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [29] = {
    [sym__ws] = ACTIONS(162),
    [sym_comment] = ACTIONS(162),
    [sym_int] = ACTIONS(162),
    [sym_keyword] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym_ignore] = ACTIONS(162),
    [sym_null] = ACTIONS(162),
    [sym_bool] = ACTIONS(162),
    [sym_symbol] = ACTIONS(162),
    [sym_command] = ACTIONS(162),
    [sym_path] = ACTIONS(162),
    [sym_relpath] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(162),
  },
  [30] = {
    [sym__ws] = ACTIONS(164),
    [sym_comment] = ACTIONS(164),
    [sym_int] = ACTIONS(164),
    [sym_keyword] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym_ignore] = ACTIONS(164),
    [sym_null] = ACTIONS(164),
    [sym_bool] = ACTIONS(164),
    [sym_symbol] = ACTIONS(164),
    [sym_command] = ACTIONS(164),
    [sym_path] = ACTIONS(164),
    [sym_relpath] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(170), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [21] = 1,
    ACTIONS(172), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [42] = 1,
    ACTIONS(174), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [63] = 1,
    ACTIONS(176), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [84] = 1,
    ACTIONS(178), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [105] = 1,
    ACTIONS(180), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [126] = 1,
    ACTIONS(182), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [147] = 1,
    ACTIONS(184), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [168] = 1,
    ACTIONS(186), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [189] = 1,
    ACTIONS(188), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [210] = 1,
    ACTIONS(190), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [231] = 1,
    ACTIONS(192), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [252] = 1,
    ACTIONS(194), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [273] = 1,
    ACTIONS(196), 18,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [294] = 4,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      sym_keyword,
    ACTIONS(202), 1,
      sym_relpath,
    ACTIONS(164), 14,
      sym__ws,
      sym_comment,
      sym_int,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [320] = 2,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 16,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      sym_relpath,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [342] = 3,
    ACTIONS(206), 2,
      sym__ws,
      sym_comment,
    STATE(47), 2,
      sym__gap,
      aux_sym_meta_repeat1,
    ACTIONS(209), 13,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [366] = 2,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [387] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [408] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [429] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [450] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [471] = 2,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [492] = 2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [513] = 2,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [534] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [555] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [576] = 2,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [597] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [618] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      anon_sym_DQUOTE,
      sym_ignore,
      sym_null,
      sym_bool,
      sym_symbol,
      sym_command,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [639] = 4,
    ACTIONS(237), 1,
      sym_string_escape,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym_string_token1,
    STATE(61), 1,
      aux_sym_string_repeat1,
  [652] = 4,
    ACTIONS(245), 1,
      sym_string_escape,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_string_token1,
    STATE(64), 1,
      aux_sym_string_repeat1,
  [665] = 4,
    ACTIONS(245), 1,
      sym_string_escape,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_string_token1,
    STATE(65), 1,
      aux_sym_string_repeat1,
  [678] = 4,
    ACTIONS(245), 1,
      sym_string_escape,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token1,
    STATE(61), 1,
      aux_sym_string_repeat1,
  [691] = 4,
    ACTIONS(245), 1,
      sym_string_escape,
    ACTIONS(257), 1,
      aux_sym_string_token1,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat1,
  [704] = 2,
    ACTIONS(263), 1,
      aux_sym_string_token1,
    ACTIONS(261), 2,
      sym_string_escape,
      anon_sym_DQUOTE,
  [712] = 1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 21,
  [SMALL_STATE(33)] = 42,
  [SMALL_STATE(34)] = 63,
  [SMALL_STATE(35)] = 84,
  [SMALL_STATE(36)] = 105,
  [SMALL_STATE(37)] = 126,
  [SMALL_STATE(38)] = 147,
  [SMALL_STATE(39)] = 168,
  [SMALL_STATE(40)] = 189,
  [SMALL_STATE(41)] = 210,
  [SMALL_STATE(42)] = 231,
  [SMALL_STATE(43)] = 252,
  [SMALL_STATE(44)] = 273,
  [SMALL_STATE(45)] = 294,
  [SMALL_STATE(46)] = 320,
  [SMALL_STATE(47)] = 342,
  [SMALL_STATE(48)] = 366,
  [SMALL_STATE(49)] = 387,
  [SMALL_STATE(50)] = 408,
  [SMALL_STATE(51)] = 429,
  [SMALL_STATE(52)] = 450,
  [SMALL_STATE(53)] = 471,
  [SMALL_STATE(54)] = 492,
  [SMALL_STATE(55)] = 513,
  [SMALL_STATE(56)] = 534,
  [SMALL_STATE(57)] = 555,
  [SMALL_STATE(58)] = 576,
  [SMALL_STATE(59)] = 597,
  [SMALL_STATE(60)] = 618,
  [SMALL_STATE(61)] = 639,
  [SMALL_STATE(62)] = 652,
  [SMALL_STATE(63)] = 665,
  [SMALL_STATE(64)] = 678,
  [SMALL_STATE(65)] = 691,
  [SMALL_STATE(66)] = 704,
  [SMALL_STATE(67)] = 712,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(34),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(63),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(30),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(24),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(45),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subbind, 2, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__form, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 9),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 8),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 13),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4, .production_id = 12),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4, .production_id = 11),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 3, .production_id = 9),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subpath, 2, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 2, .production_id = 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 2, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subbind, 2, .production_id = 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(47),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 2, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 8),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 13),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 12),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subpath, 2, .production_id = 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 11),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 3, .production_id = 9),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 7), SHIFT_REPEAT(66),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 7),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 7), SHIFT_REPEAT(61),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bass(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
