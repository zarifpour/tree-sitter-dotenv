#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_EQ = 2,
  anon_sym_DOLLAR = 3,
  sym_identifier = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  sym_integer = 7,
  anon_sym_DQUOTE = 8,
  aux_sym__interpolated_content_token1 = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_string_literal_token1 = 11,
  sym_raw_value = 12,
  sym_source_file = 13,
  sym_variable = 14,
  sym_interpolated_variable = 15,
  sym_value = 16,
  sym_bool = 17,
  sym_string_interpolated = 18,
  sym__interpolated_content = 19,
  sym_string_literal = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_string_interpolated_repeat1 = 22,
  aux_sym_string_literal_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__interpolated_content_token1] = "_interpolated_content_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_raw_value] = "raw_value",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_interpolated_variable] = "interpolated_variable",
  [sym_value] = "value",
  [sym_bool] = "bool",
  [sym_string_interpolated] = "string_interpolated",
  [sym__interpolated_content] = "_interpolated_content",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_interpolated_repeat1] = "string_interpolated_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__interpolated_content_token1] = aux_sym__interpolated_content_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_raw_value] = sym_raw_value,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_interpolated_variable] = sym_interpolated_variable,
  [sym_value] = sym_value,
  [sym_bool] = sym_bool,
  [sym_string_interpolated] = sym_string_interpolated,
  [sym__interpolated_content] = sym__interpolated_content,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_interpolated_repeat1] = aux_sym_string_interpolated_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interpolated_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolated] = {
    .visible = true,
    .named = true,
  },
  [sym__interpolated_content] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 't') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 't') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__interpolated_content_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__interpolated_content_token1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_variable] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
  [2] = {
    [sym_value] = STATE(14),
    [sym_bool] = STATE(13),
    [sym_string_interpolated] = STATE(13),
    [sym_string_literal] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_raw_value] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      aux_sym__interpolated_content_token1,
    STATE(3), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [18] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      aux_sym__interpolated_content_token1,
    STATE(3), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [36] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      aux_sym__interpolated_content_token1,
    STATE(4), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [54] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_comment,
    STATE(7), 2,
      sym_variable,
      aux_sym_source_file_repeat1,
  [68] = 4,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(7), 2,
      sym_variable,
      aux_sym_source_file_repeat1,
  [82] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(9), 1,
      aux_sym_string_literal_repeat1,
  [95] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      aux_sym_string_literal_token1,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
  [108] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
  [117] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
  [130] = 1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [136] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [142] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [148] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [154] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [160] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [166] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_identifier,
  [179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_EQ,
  [186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 18,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 154,
  [SMALL_STATE(17)] = 160,
  [SMALL_STATE(18)] = 166,
  [SMALL_STATE(19)] = 172,
  [SMALL_STATE(20)] = 179,
  [SMALL_STATE(21)] = 186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_variable, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dotenv() {
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
