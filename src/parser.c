#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_content_token1 = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_prefix_number = 11,
  sym_true = 12,
  sym_prefix_true = 13,
  sym_false = 14,
  sym_prefix_false = 15,
  sym_null = 16,
  sym_prefix_null = 17,
  sym_document = 18,
  sym__value = 19,
  sym__prefix_value = 20,
  sym_object = 21,
  sym_prefix_object = 22,
  sym_pair = 23,
  sym_prefix_pair = 24,
  sym_array = 25,
  sym_prefix_array = 26,
  sym_string = 27,
  sym_prefix_string = 28,
  sym_string_content = 29,
  sym_trailing_comma = 30,
  aux_sym_object_repeat1 = 31,
  aux_sym_prefix_object_repeat1 = 32,
  aux_sym_array_repeat1 = 33,
  aux_sym_prefix_array_repeat1 = 34,
  aux_sym_string_content_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_prefix_number] = "prefix_number",
  [sym_true] = "true",
  [sym_prefix_true] = "prefix_true",
  [sym_false] = "false",
  [sym_prefix_false] = "prefix_false",
  [sym_null] = "null",
  [sym_prefix_null] = "prefix_null",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym__prefix_value] = "_prefix_value",
  [sym_object] = "object",
  [sym_prefix_object] = "prefix_object",
  [sym_pair] = "pair",
  [sym_prefix_pair] = "prefix_pair",
  [sym_array] = "array",
  [sym_prefix_array] = "prefix_array",
  [sym_string] = "string",
  [sym_prefix_string] = "prefix_string",
  [sym_string_content] = "string_content",
  [sym_trailing_comma] = "trailing_comma",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_prefix_object_repeat1] = "prefix_object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_prefix_array_repeat1] = "prefix_array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_prefix_number] = sym_prefix_number,
  [sym_true] = sym_true,
  [sym_prefix_true] = sym_prefix_true,
  [sym_false] = sym_false,
  [sym_prefix_false] = sym_prefix_false,
  [sym_null] = sym_null,
  [sym_prefix_null] = sym_prefix_null,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym__prefix_value] = sym__prefix_value,
  [sym_object] = sym_object,
  [sym_prefix_object] = sym_prefix_object,
  [sym_pair] = sym_pair,
  [sym_prefix_pair] = sym_prefix_pair,
  [sym_array] = sym_array,
  [sym_prefix_array] = sym_prefix_array,
  [sym_string] = sym_string,
  [sym_prefix_string] = sym_prefix_string,
  [sym_string_content] = sym_string_content,
  [sym_trailing_comma] = sym_trailing_comma,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_prefix_object_repeat1] = aux_sym_prefix_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_prefix_array_repeat1] = aux_sym_prefix_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_null] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__prefix_value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_trailing_comma] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prefix_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prefix_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 3:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_prefix_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_prefix_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_prefix_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_prefix_true);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_prefix_true);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_prefix_true);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_prefix_false);
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_prefix_false);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_prefix_false);
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_prefix_false);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_prefix_null);
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_prefix_null);
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_prefix_null);
      if (lookahead == 'u') ADVANCE(35);
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
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
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
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_prefix_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_prefix_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_prefix_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_prefix_null] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(58),
    [sym__value] = STATE(54),
    [sym__prefix_value] = STATE(54),
    [sym_object] = STATE(23),
    [sym_prefix_object] = STATE(62),
    [sym_array] = STATE(23),
    [sym_prefix_array] = STATE(62),
    [sym_string] = STATE(23),
    [sym_prefix_string] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_prefix_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_prefix_true] = ACTIONS(11),
    [sym_false] = ACTIONS(9),
    [sym_prefix_false] = ACTIONS(11),
    [sym_null] = ACTIONS(9),
    [sym_prefix_null] = ACTIONS(11),
  },
  [2] = {
    [sym__value] = STATE(19),
    [sym__prefix_value] = STATE(60),
    [sym_object] = STATE(23),
    [sym_prefix_object] = STATE(62),
    [sym_array] = STATE(23),
    [sym_prefix_array] = STATE(62),
    [sym_string] = STATE(23),
    [sym_prefix_string] = STATE(62),
    [aux_sym_prefix_array_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_prefix_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_prefix_true] = ACTIONS(11),
    [sym_false] = ACTIONS(9),
    [sym_prefix_false] = ACTIONS(11),
    [sym_null] = ACTIONS(9),
    [sym_prefix_null] = ACTIONS(11),
  },
  [3] = {
    [sym__value] = STATE(35),
    [sym__prefix_value] = STATE(48),
    [sym_object] = STATE(23),
    [sym_prefix_object] = STATE(62),
    [sym_array] = STATE(23),
    [sym_prefix_array] = STATE(62),
    [sym_string] = STATE(23),
    [sym_prefix_string] = STATE(62),
    [aux_sym_prefix_array_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_prefix_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_prefix_true] = ACTIONS(11),
    [sym_false] = ACTIONS(9),
    [sym_prefix_false] = ACTIONS(11),
    [sym_null] = ACTIONS(9),
    [sym_prefix_null] = ACTIONS(11),
  },
  [4] = {
    [sym__value] = STATE(32),
    [sym__prefix_value] = STATE(53),
    [sym_object] = STATE(23),
    [sym_prefix_object] = STATE(62),
    [sym_array] = STATE(23),
    [sym_prefix_array] = STATE(62),
    [sym_string] = STATE(23),
    [sym_prefix_string] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_prefix_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_prefix_true] = ACTIONS(11),
    [sym_false] = ACTIONS(9),
    [sym_prefix_false] = ACTIONS(11),
    [sym_null] = ACTIONS(9),
    [sym_prefix_null] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym__value,
    STATE(23), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(30), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(33), 4,
      sym_prefix_number,
      sym_prefix_true,
      sym_prefix_false,
      sym_prefix_null,
  [33] = 8,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_prefix_array_repeat1,
    STATE(56), 1,
      sym__value,
    STATE(23), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(33), 4,
      sym_prefix_number,
      sym_prefix_true,
      sym_prefix_false,
      sym_prefix_null,
    ACTIONS(44), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [66] = 7,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym__value,
    STATE(23), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(9), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [93] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 4,
      sym_prefix_number,
      sym_prefix_true,
      sym_prefix_false,
      sym_prefix_null,
    ACTIONS(53), 7,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [112] = 2,
    ACTIONS(33), 4,
      sym_prefix_number,
      sym_prefix_true,
      sym_prefix_false,
      sym_prefix_null,
    ACTIONS(53), 7,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [128] = 6,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym__value,
    STATE(23), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(9), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [152] = 6,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym__value,
    STATE(23), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(9), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [176] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_prefix_object_repeat1,
    STATE(15), 1,
      sym_pair,
    STATE(42), 1,
      sym_string,
    STATE(49), 1,
      sym_prefix_pair,
    STATE(50), 1,
      sym_prefix_string,
  [201] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_prefix_object_repeat1,
    STATE(33), 1,
      sym_pair,
    STATE(42), 1,
      sym_string,
    STATE(50), 1,
      sym_prefix_string,
    STATE(52), 1,
      sym_prefix_pair,
  [220] = 5,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_string_content_repeat1,
    STATE(44), 1,
      sym_string_content,
    ACTIONS(63), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [237] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_object_repeat1,
    STATE(52), 1,
      sym_trailing_comma,
  [253] = 4,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_string_content_repeat1,
    STATE(57), 1,
      sym_string_content,
    ACTIONS(63), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [267] = 4,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(75), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [281] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [289] = 5,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_array_repeat1,
    STATE(48), 1,
      sym_trailing_comma,
  [305] = 1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [313] = 4,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(92), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [327] = 1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [334] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [341] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [348] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_pair,
    STATE(61), 1,
      sym_string,
  [361] = 1,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [368] = 1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [375] = 4,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_pair,
    STATE(61), 1,
      sym_string,
  [388] = 1,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [395] = 4,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_prefix_object_repeat1,
    STATE(47), 1,
      sym_pair,
    STATE(61), 1,
      sym_string,
  [408] = 1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [415] = 1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [421] = 3,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      sym_trailing_comma,
  [431] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_array_repeat1,
  [441] = 3,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym_trailing_comma,
  [451] = 3,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_array_repeat1,
  [461] = 3,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_object_repeat1,
  [471] = 3,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_pair,
    STATE(61), 1,
      sym_string,
  [481] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_object_repeat1,
  [491] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_array_repeat1,
  [501] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_object_repeat1,
  [511] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      anon_sym_COLON,
  [518] = 1,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [523] = 2,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
  [530] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
  [537] = 1,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [542] = 1,
    ACTIONS(152), 1,
      anon_sym_COMMA,
  [546] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [550] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [554] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [558] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [562] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [566] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [570] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [574] = 1,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [578] = 1,
    ACTIONS(162), 1,
      anon_sym_COMMA,
  [582] = 1,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
  [586] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [590] = 1,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
  [594] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
  [598] = 1,
    ACTIONS(166), 1,
      anon_sym_COLON,
  [602] = 1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 152,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 237,
  [SMALL_STATE(16)] = 253,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 289,
  [SMALL_STATE(20)] = 305,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 334,
  [SMALL_STATE(24)] = 341,
  [SMALL_STATE(25)] = 348,
  [SMALL_STATE(26)] = 361,
  [SMALL_STATE(27)] = 368,
  [SMALL_STATE(28)] = 375,
  [SMALL_STATE(29)] = 388,
  [SMALL_STATE(30)] = 395,
  [SMALL_STATE(31)] = 408,
  [SMALL_STATE(32)] = 415,
  [SMALL_STATE(33)] = 421,
  [SMALL_STATE(34)] = 431,
  [SMALL_STATE(35)] = 441,
  [SMALL_STATE(36)] = 451,
  [SMALL_STATE(37)] = 461,
  [SMALL_STATE(38)] = 471,
  [SMALL_STATE(39)] = 481,
  [SMALL_STATE(40)] = 491,
  [SMALL_STATE(41)] = 501,
  [SMALL_STATE(42)] = 511,
  [SMALL_STATE(43)] = 518,
  [SMALL_STATE(44)] = 523,
  [SMALL_STATE(45)] = 530,
  [SMALL_STATE(46)] = 537,
  [SMALL_STATE(47)] = 542,
  [SMALL_STATE(48)] = 546,
  [SMALL_STATE(49)] = 550,
  [SMALL_STATE(50)] = 554,
  [SMALL_STATE(51)] = 558,
  [SMALL_STATE(52)] = 562,
  [SMALL_STATE(53)] = 566,
  [SMALL_STATE(54)] = 570,
  [SMALL_STATE(55)] = 574,
  [SMALL_STATE(56)] = 578,
  [SMALL_STATE(57)] = 582,
  [SMALL_STATE(58)] = 586,
  [SMALL_STATE(59)] = 590,
  [SMALL_STATE(60)] = 594,
  [SMALL_STATE(61)] = 598,
  [SMALL_STATE(62)] = 602,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_array, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_pair, 2, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailing_comma, 1),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2), SHIFT(28),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2), SHIFT(7),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2), SHIFT(16),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2), SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prefix_array_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2), SHIFT_REPEAT(28),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2), SHIFT_REPEAT(16),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2), SHIFT_REPEAT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_array_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_object, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_string, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_object, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_array, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_object_repeat1, 2), SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_object_repeat1, 2), SHIFT_REPEAT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_object, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_array, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(38),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_pair, 1, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_string, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_object_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_object, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_pair, 3, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_array, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_value, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_json_prefix(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
