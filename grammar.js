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

      conjunction: $ => seq($.primaryHelper,
                            repeat(seq('and',
                                       $.primaryHelper))),


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
      //self: $ => 'Self',


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

      primaryHelper: $ => choice($.primary,
                            $.primaryNegation),

      primary: $ => seq(choice($.atomic,
                               $.restriction)), 

      primaryNegation: $ => seq('not',
                                $.primary),

      atomic: $ => choice($.classIRI,
                             seq('(',
                                 $.description,
                                 ')')),

      objectPropertyExpression: $ => $.IRI,

      //classIRI: $ => /[a-zA-Z:_0-9]+/,
      classIRI: $ => $.IRI,

      IRI: $ => /[A-Za-z0-9:_]+/,

      nonNegativeInteger: $ => /[0-9]+/, //TODO: numbers seem to break the parser - so maybe

  }
});
