#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  sym_URI = 22,
  anon_sym_SQUOTE = 23,
  anon_sym_SQUOTE2 = 24,
  sym_STRING = 25,
  sym_nonNegativeInteger = 26,
  sym_expression = 27,
  sym_classExpressionAxiom = 28,
  sym_subClassOf = 29,
  sym_equivalentTo = 30,
  sym_disjointWith = 31,
  sym_disjointUnionOf = 32,
  sym_description = 33,
  sym_conjunction = 34,
  sym_restriction = 35,
  sym_objectPropertyExistential = 36,
  sym_objectPropertyUniversal = 37,
  sym_objectPropertyValue = 38,
  sym_objectPropertySelf = 39,
  sym_objectMinCardinality = 40,
  sym_qualifiedObjectMinCardinality = 41,
  sym_unqualifiedObjectMinCardinality = 42,
  sym_objectMaxCardinality = 43,
  sym_qualifiedObjectMaxCardinality = 44,
  sym_unqualifiedObjectMaxCardinality = 45,
  sym_objectExactCardinality = 46,
  sym_qualifiedObjectExactCardinality = 47,
  sym_unqualifiedObjectExactCardinality = 48,
  sym_restrictionHelper = 49,
  sym_restrictionNegation = 50,
  sym_primaryHelper = 51,
  sym_primary = 52,
  sym_primaryNegation = 53,
  sym_atomic = 54,
  sym_objectPropertyExpression = 55,
  sym_inverseObjectProperty = 56,
  sym_classIRI = 57,
  sym_individual = 58,
  sym_IRI = 59,
  sym_LABEL = 60,
  aux_sym_equivalentTo_repeat1 = 61,
  aux_sym_description_repeat1 = 62,
  aux_sym_conjunction_repeat1 = 63,
  aux_sym_conjunction_repeat2 = 64,
  aux_sym_atomic_repeat1 = 65,
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
  [sym_URI] = "URI",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [sym_STRING] = "STRING",
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
  [sym_IRI] = "IRI",
  [sym_LABEL] = "LABEL",
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
  [sym_URI] = sym_URI,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_STRING] = sym_STRING,
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
  [sym_IRI] = sym_IRI,
  [sym_LABEL] = sym_LABEL,
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
  [sym_URI] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_STRING] = {
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
  [sym_IRI] = {
    .visible = true,
    .named = true,
  },
  [sym_LABEL] = {
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
      if (eof) ADVANCE(82);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(52);
      if (lookahead == 'W') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'j') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'q') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 74:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 75:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 76:
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 80:
      if (eof) ADVANCE(82);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DisjointUnionOf_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'd') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_URI);
      if (lookahead == 'v') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_URI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_STRING);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_nonNegativeInteger);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 81},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 81},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 81},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
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
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
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
  [77] = {.lex_state = 0},
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
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_nonNegativeInteger] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(107),
    [sym_classExpressionAxiom] = STATE(104),
    [sym_subClassOf] = STATE(103),
    [sym_equivalentTo] = STATE(103),
    [sym_disjointWith] = STATE(103),
    [sym_disjointUnionOf] = STATE(103),
    [sym_classIRI] = STATE(82),
    [sym_IRI] = STATE(83),
    [sym_LABEL] = STATE(32),
    [sym_URI] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_not,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(45), 1,
      sym_classIRI,
    STATE(46), 1,
      sym_primaryHelper,
    STATE(79), 1,
      sym_conjunction,
    STATE(96), 1,
      sym_description,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [72] = 20,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(68), 1,
      sym_primaryHelper,
    STATE(69), 1,
      sym_classIRI,
    STATE(77), 1,
      sym_conjunction,
    STATE(98), 1,
      sym_description,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [144] = 20,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_not,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(45), 1,
      sym_classIRI,
    STATE(46), 1,
      sym_primaryHelper,
    STATE(79), 1,
      sym_conjunction,
    STATE(111), 1,
      sym_description,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [216] = 20,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(68), 1,
      sym_primaryHelper,
    STATE(69), 1,
      sym_classIRI,
    STATE(77), 1,
      sym_conjunction,
    STATE(108), 1,
      sym_description,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [288] = 20,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(68), 1,
      sym_primaryHelper,
    STATE(69), 1,
      sym_classIRI,
    STATE(77), 1,
      sym_conjunction,
    STATE(86), 1,
      sym_description,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [360] = 20,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(68), 1,
      sym_primaryHelper,
    STATE(69), 1,
      sym_classIRI,
    STATE(77), 1,
      sym_conjunction,
    STATE(91), 1,
      sym_description,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [432] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(44), 1,
      sym_classIRI,
    STATE(75), 1,
      sym_primary,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(21), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [499] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(44), 1,
      sym_classIRI,
    STATE(74), 1,
      sym_primary,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(25), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [566] = 19,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(68), 1,
      sym_primaryHelper,
    STATE(69), 1,
      sym_classIRI,
    STATE(84), 1,
      sym_conjunction,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [635] = 19,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_not,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(45), 1,
      sym_classIRI,
    STATE(46), 1,
      sym_primaryHelper,
    STATE(84), 1,
      sym_conjunction,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [704] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(44), 1,
      sym_classIRI,
    STATE(59), 1,
      sym_primary,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(29), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [771] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(44), 1,
      sym_classIRI,
    STATE(74), 1,
      sym_primary,
    ACTIONS(23), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [838] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(44), 1,
      sym_classIRI,
    STATE(75), 1,
      sym_primary,
    ACTIONS(19), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(21), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [905] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(44), 1,
      sym_classIRI,
    STATE(59), 1,
      sym_primary,
    ACTIONS(27), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [972] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(44), 1,
      sym_classIRI,
    STATE(66), 1,
      sym_primaryHelper,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1038] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(44), 1,
      sym_classIRI,
    STATE(65), 1,
      sym_primaryHelper,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1104] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_not,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(44), 1,
      sym_classIRI,
    STATE(66), 1,
      sym_primaryHelper,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1170] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_not,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(44), 1,
      sym_classIRI,
    STATE(65), 1,
      sym_primaryHelper,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1236] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_not,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(44), 1,
      sym_classIRI,
    STATE(64), 1,
      sym_primaryHelper,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1302] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(44), 1,
      sym_classIRI,
    STATE(64), 1,
      sym_primaryHelper,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1368] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(17), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(44), 1,
      sym_classIRI,
    STATE(62), 1,
      sym_primaryHelper,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1434] = 18,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_not,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(44), 1,
      sym_classIRI,
    STATE(62), 1,
      sym_primaryHelper,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(70), 2,
      sym_primary,
      sym_primaryNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1500] = 16,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(43), 1,
      sym_primary,
    STATE(44), 1,
      sym_classIRI,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1559] = 16,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(34), 1,
      sym_IRI,
    STATE(36), 1,
      sym_inverseObjectProperty,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(43), 1,
      sym_primary,
    STATE(44), 1,
      sym_classIRI,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1618] = 13,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(31), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(40), 1,
      sym_restrictionHelper,
    STATE(36), 2,
      sym_inverseObjectProperty,
      sym_IRI,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(71), 2,
      sym_restriction,
      sym_restrictionNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1669] = 13,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(31), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(72), 1,
      sym_restrictionHelper,
    STATE(36), 2,
      sym_inverseObjectProperty,
      sym_IRI,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(71), 2,
      sym_restriction,
      sym_restrictionNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1720] = 13,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(40), 1,
      sym_restrictionHelper,
    STATE(36), 2,
      sym_inverseObjectProperty,
      sym_IRI,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(71), 2,
      sym_restriction,
      sym_restrictionNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1771] = 13,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_LABEL,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(42), 1,
      sym_restrictionHelper,
    STATE(36), 2,
      sym_inverseObjectProperty,
      sym_IRI,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(71), 2,
      sym_restriction,
      sym_restrictionNegation,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1822] = 11,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(35), 1,
      sym_objectPropertyExpression,
    STATE(73), 1,
      sym_restriction,
    STATE(36), 2,
      sym_inverseObjectProperty,
      sym_IRI,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1866] = 11,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(38), 1,
      sym_objectPropertyExpression,
    STATE(73), 1,
      sym_restriction,
    STATE(36), 2,
      sym_inverseObjectProperty,
      sym_IRI,
    STATE(41), 2,
      sym_qualifiedObjectMaxCardinality,
      sym_unqualifiedObjectMaxCardinality,
    STATE(56), 2,
      sym_qualifiedObjectMinCardinality,
      sym_unqualifiedObjectMinCardinality,
    STATE(61), 2,
      sym_qualifiedObjectExactCardinality,
      sym_unqualifiedObjectExactCardinality,
    STATE(55), 7,
      sym_objectPropertyExistential,
      sym_objectPropertyUniversal,
      sym_objectPropertyValue,
      sym_objectPropertySelf,
      sym_objectMinCardinality,
      sym_objectMaxCardinality,
      sym_objectExactCardinality,
  [1910] = 1,
    ACTIONS(35), 18,
      ts_builtin_sym_end,
      anon_sym_SubClassOf_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_COMMA,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_that,
      anon_sym_some,
      anon_sym_only,
      anon_sym_value,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1931] = 1,
    ACTIONS(37), 18,
      ts_builtin_sym_end,
      anon_sym_SubClassOf_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_COMMA,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_that,
      anon_sym_some,
      anon_sym_only,
      anon_sym_value,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1952] = 2,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_that,
      anon_sym_RPAREN,
    ACTIONS(41), 7,
      anon_sym_some,
      anon_sym_only,
      anon_sym_value,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [1970] = 7,
    ACTIONS(43), 1,
      anon_sym_some,
    ACTIONS(45), 1,
      anon_sym_only,
    ACTIONS(47), 1,
      anon_sym_value,
    ACTIONS(49), 1,
      anon_sym_Self,
    ACTIONS(51), 1,
      anon_sym_min,
    ACTIONS(53), 1,
      anon_sym_max,
    ACTIONS(55), 1,
      anon_sym_exactly,
  [1992] = 1,
    ACTIONS(41), 7,
      anon_sym_some,
      anon_sym_only,
      anon_sym_value,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [2002] = 1,
    ACTIONS(57), 7,
      anon_sym_some,
      anon_sym_only,
      anon_sym_value,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [2012] = 7,
    ACTIONS(49), 1,
      anon_sym_Self,
    ACTIONS(59), 1,
      anon_sym_some,
    ACTIONS(61), 1,
      anon_sym_only,
    ACTIONS(63), 1,
      anon_sym_value,
    ACTIONS(65), 1,
      anon_sym_min,
    ACTIONS(67), 1,
      anon_sym_max,
    ACTIONS(69), 1,
      anon_sym_exactly,
  [2034] = 6,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_inverse,
    ACTIONS(15), 1,
      sym_URI,
    STATE(32), 1,
      sym_LABEL,
    STATE(37), 1,
      sym_objectPropertyExpression,
    STATE(36), 2,
      sym_inverseObjectProperty,
      sym_IRI,
  [2054] = 1,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2062] = 1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2070] = 3,
    ACTIONS(77), 1,
      anon_sym_and,
    STATE(48), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(75), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [2082] = 1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2090] = 1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2098] = 2,
    ACTIONS(83), 1,
      anon_sym_that,
    ACTIONS(81), 4,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2108] = 3,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(53), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(85), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [2120] = 3,
    ACTIONS(89), 1,
      anon_sym_and,
    STATE(47), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(71), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [2132] = 3,
    ACTIONS(77), 1,
      anon_sym_and,
    STATE(47), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(92), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [2144] = 3,
    ACTIONS(96), 1,
      anon_sym_and,
    STATE(63), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [2156] = 1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2164] = 3,
    ACTIONS(102), 1,
      anon_sym_and,
    STATE(51), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(100), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [2176] = 5,
    ACTIONS(3), 1,
      sym_URI,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_LABEL,
    STATE(89), 1,
      sym_individual,
    STATE(95), 1,
      sym_IRI,
  [2192] = 3,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(51), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(94), 3,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [2204] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2212] = 1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2220] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2228] = 1,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2236] = 5,
    ACTIONS(3), 1,
      sym_URI,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_LABEL,
    STATE(95), 1,
      sym_IRI,
    STATE(97), 1,
      sym_individual,
  [2252] = 1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2260] = 3,
    ACTIONS(115), 1,
      anon_sym_and,
    STATE(60), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [2272] = 1,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2280] = 1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2288] = 3,
    ACTIONS(120), 1,
      anon_sym_and,
    STATE(63), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [2300] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2308] = 1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2316] = 1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2324] = 3,
    ACTIONS(129), 1,
      anon_sym_and,
    STATE(60), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [2336] = 3,
    ACTIONS(96), 1,
      anon_sym_and,
    STATE(49), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [2348] = 2,
    ACTIONS(131), 1,
      anon_sym_that,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
  [2358] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2366] = 1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2374] = 3,
    ACTIONS(129), 1,
      anon_sym_and,
    STATE(67), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
  [2386] = 1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2394] = 1,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2402] = 1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2410] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2418] = 3,
    ACTIONS(147), 1,
      anon_sym_or,
    STATE(80), 1,
      aux_sym_description_repeat1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [2429] = 3,
    ACTIONS(151), 1,
      anon_sym_or,
    STATE(81), 1,
      aux_sym_description_repeat1,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2440] = 3,
    ACTIONS(151), 1,
      anon_sym_or,
    STATE(78), 1,
      aux_sym_description_repeat1,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2451] = 3,
    ACTIONS(147), 1,
      anon_sym_or,
    STATE(85), 1,
      aux_sym_description_repeat1,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [2462] = 3,
    ACTIONS(155), 1,
      anon_sym_or,
    STATE(81), 1,
      aux_sym_description_repeat1,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2473] = 4,
    ACTIONS(158), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(160), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(162), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(164), 1,
      anon_sym_DisjointUnionOf_COLON,
  [2486] = 1,
    ACTIONS(39), 4,
      anon_sym_SubClassOf_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
  [2493] = 1,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [2500] = 3,
    ACTIONS(166), 1,
      anon_sym_or,
    STATE(85), 1,
      aux_sym_description_repeat1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [2511] = 3,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_equivalentTo_repeat1,
  [2521] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_atomic_repeat1,
  [2531] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      aux_sym_equivalentTo_repeat1,
  [2541] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_atomic_repeat1,
  [2551] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      aux_sym_equivalentTo_repeat1,
  [2561] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      aux_sym_equivalentTo_repeat1,
  [2571] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_atomic_repeat1,
  [2581] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      aux_sym_equivalentTo_repeat1,
  [2591] = 3,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_equivalentTo_repeat1,
  [2601] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2606] = 2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_equivalentTo_repeat1,
  [2613] = 1,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2618] = 1,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [2623] = 1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE2,
  [2627] = 1,
    ACTIONS(201), 1,
      sym_nonNegativeInteger,
  [2631] = 1,
    ACTIONS(203), 1,
      sym_STRING,
  [2635] = 1,
    ACTIONS(205), 1,
      sym_nonNegativeInteger,
  [2639] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [2643] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [2647] = 1,
    ACTIONS(211), 1,
      sym_nonNegativeInteger,
  [2651] = 1,
    ACTIONS(213), 1,
      sym_nonNegativeInteger,
  [2655] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [2659] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [2663] = 1,
    ACTIONS(219), 1,
      sym_nonNegativeInteger,
  [2667] = 1,
    ACTIONS(221), 1,
      sym_nonNegativeInteger,
  [2671] = 1,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 432,
  [SMALL_STATE(9)] = 499,
  [SMALL_STATE(10)] = 566,
  [SMALL_STATE(11)] = 635,
  [SMALL_STATE(12)] = 704,
  [SMALL_STATE(13)] = 771,
  [SMALL_STATE(14)] = 838,
  [SMALL_STATE(15)] = 905,
  [SMALL_STATE(16)] = 972,
  [SMALL_STATE(17)] = 1038,
  [SMALL_STATE(18)] = 1104,
  [SMALL_STATE(19)] = 1170,
  [SMALL_STATE(20)] = 1236,
  [SMALL_STATE(21)] = 1302,
  [SMALL_STATE(22)] = 1368,
  [SMALL_STATE(23)] = 1434,
  [SMALL_STATE(24)] = 1500,
  [SMALL_STATE(25)] = 1559,
  [SMALL_STATE(26)] = 1618,
  [SMALL_STATE(27)] = 1669,
  [SMALL_STATE(28)] = 1720,
  [SMALL_STATE(29)] = 1771,
  [SMALL_STATE(30)] = 1822,
  [SMALL_STATE(31)] = 1866,
  [SMALL_STATE(32)] = 1910,
  [SMALL_STATE(33)] = 1931,
  [SMALL_STATE(34)] = 1952,
  [SMALL_STATE(35)] = 1970,
  [SMALL_STATE(36)] = 1992,
  [SMALL_STATE(37)] = 2002,
  [SMALL_STATE(38)] = 2012,
  [SMALL_STATE(39)] = 2034,
  [SMALL_STATE(40)] = 2054,
  [SMALL_STATE(41)] = 2062,
  [SMALL_STATE(42)] = 2070,
  [SMALL_STATE(43)] = 2082,
  [SMALL_STATE(44)] = 2090,
  [SMALL_STATE(45)] = 2098,
  [SMALL_STATE(46)] = 2108,
  [SMALL_STATE(47)] = 2120,
  [SMALL_STATE(48)] = 2132,
  [SMALL_STATE(49)] = 2144,
  [SMALL_STATE(50)] = 2156,
  [SMALL_STATE(51)] = 2164,
  [SMALL_STATE(52)] = 2176,
  [SMALL_STATE(53)] = 2192,
  [SMALL_STATE(54)] = 2204,
  [SMALL_STATE(55)] = 2212,
  [SMALL_STATE(56)] = 2220,
  [SMALL_STATE(57)] = 2228,
  [SMALL_STATE(58)] = 2236,
  [SMALL_STATE(59)] = 2252,
  [SMALL_STATE(60)] = 2260,
  [SMALL_STATE(61)] = 2272,
  [SMALL_STATE(62)] = 2280,
  [SMALL_STATE(63)] = 2288,
  [SMALL_STATE(64)] = 2300,
  [SMALL_STATE(65)] = 2308,
  [SMALL_STATE(66)] = 2316,
  [SMALL_STATE(67)] = 2324,
  [SMALL_STATE(68)] = 2336,
  [SMALL_STATE(69)] = 2348,
  [SMALL_STATE(70)] = 2358,
  [SMALL_STATE(71)] = 2366,
  [SMALL_STATE(72)] = 2374,
  [SMALL_STATE(73)] = 2386,
  [SMALL_STATE(74)] = 2394,
  [SMALL_STATE(75)] = 2402,
  [SMALL_STATE(76)] = 2410,
  [SMALL_STATE(77)] = 2418,
  [SMALL_STATE(78)] = 2429,
  [SMALL_STATE(79)] = 2440,
  [SMALL_STATE(80)] = 2451,
  [SMALL_STATE(81)] = 2462,
  [SMALL_STATE(82)] = 2473,
  [SMALL_STATE(83)] = 2486,
  [SMALL_STATE(84)] = 2493,
  [SMALL_STATE(85)] = 2500,
  [SMALL_STATE(86)] = 2511,
  [SMALL_STATE(87)] = 2521,
  [SMALL_STATE(88)] = 2531,
  [SMALL_STATE(89)] = 2541,
  [SMALL_STATE(90)] = 2551,
  [SMALL_STATE(91)] = 2561,
  [SMALL_STATE(92)] = 2571,
  [SMALL_STATE(93)] = 2581,
  [SMALL_STATE(94)] = 2591,
  [SMALL_STATE(95)] = 2601,
  [SMALL_STATE(96)] = 2606,
  [SMALL_STATE(97)] = 2613,
  [SMALL_STATE(98)] = 2618,
  [SMALL_STATE(99)] = 2623,
  [SMALL_STATE(100)] = 2627,
  [SMALL_STATE(101)] = 2631,
  [SMALL_STATE(102)] = 2635,
  [SMALL_STATE(103)] = 2639,
  [SMALL_STATE(104)] = 2643,
  [SMALL_STATE(105)] = 2647,
  [SMALL_STATE(106)] = 2651,
  [SMALL_STATE(107)] = 2655,
  [SMALL_STATE(108)] = 2659,
  [SMALL_STATE(109)] = 2663,
  [SMALL_STATE(110)] = 2667,
  [SMALL_STATE(111)] = 2671,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualifiedObjectMaxCardinality, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualifiedObjectMaxCardinality, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualifiedObjectExactCardinality, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualifiedObjectExactCardinality, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualifiedObjectMinCardinality, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualifiedObjectMinCardinality, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IRI, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LABEL, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classIRI, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertyExpression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverseObjectProperty, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectMaxCardinality, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primaryNegation, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(28),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertySelf, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectMinCardinality, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifiedObjectMinCardinality, 4),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectExactCardinality, 1),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertyExistential, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertyUniversal, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objectPropertyValue, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primaryHelper, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restrictionHelper, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restrictionNegation, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifiedObjectExactCardinality, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifiedObjectMaxCardinality, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(11),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(10),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalentTo, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjointUnionOf, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjointWith, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjointWith, 3),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atomic_repeat1, 2), SHIFT_REPEAT(58),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalentTo, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equivalentTo_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equivalentTo_repeat1, 2), SHIFT_REPEAT(3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classExpressionAxiom, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subClassOf, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
