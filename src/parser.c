#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SubClassOf_COLON = 1,
  anon_sym_EquivalentTo_COLON = 2,
  anon_sym_COMMA = 3,
  anon_sym_DisjointWith_COLON = 4,
  anon_sym_DisjointUnionOf_COLON = 5,
  anon_sym_or = 6,
  anon_sym_and = 7,
  anon_sym_that = 8,
  anon_sym_some = 9,
  anon_sym_only = 10,
  anon_sym_value = 11,
  anon_sym_Self = 12,
  anon_sym_min = 13,
  anon_sym_max = 14,
  anon_sym_exactly = 15,
  anon_sym_not = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_inverse = 21,
  sym_IRI = 22,
  sym_nonNegativeInteger = 23,
  sym_expression = 24,
  sym_classExpressionAxiom = 25,
  sym_subClassOf = 26,
  sym_equivalentTo = 27,
  sym_disjointWith = 28,
  sym_disjointUnionOf = 29,
  sym_description = 30,
  sym_conjunction = 31,
  sym_restriction = 32,
  sym_objectPropertyExistential = 33,
  sym_objectPropertyUniversal = 34,
  sym_objectPropertyValue = 35,
  sym_objectPropertySelf = 36,
  sym_objectMinCardinality = 37,
  sym_qualifiedObjectMinCardinality = 38,
  sym_unqualifiedObjectMinCardinality = 39,
  sym_objectMaxCardinality = 40,
  sym_qualifiedObjectMaxCardinality = 41,
  sym_unqualifiedObjectMaxCardinality = 42,
  sym_objectExactCardinality = 43,
  sym_qualifiedObjectExactCardinality = 44,
  sym_unqualifiedObjectExactCardinality = 45,
  sym_restrictionHelper = 46,
  sym_restrictionNegation = 47,
  sym_primaryHelper = 48,
  sym_primary = 49,
  sym_primaryNegation = 50,
  sym_atomic = 51,
  sym_objectPropertyExpression = 52,
  sym_inverseObjectProperty = 53,
  sym_classIRI = 54,
  sym_individual = 55,
  aux_sym_equivalentTo_repeat1 = 56,
  aux_sym_description_repeat1 = 57,
  aux_sym_conjunction_repeat1 = 58,
  aux_sym_conjunction_repeat2 = 59,
  aux_sym_atomic_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SubClassOf_COLON] = "SubClassOf:",
  [anon_sym_EquivalentTo_COLON] = "EquivalentTo:",
  [anon_sym_COMMA] = ",",
  [anon_sym_DisjointWith_COLON] = "DisjointWith:",
  [anon_sym_DisjointUnionOf_COLON] = "DisjointUnionOf:",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_that] = "that",
  [anon_sym_some] = "some",
  [anon_sym_only] = "only",
  [anon_sym_value] = "value",
  [anon_sym_Self] = "Self",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_exactly] = "exactly",
  [anon_sym_not] = "not",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_inverse] = "inverse",
  [sym_IRI] = "IRI",
  [sym_nonNegativeInteger] = "nonNegativeInteger",
  [sym_expression] = "expression",
  [sym_classExpressionAxiom] = "classExpressionAxiom",
  [sym_subClassOf] = "subClassOf",
  [sym_equivalentTo] = "equivalentTo",
  [sym_disjointWith] = "disjointWith",
  [sym_disjointUnionOf] = "disjointUnionOf",
  [sym_description] = "description",
  [sym_conjunction] = "conjunction",
  [sym_restriction] = "restriction",
  [sym_objectPropertyExistential] = "objectPropertyExistential",
  [sym_objectPropertyUniversal] = "objectPropertyUniversal",
  [sym_objectPropertyValue] = "objectPropertyValue",
  [sym_objectPropertySelf] = "objectPropertySelf",
  [sym_objectMinCardinality] = "objectMinCardinality",
  [sym_qualifiedObjectMinCardinality] = "qualifiedObjectMinCardinality",
  [sym_unqualifiedObjectMinCardinality] = "unqualifiedObjectMinCardinality",
  [sym_objectMaxCardinality] = "objectMaxCardinality",
  [sym_qualifiedObjectMaxCardinality] = "qualifiedObjectMaxCardinality",
  [sym_unqualifiedObjectMaxCardinality] = "unqualifiedObjectMaxCardinality",
  [sym_objectExactCardinality] = "objectExactCardinality",
  [sym_qualifiedObjectExactCardinality] = "qualifiedObjectExactCardinality",
  [sym_unqualifiedObjectExactCardinality] = "unqualifiedObjectExactCardinality",
  [sym_restrictionHelper] = "restrictionHelper",
  [sym_restrictionNegation] = "restrictionNegation",
  [sym_primaryHelper] = "primaryHelper",
  [sym_primary] = "primary",
  [sym_primaryNegation] = "primaryNegation",
  [sym_atomic] = "atomic",
  [sym_objectPropertyExpression] = "objectPropertyExpression",
  [sym_inverseObjectProperty] = "inverseObjectProperty",
  [sym_classIRI] = "classIRI",
  [sym_individual] = "individual",
  [aux_sym_equivalentTo_repeat1] = "equivalentTo_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_atomic_repeat1] = "atomic_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SubClassOf_COLON] = anon_sym_SubClassOf_COLON,
  [anon_sym_EquivalentTo_COLON] = anon_sym_EquivalentTo_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DisjointWith_COLON] = anon_sym_DisjointWith_COLON,
  [anon_sym_DisjointUnionOf_COLON] = anon_sym_DisjointUnionOf_COLON,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_Self] = anon_sym_Self,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_inverse] = anon_sym_inverse,
  [sym_IRI] = sym_IRI,
  [sym_nonNegativeInteger] = sym_nonNegativeInteger,
  [sym_expression] = sym_expression,
  [sym_classExpressionAxiom] = sym_classExpressionAxiom,
  [sym_subClassOf] = sym_subClassOf,
  [sym_equivalentTo] = sym_equivalentTo,
  [sym_disjointWith] = sym_disjointWith,
  [sym_disjointUnionOf] = sym_disjointUnionOf,
  [sym_description] = sym_description,
  [sym_conjunction] = sym_conjunction,
  [sym_restriction] = sym_restriction,
  [sym_objectPropertyExistential] = sym_objectPropertyExistential,
  [sym_objectPropertyUniversal] = sym_objectPropertyUniversal,
  [sym_objectPropertyValue] = sym_objectPropertyValue,
  [sym_objectPropertySelf] = sym_objectPropertySelf,
  [sym_objectMinCardinality] = sym_objectMinCardinality,
  [sym_qualifiedObjectMinCardinality] = sym_qualifiedObjectMinCardinality,
  [sym_unqualifiedObjectMinCardinality] = sym_unqualifiedObjectMinCardinality,
  [sym_objectMaxCardinality] = sym_objectMaxCardinality,
  [sym_qualifiedObjectMaxCardinality] = sym_qualifiedObjectMaxCardinality,
  [sym_unqualifiedObjectMaxCardinality] = sym_unqualifiedObjectMaxCardinality,
  [sym_objectExactCardinality] = sym_objectExactCardinality,
  [sym_qualifiedObjectExactCardinality] = sym_qualifiedObjectExactCardinality,
  [sym_unqualifiedObjectExactCardinality] = sym_unqualifiedObjectExactCardinality,
  [sym_restrictionHelper] = sym_restrictionHelper,
  [sym_restrictionNegation] = sym_restrictionNegation,
  [sym_primaryHelper] = sym_primaryHelper,
  [sym_primary] = sym_primary,
  [sym_primaryNegation] = sym_primaryNegation,
  [sym_atomic] = sym_atomic,
  [sym_objectPropertyExpression] = sym_objectPropertyExpression,
  [sym_inverseObjectProperty] = sym_inverseObjectProperty,
  [sym_classIRI] = sym_classIRI,
  [sym_individual] = sym_individual,
  [aux_sym_equivalentTo_repeat1] = aux_sym_equivalentTo_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_atomic_repeat1] = aux_sym_atomic_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SubClassOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EquivalentTo_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DisjointWith_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DisjointUnionOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
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
  [anon_sym_inverse] = {
    .visible = true,
    .named = false,
  },
  [sym_IRI] = {
    .visible = true,
    .named = true,
  },
  [sym_nonNegativeInteger] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_classExpressionAxiom] = {
    .visible = true,
    .named = true,
  },
  [sym_subClassOf] = {
    .visible = true,
    .named = true,
  },
  [sym_equivalentTo] = {
    .visible = true,
    .named = true,
  },
  [sym_disjointWith] = {
    .visible = true,
    .named = true,
  },
  [sym_disjointUnionOf] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_objectPropertyExistential] = {
    .visible = true,
    .named = true,
  },
  [sym_objectPropertyUniversal] = {
    .visible = true,
    .named = true,
  },
  [sym_objectPropertyValue] = {
    .visible = true,
    .named = true,
  },
  [sym_objectPropertySelf] = {
    .visible = true,
    .named = true,
  },
  [sym_objectMinCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifiedObjectMinCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualifiedObjectMinCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_objectMaxCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifiedObjectMaxCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualifiedObjectMaxCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_objectExactCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifiedObjectExactCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualifiedObjectExactCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_restrictionHelper] = {
    .visible = true,
    .named = true,
  },
  [sym_restrictionNegation] = {
    .visible = true,
    .named = true,
  },
  [sym_primaryHelper] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_primaryNegation] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic] = {
    .visible = true,
    .named = true,
  },
  [sym_objectPropertyExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_inverseObjectProperty] = {
    .visible = true,
    .named = true,
  },
  [sym_classIRI] = {
    .visible = true,
    .named = true,
  },
  [sym_individual] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_equivalentTo_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atomic_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(32);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == 'W') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(3);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'j') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'q') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DisjointUnionOf_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'd') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'r') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 's') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_IRI);
      if (lookahead == 'v') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_IRI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_nonNegativeInteger);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 79},
  [11] = {.lex_state = 79},
  [12] = {.lex_state = 79},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 79},
  [15] = {.lex_state = 79},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
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
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 78},
  [95] = {.lex_state = 78},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SubClassOf_COLON] = ACTIONS(1),
    [anon_sym_EquivalentTo_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DisjointWith_COLON] = ACTIONS(1),
    [anon_sym_DisjointUnionOf_COLON] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_Self] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_inverse] = ACTIONS(1),
    [sym_nonNegativeInteger] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(104),
    [sym_classExpressionAxiom] = STATE(101),
    [sym_subClassOf] = STATE(100),
    [sym_equivalentTo] = STATE(100),
    [sym_disjointWith] = STATE(100),
    [sym_disjointUnionOf] = STATE(100),
    [sym_classIRI] = STATE(78),
    [sym_IRI] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(47), 1,
      sym_primaryHelper,
    STATE(66), 1,
      sym_classIRI,
    STATE(73), 1,
      sym_conjunction,
    STATE(90), 1,
      sym_description,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [63] = 17,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(47), 1,
      sym_primaryHelper,
    STATE(66), 1,
      sym_classIRI,
    STATE(73), 1,
      sym_conjunction,
    STATE(91), 1,
      sym_description,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [126] = 17,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(47), 1,
      sym_primaryHelper,
    STATE(66), 1,
      sym_classIRI,
    STATE(73), 1,
      sym_conjunction,
    STATE(88), 1,
      sym_description,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [189] = 17,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    ACTIONS(15), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(42), 1,
      sym_classIRI,
    STATE(43), 1,
      sym_primaryHelper,
    STATE(80), 1,
      sym_conjunction,
    STATE(93), 1,
      sym_description,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [252] = 17,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    ACTIONS(15), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(42), 1,
      sym_classIRI,
    STATE(43), 1,
      sym_primaryHelper,
    STATE(80), 1,
      sym_conjunction,
    STATE(102), 1,
      sym_description,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [315] = 17,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(47), 1,
      sym_primaryHelper,
    STATE(66), 1,
      sym_classIRI,
    STATE(73), 1,
      sym_conjunction,
    STATE(97), 1,
      sym_description,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [378] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(40), 1,
      sym_classIRI,
    STATE(56), 1,
      sym_primary,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(19), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [436] = 16,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    ACTIONS(15), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(42), 1,
      sym_classIRI,
    STATE(43), 1,
      sym_primaryHelper,
    STATE(76), 1,
      sym_conjunction,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [496] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(40), 1,
      sym_classIRI,
    STATE(56), 1,
      sym_primary,
    ACTIONS(17), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(19), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [554] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(40), 1,
      sym_classIRI,
    STATE(57), 1,
      sym_primary,
    ACTIONS(21), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [612] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(40), 1,
      sym_classIRI,
    STATE(63), 1,
      sym_primary,
    ACTIONS(25), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [670] = 16,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(47), 1,
      sym_primaryHelper,
    STATE(66), 1,
      sym_classIRI,
    STATE(76), 1,
      sym_conjunction,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [730] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(40), 1,
      sym_classIRI,
    STATE(57), 1,
      sym_primary,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(23), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [788] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(40), 1,
      sym_classIRI,
    STATE(63), 1,
      sym_primary,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(27), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [846] = 15,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(40), 1,
      sym_classIRI,
    STATE(58), 1,
      sym_primaryHelper,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [903] = 15,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(40), 1,
      sym_classIRI,
    STATE(62), 1,
      sym_primaryHelper,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [960] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    ACTIONS(15), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(40), 1,
      sym_classIRI,
    STATE(62), 1,
      sym_primaryHelper,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1017] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    ACTIONS(15), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(40), 1,
      sym_classIRI,
    STATE(61), 1,
      sym_primaryHelper,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1074] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    ACTIONS(15), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(38), 1,
      sym_primaryHelper,
    STATE(40), 1,
      sym_classIRI,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1131] = 15,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(40), 1,
      sym_classIRI,
    STATE(61), 1,
      sym_primaryHelper,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1188] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    ACTIONS(15), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(40), 1,
      sym_classIRI,
    STATE(58), 1,
      sym_primaryHelper,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1245] = 15,
    ACTIONS(5), 1,
      anon_sym_not,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_primaryHelper,
    STATE(40), 1,
      sym_classIRI,
    STATE(52), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1302] = 13,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(39), 1,
      sym_primary,
    STATE(40), 1,
      sym_classIRI,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1352] = 13,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(13), 1,
      sym_IRI,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(39), 1,
      sym_primary,
    STATE(40), 1,
      sym_classIRI,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(69), 2,
      sym_restriction,
      sym_atomic,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1402] = 11,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(37), 1,
      sym_restrictionHelper,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(67), 2,
      sym_restriction,
      sym_restrictionNegation,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1446] = 11,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(68), 1,
      sym_restrictionHelper,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(67), 2,
      sym_restriction,
      sym_restrictionNegation,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1490] = 11,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(31), 1,
      sym_IRI,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(37), 1,
      sym_restrictionHelper,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(67), 2,
      sym_restriction,
      sym_restrictionNegation,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1534] = 11,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(31), 1,
      sym_IRI,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(41), 1,
      sym_restrictionHelper,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(67), 2,
      sym_restriction,
      sym_restrictionNegation,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1578] = 9,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(31), 1,
      sym_IRI,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(54), 1,
      sym_restriction,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1615] = 9,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(31), 1,
      sym_IRI,
    STATE(33), 1,
      sym_objectPropertyExpression,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(54), 1,
      sym_restriction,
    STATE(60), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(64), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(71), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(70), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1652] = 2,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_that,
      anon_sym_RPAREN,
    ACTIONS(37), 7,
      anon_sym_some,
      anon_sym_only,
      anon_sym_value,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [1670] = 7,
    ACTIONS(39), 1,
      anon_sym_some,
    ACTIONS(41), 1,
      anon_sym_only,
    ACTIONS(43), 1,
      anon_sym_value,
    ACTIONS(45), 1,
      anon_sym_Self,
    ACTIONS(47), 1,
      anon_sym_min,
    ACTIONS(49), 1,
      anon_sym_max,
    ACTIONS(51), 1,
      anon_sym_exactly,
  [1692] = 1,
    ACTIONS(37), 7,
      anon_sym_some,
      anon_sym_only,
      anon_sym_value,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [1702] = 7,
    ACTIONS(45), 1,
      anon_sym_Self,
    ACTIONS(53), 1,
      anon_sym_some,
    ACTIONS(55), 1,
      anon_sym_only,
    ACTIONS(57), 1,
      anon_sym_value,
    ACTIONS(59), 1,
      anon_sym_min,
    ACTIONS(61), 1,
      anon_sym_max,
    ACTIONS(63), 1,
      anon_sym_exactly,
  [1724] = 1,
    ACTIONS(65), 7,
      anon_sym_some,
      anon_sym_only,
      anon_sym_value,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [1734] = 1,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1742] = 1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1750] = 1,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1758] = 1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1766] = 3,
    ACTIONS(77), 1,
      anon_sym_and,
    STATE(49), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(75), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [1778] = 2,
    ACTIONS(79), 1,
      anon_sym_that,
    ACTIONS(73), 4,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1788] = 3,
    ACTIONS(83), 1,
      anon_sym_and,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(81), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [1800] = 3,
    ACTIONS(85), 1,
      anon_sym_and,
    STATE(44), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [1812] = 3,
    ACTIONS(90), 1,
      anon_sym_and,
    STATE(59), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [1824] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1832] = 3,
    ACTIONS(90), 1,
      anon_sym_and,
    STATE(45), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [1844] = 3,
    ACTIONS(94), 1,
      anon_sym_and,
    STATE(48), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(67), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [1856] = 3,
    ACTIONS(77), 1,
      anon_sym_and,
    STATE(48), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(97), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [1868] = 3,
    ACTIONS(101), 1,
      anon_sym_and,
    STATE(50), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(99), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [1880] = 3,
    ACTIONS(104), 1,
      anon_sym_and,
    STATE(44), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [1892] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1900] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1908] = 1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1916] = 3,
    ACTIONS(83), 1,
      anon_sym_and,
    STATE(50), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [1928] = 1,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1936] = 1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1944] = 1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1952] = 3,
    ACTIONS(116), 1,
      anon_sym_and,
    STATE(59), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [1964] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1972] = 1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1980] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1988] = 1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [1996] = 1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2004] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2012] = 2,
    ACTIONS(131), 1,
      anon_sym_that,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
  [2022] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2030] = 3,
    ACTIONS(104), 1,
      anon_sym_and,
    STATE(51), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [2042] = 1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2050] = 1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2058] = 1,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2066] = 3,
    ACTIONS(143), 1,
      anon_sym_or,
    STATE(79), 1,
      aux_sym_description_repeat1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2077] = 3,
    ACTIONS(147), 1,
      anon_sym_or,
    STATE(81), 1,
      aux_sym_description_repeat1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [2088] = 1,
    ACTIONS(35), 4,
      anon_sym_SubClassOf_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
  [2095] = 3,
    ACTIONS(151), 1,
      anon_sym_or,
    STATE(75), 1,
      aux_sym_description_repeat1,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [2106] = 1,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [2113] = 4,
    ACTIONS(11), 1,
      anon_sym_inverse,
    ACTIONS(31), 1,
      sym_IRI,
    STATE(34), 1,
      sym_inverseObjectProperty,
    STATE(36), 1,
      sym_objectPropertyExpression,
  [2126] = 4,
    ACTIONS(154), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(156), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(158), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(160), 1,
      anon_sym_DisjointUnionOf_COLON,
  [2139] = 3,
    ACTIONS(162), 1,
      anon_sym_or,
    STATE(79), 1,
      aux_sym_description_repeat1,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2150] = 3,
    ACTIONS(143), 1,
      anon_sym_or,
    STATE(72), 1,
      aux_sym_description_repeat1,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2161] = 3,
    ACTIONS(147), 1,
      anon_sym_or,
    STATE(75), 1,
      aux_sym_description_repeat1,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [2172] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_atomic_repeat1,
  [2182] = 3,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_equivalentTo_repeat1,
  [2192] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_atomic_repeat1,
  [2202] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_atomic_repeat1,
  [2212] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      aux_sym_equivalentTo_repeat1,
  [2222] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      aux_sym_equivalentTo_repeat1,
  [2232] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      aux_sym_equivalentTo_repeat1,
  [2242] = 3,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_equivalentTo_repeat1,
  [2252] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      aux_sym_equivalentTo_repeat1,
  [2262] = 1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [2267] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2272] = 2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_equivalentTo_repeat1,
  [2279] = 2,
    ACTIONS(193), 1,
      sym_IRI,
    STATE(85), 1,
      sym_individual,
  [2286] = 2,
    ACTIONS(193), 1,
      sym_IRI,
    STATE(92), 1,
      sym_individual,
  [2293] = 1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2298] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [2302] = 1,
    ACTIONS(199), 1,
      sym_nonNegativeInteger,
  [2306] = 1,
    ACTIONS(201), 1,
      sym_nonNegativeInteger,
  [2310] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [2314] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [2318] = 1,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
  [2322] = 1,
    ACTIONS(207), 1,
      sym_nonNegativeInteger,
  [2326] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [2330] = 1,
    ACTIONS(211), 1,
      sym_nonNegativeInteger,
  [2334] = 1,
    ACTIONS(213), 1,
      sym_nonNegativeInteger,
  [2338] = 1,
    ACTIONS(215), 1,
      sym_nonNegativeInteger,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 252,
  [SMALL_STATE(7)] = 315,
  [SMALL_STATE(8)] = 378,
  [SMALL_STATE(9)] = 436,
  [SMALL_STATE(10)] = 496,
  [SMALL_STATE(11)] = 554,
  [SMALL_STATE(12)] = 612,
  [SMALL_STATE(13)] = 670,
  [SMALL_STATE(14)] = 730,
  [SMALL_STATE(15)] = 788,
  [SMALL_STATE(16)] = 846,
  [SMALL_STATE(17)] = 903,
  [SMALL_STATE(18)] = 960,
  [SMALL_STATE(19)] = 1017,
  [SMALL_STATE(20)] = 1074,
  [SMALL_STATE(21)] = 1131,
  [SMALL_STATE(22)] = 1188,
  [SMALL_STATE(23)] = 1245,
  [SMALL_STATE(24)] = 1302,
  [SMALL_STATE(25)] = 1352,
  [SMALL_STATE(26)] = 1402,
  [SMALL_STATE(27)] = 1446,
  [SMALL_STATE(28)] = 1490,
  [SMALL_STATE(29)] = 1534,
  [SMALL_STATE(30)] = 1578,
  [SMALL_STATE(31)] = 1615,
  [SMALL_STATE(32)] = 1652,
  [SMALL_STATE(33)] = 1670,
  [SMALL_STATE(34)] = 1692,
  [SMALL_STATE(35)] = 1702,
  [SMALL_STATE(36)] = 1724,
  [SMALL_STATE(37)] = 1734,
  [SMALL_STATE(38)] = 1742,
  [SMALL_STATE(39)] = 1750,
  [SMALL_STATE(40)] = 1758,
  [SMALL_STATE(41)] = 1766,
  [SMALL_STATE(42)] = 1778,
  [SMALL_STATE(43)] = 1788,
  [SMALL_STATE(44)] = 1800,
  [SMALL_STATE(45)] = 1812,
  [SMALL_STATE(46)] = 1824,
  [SMALL_STATE(47)] = 1832,
  [SMALL_STATE(48)] = 1844,
  [SMALL_STATE(49)] = 1856,
  [SMALL_STATE(50)] = 1868,
  [SMALL_STATE(51)] = 1880,
  [SMALL_STATE(52)] = 1892,
  [SMALL_STATE(53)] = 1900,
  [SMALL_STATE(54)] = 1908,
  [SMALL_STATE(55)] = 1916,
  [SMALL_STATE(56)] = 1928,
  [SMALL_STATE(57)] = 1936,
  [SMALL_STATE(58)] = 1944,
  [SMALL_STATE(59)] = 1952,
  [SMALL_STATE(60)] = 1964,
  [SMALL_STATE(61)] = 1972,
  [SMALL_STATE(62)] = 1980,
  [SMALL_STATE(63)] = 1988,
  [SMALL_STATE(64)] = 1996,
  [SMALL_STATE(65)] = 2004,
  [SMALL_STATE(66)] = 2012,
  [SMALL_STATE(67)] = 2022,
  [SMALL_STATE(68)] = 2030,
  [SMALL_STATE(69)] = 2042,
  [SMALL_STATE(70)] = 2050,
  [SMALL_STATE(71)] = 2058,
  [SMALL_STATE(72)] = 2066,
  [SMALL_STATE(73)] = 2077,
  [SMALL_STATE(74)] = 2088,
  [SMALL_STATE(75)] = 2095,
  [SMALL_STATE(76)] = 2106,
  [SMALL_STATE(77)] = 2113,
  [SMALL_STATE(78)] = 2126,
  [SMALL_STATE(79)] = 2139,
  [SMALL_STATE(80)] = 2150,
  [SMALL_STATE(81)] = 2161,
  [SMALL_STATE(82)] = 2172,
  [SMALL_STATE(83)] = 2182,
  [SMALL_STATE(84)] = 2192,
  [SMALL_STATE(85)] = 2202,
  [SMALL_STATE(86)] = 2212,
  [SMALL_STATE(87)] = 2222,
  [SMALL_STATE(88)] = 2232,
  [SMALL_STATE(89)] = 2242,
  [SMALL_STATE(90)] = 2252,
  [SMALL_STATE(91)] = 2262,
  [SMALL_STATE(92)] = 2267,
  [SMALL_STATE(93)] = 2272,
  [SMALL_STATE(94)] = 2279,
  [SMALL_STATE(95)] = 2286,
  [SMALL_STATE(96)] = 2293,
  [SMALL_STATE(97)] = 2298,
  [SMALL_STATE(98)] = 2302,
  [SMALL_STATE(99)] = 2306,
  [SMALL_STATE(100)] = 2310,
  [SMALL_STATE(101)] = 2314,
  [SMALL_STATE(102)] = 2318,
  [SMALL_STATE(103)] = 2322,
  [SMALL_STATE(104)] = 2326,
  [SMALL_STATE(105)] = 2330,
  [SMALL_STATE(106)] = 2334,
  [SMALL_STATE(107)] = 2338,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualifiedObjectExactCardinality, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualifiedObjectExactCardinality, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualifiedObjectMaxCardinality, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualifiedObjectMaxCardinality, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualifiedObjectMinCardinality, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualifiedObjectMinCardinality, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classIRI, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertyExpression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverseObjectProperty, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertyExistential, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primaryNegation, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertySelf, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(22),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primaryHelper, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restrictionNegation, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifiedObjectExactCardinality, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifiedObjectMaxCardinality, 4),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectExactCardinality, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertyUniversal, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertyValue, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifiedObjectMinCardinality, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectMaxCardinality, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restrictionHelper, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectMinCardinality, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(13),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(9),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalentTo, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atomic_repeat1, 2), SHIFT_REPEAT(95),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjointWith, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjointUnionOf, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjointWith, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equivalentTo_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equivalentTo_repeat1, 2), SHIFT_REPEAT(3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalentTo, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subClassOf, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classExpressionAxiom, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_manchester(void) {
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
