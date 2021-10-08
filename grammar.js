module.exports = grammar({
  name: 'manchester',

 extras: $ => [
    /\s/,
  ],

  rules: {

      expression: $ => $.description,

      description: $ => seq($.conjunction,
                         repeat(seq('or',
                                    $.conjunction))), 

      conjunction: $ => choice(seq($.primaryHelper,
                               repeat(seq('and',
                                           $.primaryHelper))),
                               seq($.classIRI,
                                   'that',
                                   $.restrictionHelper,
                                   repeat(seq('and',
                                               $.restrictionHelper)))),


      restriction: $ => choice($.objectPropertyExistential,
                               $.objectPropertyUniversal,
                               $.objectPropertyValue,
                               $.objectPropertySelf,
                               $.objectMinCardinality,
                               $.objectMaxCardinality,
                               $.objectExactCardinality),

      objectPropertyExistential: $ => seq($.objectPropertyExpression,
                                          'some',
                                          $.primaryHelper),

      objectPropertyUniversal: $ => seq($.objectPropertyExpression,
                                          'only',
                                          $.primaryHelper),

      objectPropertyValue: $ => seq($.objectPropertyExpression,
                                          'value',
                                          $.primaryHelper),

      objectPropertySelf: $ => seq($.objectPropertyExpression,
                                          'Self'), 

      objectMinCardinality: $ => choice($.qualifiedObjectMinCardinality,
                                        $.unqualifiedObjectMinCardinality),

      qualifiedObjectMinCardinality: $ => seq($.objectPropertyExpression,
                                              'min',
                                              $.nonNegativeInteger,
                                              $.primary),

      unqualifiedObjectMinCardinality: $ => seq($.objectPropertyExpression,
                                              'min',
                                              $.nonNegativeInteger),

      objectMaxCardinality: $ => choice($.qualifiedObjectMaxCardinality,
                                        $.unqualifiedObjectMaxCardinality),

      qualifiedObjectMaxCardinality: $ => seq($.objectPropertyExpression,
                                              'max',
                                              $.nonNegativeInteger,
                                              $.primary),

      unqualifiedObjectMaxCardinality: $ => seq($.objectPropertyExpression,
                                              'max',
                                              $.nonNegativeInteger),

      objectExactCardinality: $ => choice($.qualifiedObjectExactCardinality,
                                        $.unqualifiedObjectExactCardinality),

      qualifiedObjectExactCardinality: $ => seq($.objectPropertyExpression,
                                              'exactly',
                                              $.nonNegativeInteger,
                                              $.primary),

      unqualifiedObjectExactCardinality: $ => seq($.objectPropertyExpression,
                                              'exactly',
                                              $.nonNegativeInteger),

      restrictionHelper: $ => choice($.restriction,
                                     $.restrictionNegation),
      restrictionNegation: $ => seq('not',
                                    $.restriction),

      primaryHelper: $ => choice($.primary,
                            $.primaryNegation),

      primary: $ => seq(choice($.atomic,
                               $.restriction)), 

      primaryNegation: $ => seq('not',
                                $.primary),

      atomic: $ => choice($.classIRI,
                             seq('(',
                                 $.description,
                                 ')'),
                              seq('{',
                                  $.individual,
                                  repeat(seq(',',
                                             $.individual)),
                                  '}')),

      objectPropertyExpression: $ => $.IRI,


      //classIRI: $ => /[a-zA-Z:_0-9]+/,
      classIRI: $ => $.IRI,
      individual: $ => $.IRI,

      IRI: $ => /[A-Za-z0-9:_]+/,

      nonNegativeInteger: $ => /[0-9]+/, //TODO: numbers seem to break the parser - so maybe

  }
});
