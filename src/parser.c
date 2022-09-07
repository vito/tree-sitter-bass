#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 46
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum {
  sym__ws = 1,
  sym_comment = 2,
  sym_int = 3,
  sym_keyword = 4,
  sym_string = 5,
  sym_ignore = 6,
  sym_null = 7,
  sym_bool = 8,
  sym_symbol = 9,
  sym_command = 10,
  sym_path = 11,
  sym__subpath = 12,
  anon_sym_CARET = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_source = 20,
  sym__gap = 21,
  sym__form = 22,
  sym_subpath = 23,
  sym_subbind = 24,
  sym_meta = 25,
  sym_list = 26,
  sym_scope = 27,
  sym_cons = 28,
  aux_sym_source_repeat1 = 29,
  aux_sym_meta_repeat1 = 30,
  aux_sym_list_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_int] = "int",
  [sym_keyword] = "keyword",
  [sym_string] = "string",
  [sym_ignore] = "ignore",
  [sym_null] = "null",
  [sym_bool] = "bool",
  [sym_symbol] = "symbol",
  [sym_command] = "command",
  [sym_path] = "path",
  [sym__subpath] = "_subpath",
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
  [sym_subpath] = "subpath",
  [sym_subbind] = "subbind",
  [sym_meta] = "meta",
  [sym_list] = "list",
  [sym_scope] = "scope",
  [sym_cons] = "cons",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_int] = sym_int,
  [sym_keyword] = sym_keyword,
  [sym_string] = sym_string,
  [sym_ignore] = sym_ignore,
  [sym_null] = sym_null,
  [sym_bool] = sym_bool,
  [sym_symbol] = sym_symbol,
  [sym_command] = sym_command,
  [sym_path] = sym_path,
  [sym__subpath] = sym__subpath,
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
  [sym_subpath] = sym_subpath,
  [sym_subbind] = sym_subbind,
  [sym_meta] = sym_meta,
  [sym_list] = sym_list,
  [sym_scope] = sym_scope,
  [sym_cons] = sym_cons,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [sym__subpath] = {
    .visible = false,
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
  field_form = 2,
  field_keyword = 3,
  field_marker = 4,
  field_meta = 5,
  field_open = 6,
  field_subpath = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_form] = "form",
  [field_keyword] = "keyword",
  [field_marker] = "marker",
  [field_meta] = "meta",
  [field_open] = "open",
  [field_subpath] = "subpath",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 2},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 3},
  [10] = {.index = 21, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_form, 0},
    {field_keyword, 1},
  [2] =
    {field_form, 0},
    {field_subpath, 1},
  [4] =
    {field_close, 1},
    {field_open, 0},
  [6] =
    {field_value, 0},
  [7] =
    {field_form, 2},
    {field_marker, 0},
    {field_meta, 1},
  [10] =
    {field_close, 2},
    {field_open, 0},
    {field_value, 1, .inherited = true},
  [13] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [15] =
    {field_form, 3},
    {field_marker, 0},
    {field_meta, 1},
  [18] =
    {field_form, 3},
    {field_marker, 0},
    {field_meta, 2},
  [21] =
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
    ? (c < '('
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
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

static inline bool sym_comment_character_set_2(int32_t c) {
  return (c < '['
    ? (c < ','
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : (c <= ' ' || (c >= '(' && c <= ')')))
      : (c <= ',' || (c < ':'
        ? c == '/'
        : c <= ';')))
    : (c <= '[' || (c < '}'
      ? (c < '{'
        ? (c >= ']' && c <= '^')
        : c <= '{')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_string_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '('
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
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

static inline bool sym_symbol_character_set_1(int32_t c) {
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

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= ')' || (c < '/'
        ? c == ','
        : c <= ';')))
    : (c <= '[' || (c < '}'
      ? (c < '{'
        ? (c >= ']' && c <= '^')
        : c <= '{')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_command_character_set_1(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= ';')))
    : (c <= '[' || (c < '}'
      ? (c < '{'
        ? (c >= ']' && c <= '^')
        : c <= '{')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_path_character_set_1(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= ')' || (c < ':'
        ? c == ','
        : c <= ';')))
    : (c <= '[' || (c < '}'
      ? (c < '{'
        ? (c >= ']' && c <= '^')
        : c <= '{')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ',' ||
          lookahead == 133 ||
          lookahead == 160) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(33);
      if (!sym_command_character_set_1(lookahead)) ADVANCE(32);
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
          lookahead == 'v') ADVANCE(1);
      END_STATE();
    case 4:
      if (!sym_command_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ',' ||
          lookahead == 133 ||
          lookahead == 160) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__ws);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == 133 ||
          lookahead == 160) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(9);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_keyword);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_ignore);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_null);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_bool);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(9);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(29);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(19);
      if (sym_string_character_set_1(lookahead)) ADVANCE(1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(22);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(17);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(26);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(16);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(23);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(27);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(21);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(21);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(24);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(19);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_command);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(33);
      if (!sym_command_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(33);
      if (!sym_path_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__subpath);
      if (lookahead == '/') ADVANCE(35);
      if (!sym_command_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__subpath);
      if (lookahead == '/') ADVANCE(35);
      if (!sym_path_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_ignore] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_command] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
    [sym__subpath] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(57),
    [sym__gap] = STATE(8),
    [sym__form] = STATE(8),
    [sym_subpath] = STATE(8),
    [sym_subbind] = STATE(43),
    [sym_meta] = STATE(8),
    [sym_list] = STATE(8),
    [sym_scope] = STATE(8),
    [sym_cons] = STATE(8),
    [aux_sym_source_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_int] = ACTIONS(5),
    [sym_keyword] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [sym_ignore] = ACTIONS(5),
    [sym_null] = ACTIONS(5),
    [sym_bool] = ACTIONS(5),
    [sym_symbol] = ACTIONS(7),
    [sym_command] = ACTIONS(5),
    [sym_path] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [2] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(17),
    [sym_comment] = ACTIONS(17),
    [sym_int] = ACTIONS(20),
    [sym_keyword] = ACTIONS(20),
    [sym_string] = ACTIONS(20),
    [sym_ignore] = ACTIONS(20),
    [sym_null] = ACTIONS(20),
    [sym_bool] = ACTIONS(20),
    [sym_symbol] = ACTIONS(23),
    [sym_command] = ACTIONS(20),
    [sym_path] = ACTIONS(20),
    [anon_sym_CARET] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(32),
  },
  [3] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [4] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [5] = {
    [sym__gap] = STATE(4),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(4),
    [sym__ws] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [6] = {
    [sym__gap] = STATE(11),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(11),
    [sym__ws] = ACTIONS(62),
    [sym_comment] = ACTIONS(62),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(64),
  },
  [7] = {
    [sym__gap] = STATE(7),
    [sym__form] = STATE(7),
    [sym_subpath] = STATE(7),
    [sym_subbind] = STATE(43),
    [sym_meta] = STATE(7),
    [sym_list] = STATE(7),
    [sym_scope] = STATE(7),
    [sym_cons] = STATE(7),
    [aux_sym_source_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym__ws] = ACTIONS(68),
    [sym_comment] = ACTIONS(68),
    [sym_int] = ACTIONS(68),
    [sym_keyword] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [sym_ignore] = ACTIONS(68),
    [sym_null] = ACTIONS(68),
    [sym_bool] = ACTIONS(68),
    [sym_symbol] = ACTIONS(71),
    [sym_command] = ACTIONS(68),
    [sym_path] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(83),
  },
  [8] = {
    [sym__gap] = STATE(7),
    [sym__form] = STATE(7),
    [sym_subpath] = STATE(7),
    [sym_subbind] = STATE(43),
    [sym_meta] = STATE(7),
    [sym_list] = STATE(7),
    [sym_scope] = STATE(7),
    [sym_cons] = STATE(7),
    [aux_sym_source_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym__ws] = ACTIONS(88),
    [sym_comment] = ACTIONS(88),
    [sym_int] = ACTIONS(88),
    [sym_keyword] = ACTIONS(88),
    [sym_string] = ACTIONS(88),
    [sym_ignore] = ACTIONS(88),
    [sym_null] = ACTIONS(88),
    [sym_bool] = ACTIONS(88),
    [sym_symbol] = ACTIONS(7),
    [sym_command] = ACTIONS(88),
    [sym_path] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [9] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [10] = {
    [sym__gap] = STATE(15),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(15),
    [sym__ws] = ACTIONS(92),
    [sym_comment] = ACTIONS(92),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [11] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(96),
  },
  [12] = {
    [sym__gap] = STATE(9),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(9),
    [sym__ws] = ACTIONS(98),
    [sym_comment] = ACTIONS(98),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [13] = {
    [sym__gap] = STATE(14),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(14),
    [sym__ws] = ACTIONS(102),
    [sym_comment] = ACTIONS(102),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(104),
  },
  [14] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(106),
  },
  [15] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [16] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(31),
    [sym_subpath] = STATE(31),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(31),
    [sym_list] = STATE(31),
    [sym_scope] = STATE(31),
    [sym_cons] = STATE(31),
    [aux_sym_list_repeat1] = STATE(3),
    [sym__ws] = ACTIONS(110),
    [sym_comment] = ACTIONS(110),
    [sym_int] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_ignore] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_bool] = ACTIONS(42),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(42),
    [sym_path] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [17] = {
    [sym__gap] = STATE(44),
    [sym__form] = STATE(24),
    [sym_subpath] = STATE(24),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(24),
    [sym_list] = STATE(24),
    [sym_scope] = STATE(24),
    [sym_cons] = STATE(24),
    [aux_sym_meta_repeat1] = STATE(44),
    [sym__ws] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_int] = ACTIONS(116),
    [sym_keyword] = ACTIONS(116),
    [sym_string] = ACTIONS(116),
    [sym_ignore] = ACTIONS(116),
    [sym_null] = ACTIONS(116),
    [sym_bool] = ACTIONS(116),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(116),
    [sym_path] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [18] = {
    [sym__gap] = STATE(44),
    [sym__form] = STATE(22),
    [sym_subpath] = STATE(22),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(22),
    [sym_list] = STATE(22),
    [sym_scope] = STATE(22),
    [sym_cons] = STATE(22),
    [aux_sym_meta_repeat1] = STATE(44),
    [sym__ws] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_int] = ACTIONS(118),
    [sym_keyword] = ACTIONS(118),
    [sym_string] = ACTIONS(118),
    [sym_ignore] = ACTIONS(118),
    [sym_null] = ACTIONS(118),
    [sym_bool] = ACTIONS(118),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(118),
    [sym_path] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [19] = {
    [sym__gap] = STATE(21),
    [sym__form] = STATE(52),
    [sym_subpath] = STATE(52),
    [sym_subbind] = STATE(43),
    [sym_meta] = STATE(52),
    [sym_list] = STATE(52),
    [sym_scope] = STATE(52),
    [sym_cons] = STATE(52),
    [aux_sym_meta_repeat1] = STATE(21),
    [sym__ws] = ACTIONS(120),
    [sym_comment] = ACTIONS(120),
    [sym_int] = ACTIONS(122),
    [sym_keyword] = ACTIONS(122),
    [sym_string] = ACTIONS(122),
    [sym_ignore] = ACTIONS(122),
    [sym_null] = ACTIONS(122),
    [sym_bool] = ACTIONS(122),
    [sym_symbol] = ACTIONS(7),
    [sym_command] = ACTIONS(122),
    [sym_path] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [20] = {
    [sym__gap] = STATE(17),
    [sym__form] = STATE(27),
    [sym_subpath] = STATE(27),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(27),
    [sym_list] = STATE(27),
    [sym_scope] = STATE(27),
    [sym_cons] = STATE(27),
    [aux_sym_meta_repeat1] = STATE(17),
    [sym__ws] = ACTIONS(124),
    [sym_comment] = ACTIONS(124),
    [sym_int] = ACTIONS(126),
    [sym_keyword] = ACTIONS(126),
    [sym_string] = ACTIONS(126),
    [sym_ignore] = ACTIONS(126),
    [sym_null] = ACTIONS(126),
    [sym_bool] = ACTIONS(126),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(126),
    [sym_path] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [21] = {
    [sym__gap] = STATE(44),
    [sym__form] = STATE(49),
    [sym_subpath] = STATE(49),
    [sym_subbind] = STATE(43),
    [sym_meta] = STATE(49),
    [sym_list] = STATE(49),
    [sym_scope] = STATE(49),
    [sym_cons] = STATE(49),
    [aux_sym_meta_repeat1] = STATE(44),
    [sym__ws] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_int] = ACTIONS(128),
    [sym_keyword] = ACTIONS(128),
    [sym_string] = ACTIONS(128),
    [sym_ignore] = ACTIONS(128),
    [sym_null] = ACTIONS(128),
    [sym_bool] = ACTIONS(128),
    [sym_symbol] = ACTIONS(7),
    [sym_command] = ACTIONS(128),
    [sym_path] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [22] = {
    [sym__gap] = STATE(28),
    [sym__form] = STATE(51),
    [sym_subpath] = STATE(51),
    [sym_subbind] = STATE(43),
    [sym_meta] = STATE(51),
    [sym_list] = STATE(51),
    [sym_scope] = STATE(51),
    [sym_cons] = STATE(51),
    [aux_sym_meta_repeat1] = STATE(28),
    [sym__ws] = ACTIONS(130),
    [sym_comment] = ACTIONS(130),
    [sym_int] = ACTIONS(132),
    [sym_keyword] = ACTIONS(132),
    [sym_string] = ACTIONS(132),
    [sym_ignore] = ACTIONS(132),
    [sym_null] = ACTIONS(132),
    [sym_bool] = ACTIONS(132),
    [sym_symbol] = ACTIONS(7),
    [sym_command] = ACTIONS(132),
    [sym_path] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [23] = {
    [sym__gap] = STATE(44),
    [sym__form] = STATE(33),
    [sym_subpath] = STATE(33),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(33),
    [sym_list] = STATE(33),
    [sym_scope] = STATE(33),
    [sym_cons] = STATE(33),
    [aux_sym_meta_repeat1] = STATE(44),
    [sym__ws] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_int] = ACTIONS(134),
    [sym_keyword] = ACTIONS(134),
    [sym_string] = ACTIONS(134),
    [sym_ignore] = ACTIONS(134),
    [sym_null] = ACTIONS(134),
    [sym_bool] = ACTIONS(134),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(134),
    [sym_path] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [24] = {
    [sym__gap] = STATE(23),
    [sym__form] = STATE(34),
    [sym_subpath] = STATE(34),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(34),
    [sym_list] = STATE(34),
    [sym_scope] = STATE(34),
    [sym_cons] = STATE(34),
    [aux_sym_meta_repeat1] = STATE(23),
    [sym__ws] = ACTIONS(136),
    [sym_comment] = ACTIONS(136),
    [sym_int] = ACTIONS(138),
    [sym_keyword] = ACTIONS(138),
    [sym_string] = ACTIONS(138),
    [sym_ignore] = ACTIONS(138),
    [sym_null] = ACTIONS(138),
    [sym_bool] = ACTIONS(138),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(138),
    [sym_path] = ACTIONS(138),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [25] = {
    [sym__gap] = STATE(18),
    [sym__form] = STATE(19),
    [sym_subpath] = STATE(19),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(19),
    [sym_list] = STATE(19),
    [sym_scope] = STATE(19),
    [sym_cons] = STATE(19),
    [aux_sym_meta_repeat1] = STATE(18),
    [sym__ws] = ACTIONS(140),
    [sym_comment] = ACTIONS(140),
    [sym_int] = ACTIONS(142),
    [sym_keyword] = ACTIONS(142),
    [sym_string] = ACTIONS(142),
    [sym_ignore] = ACTIONS(142),
    [sym_null] = ACTIONS(142),
    [sym_bool] = ACTIONS(142),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(142),
    [sym_path] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [26] = {
    [sym__gap] = STATE(44),
    [sym__form] = STATE(36),
    [sym_subpath] = STATE(36),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(36),
    [sym_list] = STATE(36),
    [sym_scope] = STATE(36),
    [sym_cons] = STATE(36),
    [aux_sym_meta_repeat1] = STATE(44),
    [sym__ws] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_int] = ACTIONS(144),
    [sym_keyword] = ACTIONS(144),
    [sym_string] = ACTIONS(144),
    [sym_ignore] = ACTIONS(144),
    [sym_null] = ACTIONS(144),
    [sym_bool] = ACTIONS(144),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(144),
    [sym_path] = ACTIONS(144),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [27] = {
    [sym__gap] = STATE(26),
    [sym__form] = STATE(40),
    [sym_subpath] = STATE(40),
    [sym_subbind] = STATE(29),
    [sym_meta] = STATE(40),
    [sym_list] = STATE(40),
    [sym_scope] = STATE(40),
    [sym_cons] = STATE(40),
    [aux_sym_meta_repeat1] = STATE(26),
    [sym__ws] = ACTIONS(146),
    [sym_comment] = ACTIONS(146),
    [sym_int] = ACTIONS(148),
    [sym_keyword] = ACTIONS(148),
    [sym_string] = ACTIONS(148),
    [sym_ignore] = ACTIONS(148),
    [sym_null] = ACTIONS(148),
    [sym_bool] = ACTIONS(148),
    [sym_symbol] = ACTIONS(44),
    [sym_command] = ACTIONS(148),
    [sym_path] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
  },
  [28] = {
    [sym__gap] = STATE(44),
    [sym__form] = STATE(47),
    [sym_subpath] = STATE(47),
    [sym_subbind] = STATE(43),
    [sym_meta] = STATE(47),
    [sym_list] = STATE(47),
    [sym_scope] = STATE(47),
    [sym_cons] = STATE(47),
    [aux_sym_meta_repeat1] = STATE(44),
    [sym__ws] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_int] = ACTIONS(150),
    [sym_keyword] = ACTIONS(150),
    [sym_string] = ACTIONS(150),
    [sym_ignore] = ACTIONS(150),
    [sym_null] = ACTIONS(150),
    [sym_bool] = ACTIONS(150),
    [sym_symbol] = ACTIONS(7),
    [sym_command] = ACTIONS(150),
    [sym_path] = ACTIONS(150),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [29] = {
    [sym__ws] = ACTIONS(152),
    [sym_comment] = ACTIONS(152),
    [sym_int] = ACTIONS(152),
    [sym_keyword] = ACTIONS(154),
    [sym_string] = ACTIONS(152),
    [sym_ignore] = ACTIONS(152),
    [sym_null] = ACTIONS(152),
    [sym_bool] = ACTIONS(152),
    [sym_symbol] = ACTIONS(152),
    [sym_command] = ACTIONS(152),
    [sym_path] = ACTIONS(152),
    [sym__subpath] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(152),
  },
  [30] = {
    [sym__ws] = ACTIONS(158),
    [sym_comment] = ACTIONS(158),
    [sym_int] = ACTIONS(158),
    [sym_keyword] = ACTIONS(158),
    [sym_string] = ACTIONS(158),
    [sym_ignore] = ACTIONS(158),
    [sym_null] = ACTIONS(158),
    [sym_bool] = ACTIONS(158),
    [sym_symbol] = ACTIONS(158),
    [sym_command] = ACTIONS(158),
    [sym_path] = ACTIONS(158),
    [sym__subpath] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
  },
  [31] = {
    [sym__ws] = ACTIONS(160),
    [sym_comment] = ACTIONS(160),
    [sym_int] = ACTIONS(160),
    [sym_keyword] = ACTIONS(160),
    [sym_string] = ACTIONS(160),
    [sym_ignore] = ACTIONS(160),
    [sym_null] = ACTIONS(160),
    [sym_bool] = ACTIONS(160),
    [sym_symbol] = ACTIONS(160),
    [sym_command] = ACTIONS(160),
    [sym_path] = ACTIONS(160),
    [anon_sym_CARET] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
  },
  [32] = {
    [sym__ws] = ACTIONS(162),
    [sym_comment] = ACTIONS(162),
    [sym_int] = ACTIONS(162),
    [sym_keyword] = ACTIONS(162),
    [sym_string] = ACTIONS(162),
    [sym_ignore] = ACTIONS(162),
    [sym_null] = ACTIONS(162),
    [sym_bool] = ACTIONS(162),
    [sym_symbol] = ACTIONS(162),
    [sym_command] = ACTIONS(162),
    [sym_path] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(162),
  },
  [33] = {
    [sym__ws] = ACTIONS(164),
    [sym_comment] = ACTIONS(164),
    [sym_int] = ACTIONS(164),
    [sym_keyword] = ACTIONS(164),
    [sym_string] = ACTIONS(164),
    [sym_ignore] = ACTIONS(164),
    [sym_null] = ACTIONS(164),
    [sym_bool] = ACTIONS(164),
    [sym_symbol] = ACTIONS(164),
    [sym_command] = ACTIONS(164),
    [sym_path] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
  },
  [34] = {
    [sym__ws] = ACTIONS(166),
    [sym_comment] = ACTIONS(166),
    [sym_int] = ACTIONS(166),
    [sym_keyword] = ACTIONS(166),
    [sym_string] = ACTIONS(166),
    [sym_ignore] = ACTIONS(166),
    [sym_null] = ACTIONS(166),
    [sym_bool] = ACTIONS(166),
    [sym_symbol] = ACTIONS(166),
    [sym_command] = ACTIONS(166),
    [sym_path] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
  },
  [35] = {
    [sym__ws] = ACTIONS(168),
    [sym_comment] = ACTIONS(168),
    [sym_int] = ACTIONS(168),
    [sym_keyword] = ACTIONS(168),
    [sym_string] = ACTIONS(168),
    [sym_ignore] = ACTIONS(168),
    [sym_null] = ACTIONS(168),
    [sym_bool] = ACTIONS(168),
    [sym_symbol] = ACTIONS(168),
    [sym_command] = ACTIONS(168),
    [sym_path] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
  },
  [36] = {
    [sym__ws] = ACTIONS(170),
    [sym_comment] = ACTIONS(170),
    [sym_int] = ACTIONS(170),
    [sym_keyword] = ACTIONS(170),
    [sym_string] = ACTIONS(170),
    [sym_ignore] = ACTIONS(170),
    [sym_null] = ACTIONS(170),
    [sym_bool] = ACTIONS(170),
    [sym_symbol] = ACTIONS(170),
    [sym_command] = ACTIONS(170),
    [sym_path] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_RBRACK] = ACTIONS(170),
  },
  [37] = {
    [sym__ws] = ACTIONS(172),
    [sym_comment] = ACTIONS(172),
    [sym_int] = ACTIONS(172),
    [sym_keyword] = ACTIONS(172),
    [sym_string] = ACTIONS(172),
    [sym_ignore] = ACTIONS(172),
    [sym_null] = ACTIONS(172),
    [sym_bool] = ACTIONS(172),
    [sym_symbol] = ACTIONS(172),
    [sym_command] = ACTIONS(172),
    [sym_path] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(172),
  },
  [38] = {
    [sym__ws] = ACTIONS(174),
    [sym_comment] = ACTIONS(174),
    [sym_int] = ACTIONS(174),
    [sym_keyword] = ACTIONS(174),
    [sym_string] = ACTIONS(174),
    [sym_ignore] = ACTIONS(174),
    [sym_null] = ACTIONS(174),
    [sym_bool] = ACTIONS(174),
    [sym_symbol] = ACTIONS(174),
    [sym_command] = ACTIONS(174),
    [sym_path] = ACTIONS(174),
    [anon_sym_CARET] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(174),
  },
  [39] = {
    [sym__ws] = ACTIONS(176),
    [sym_comment] = ACTIONS(176),
    [sym_int] = ACTIONS(176),
    [sym_keyword] = ACTIONS(176),
    [sym_string] = ACTIONS(176),
    [sym_ignore] = ACTIONS(176),
    [sym_null] = ACTIONS(176),
    [sym_bool] = ACTIONS(176),
    [sym_symbol] = ACTIONS(176),
    [sym_command] = ACTIONS(176),
    [sym_path] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(176),
  },
  [40] = {
    [sym__ws] = ACTIONS(178),
    [sym_comment] = ACTIONS(178),
    [sym_int] = ACTIONS(178),
    [sym_keyword] = ACTIONS(178),
    [sym_string] = ACTIONS(178),
    [sym_ignore] = ACTIONS(178),
    [sym_null] = ACTIONS(178),
    [sym_bool] = ACTIONS(178),
    [sym_symbol] = ACTIONS(178),
    [sym_command] = ACTIONS(178),
    [sym_path] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(178),
  },
  [41] = {
    [sym__ws] = ACTIONS(180),
    [sym_comment] = ACTIONS(180),
    [sym_int] = ACTIONS(180),
    [sym_keyword] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [sym_ignore] = ACTIONS(180),
    [sym_null] = ACTIONS(180),
    [sym_bool] = ACTIONS(180),
    [sym_symbol] = ACTIONS(180),
    [sym_command] = ACTIONS(180),
    [sym_path] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_RBRACK] = ACTIONS(180),
  },
  [42] = {
    [sym__ws] = ACTIONS(182),
    [sym_comment] = ACTIONS(182),
    [sym_int] = ACTIONS(182),
    [sym_keyword] = ACTIONS(182),
    [sym_string] = ACTIONS(182),
    [sym_ignore] = ACTIONS(182),
    [sym_null] = ACTIONS(182),
    [sym_bool] = ACTIONS(182),
    [sym_symbol] = ACTIONS(182),
    [sym_command] = ACTIONS(182),
    [sym_path] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym__ws] = ACTIONS(152),
    [sym_comment] = ACTIONS(152),
    [sym_int] = ACTIONS(152),
    [sym_keyword] = ACTIONS(186),
    [sym_string] = ACTIONS(152),
    [sym_ignore] = ACTIONS(152),
    [sym_null] = ACTIONS(152),
    [sym_bool] = ACTIONS(152),
    [sym_symbol] = ACTIONS(152),
    [sym_command] = ACTIONS(152),
    [sym_path] = ACTIONS(152),
    [sym__subpath] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
  },
  [44] = {
    [sym__gap] = STATE(44),
    [aux_sym_meta_repeat1] = STATE(44),
    [sym__ws] = ACTIONS(190),
    [sym_comment] = ACTIONS(190),
    [sym_int] = ACTIONS(193),
    [sym_keyword] = ACTIONS(193),
    [sym_string] = ACTIONS(193),
    [sym_ignore] = ACTIONS(193),
    [sym_null] = ACTIONS(193),
    [sym_bool] = ACTIONS(193),
    [sym_symbol] = ACTIONS(193),
    [sym_command] = ACTIONS(193),
    [sym_path] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym__ws] = ACTIONS(158),
    [sym_comment] = ACTIONS(158),
    [sym_int] = ACTIONS(158),
    [sym_keyword] = ACTIONS(158),
    [sym_string] = ACTIONS(158),
    [sym_ignore] = ACTIONS(158),
    [sym_null] = ACTIONS(158),
    [sym_bool] = ACTIONS(158),
    [sym_symbol] = ACTIONS(158),
    [sym_command] = ACTIONS(158),
    [sym_path] = ACTIONS(158),
    [sym__subpath] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [21] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [42] = 2,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [63] = 2,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [84] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [105] = 2,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [126] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [147] = 2,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [168] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [189] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [210] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 15,
      sym__ws,
      sym_comment,
      sym_int,
      sym_keyword,
      sym_string,
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
  [231] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(46)] = 0,
  [SMALL_STATE(47)] = 21,
  [SMALL_STATE(48)] = 42,
  [SMALL_STATE(49)] = 63,
  [SMALL_STATE(50)] = 84,
  [SMALL_STATE(51)] = 105,
  [SMALL_STATE(52)] = 126,
  [SMALL_STATE(53)] = 147,
  [SMALL_STATE(54)] = 168,
  [SMALL_STATE(55)] = 189,
  [SMALL_STATE(56)] = 210,
  [SMALL_STATE(57)] = 231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(31),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(29),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(20),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 7),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(43),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__form, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subbind, 2, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, .production_id = 6),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 10),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4, .production_id = 9),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subpath, 2, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4, .production_id = 8),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 2, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 2, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 3, .production_id = 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(44),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subbind, 2, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, .production_id = 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 10),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 3, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 9),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 2, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subpath, 2, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
