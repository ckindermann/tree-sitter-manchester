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
                               $.objectPropertySelf),

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


      primaryHelper: $ => choice($.primary,
                            $.primaryNegation),

      primary: $ => seq(choice($.restriction,
                               $.atomic)), 

      primaryNegation: $ => seq('not',
                                $.primary),

      atomic: $ => choice(/[a-z]+/,
                             seq('(',
                                 $.description,
                                 ')')),

      objectPropertyExpression: $ => /[a-z]+/,

  }
});
