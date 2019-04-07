module.exports = grammar({
    name: 'apidoc',

    extras: $ => [
        token(choice(
            // Skip over stars at the beginnings of lines
            seq(/\n/, /[ \t]*/, repeat(seq('*', /[ \t]*/))),
            /[ \t\r]/
        ))
    ],

    rules: {
        apidoc: $ => seq(
            $._begin,
            optional($.description),
            // I do not want this to work unless at least one of the @api tags is defined
            repeat1($._tag),
            $._end
        ),

        _tag: $ => choice(
            $.api,
            $.ignore,
            $.define,
            $.deprecated,
            $.apidescription,
            $.apierror,
            $.errorexample,
            $.example,
            $.apigroup,
            $.header,
            $.headerexample,
            $.apiname,
            $.apiparam,
            $.paramexample,
            $.permission,
            $.private,
            $.samplerequest,
            $.success,
            $.successexample,
            $.apiuse,
            $.version
        ),

        /** TAGS **/

        api: $ => prec(-1, seq(
            token('@api'),
            optional($.method),
            optional($.path),
            optional(alias($.description, $.title))
        )),

        ignore: $ => seq(
            token('@apiIgnore'),
            optional($.description)
        ),

        define: $ => seq(
            token('@apiDefine'),
            optional($.name),
            optional(alias($.description, $.title))
        ),

        deprecated: $ => seq(
            token('@apiDeprecated'),
            optional($.description)
        ),

        apidescription: $ => seq(
            token('@apiDescription'),
            optional($.description)
        ),

        apierror: $ => seq(
            token('@apiError'),
            optional($.group),
            optional($.type),
            optional($.name),
            optional($.description)
        ),

        errorexample: $ => seq(
            token('@apiErrorExample'),
            optional($.type),
            optional(alias($.description, $.title))
        ),

        example: $ => seq(
            token('@apiExample'),
            optional($.type),
            optional(alias($.description, $.title))
        ),

        apigroup: $ => seq(
            token('@apiGroup'),
            // Technically this is supposed to be a 'name', but spaces and other characters are
            // converted into '_', so syntactically this should be treated like a title
            optional(alias($.description, $.title))
        ),

        header: $ => seq(
            token('@apiHeader'),
            optional($.group),
            optional($.type),
            optional($.parameter),
            optional($.description)
        ),

        headerexample: $ => seq(
            token('@apiHeaderExample'),
            optional($.type),
            optional(alias($.description, $.title))
        ),

        apiname: $ => seq(
            token('@apiName'),
            // Just like @apiGroup, this is supposed to be a 'name', but it is treated differently
            optional(alias($.description, $.name))
        ),

        apiparam: $ => seq(
            token('@apiParam'),
            optional($.group),
            optional($.type),
            optional($.parameter),
            optional($.description)
        ),

        paramexample: $ => seq(
            token('@apiParamExample'),
            optional($.type),
            optional(alias($.description, $.title))
        ),

        permission: $ => seq(
            token('@apiPermission'),
            // Although this should be treated the same as @apiDefine, which uses a name and
            // description, @apiPermission works more like @apiUse where everything after the
            // tag is part of the name
            optional(alias($.description, $.name))
        ),

        private: $ => seq(
            token('@apiPrivate'),
            // Although @apiPrivate has no need for anything besides the tag, I don't like how
            // how anything after the tag would end up rendering as a series of 'name'
            optional($.description)
        ),

        samplerequest: $ => seq(
            token('@apiSampleRequest'),
            choice(
                optional($.url),
                $.path,
                // You can use "off" as a special parameter for this
                // For some odd reason, not specifying whitespace here breaks description parsing
                alias(/\soff\s/, $.default)
            ),
            optional($.description)
        ),

        success: $ => seq(
            token('@apiSuccess'),
            optional($.group),
            optional($.type),
            optional($.name),
            optional($.description)
        ),

        successexample: $ => seq(
            token('@apiSuccessExample'),
            optional($.type),
            optional(alias($.description, $.title))
        ),

        apiuse: $ => seq(
            token('@apiUse'),
            // Just like @apiPermission, everything after the tag is considered part of the name
            optional(alias($.description, $.name))
        ),

        version: $ => seq(
            token('@apiVersion'),
            choice(
                optional(alias($.description, $.name)),
                // Semantic versioning, seq(token(seq())) because tree-sitter is weird
                alias(seq(token(seq(
                    choice('0', /[1-9]\d*/),
                    '.',
                    choice('0', /[1-9]\d*/),
                    '.',
                    choice('0', /[1-9]\d*/),
                    optional(seq(
                        choice('0', /[1-9]\d*/, /\d*[-a-zA-Z][-a-zA-Z0-9]*/),
                        repeat(seq('.', choice('0', /[1-9]\d*/, /\d*[-a-zA-Z][-a-zA-Z0-9]*/)))
                    )),
                    optional(seq(
                        '+',
                        /[-a-zA-Z0-9]+/,
                        repeat(seq('.', /[-a-zA-Z0-9]+/))
                    ))
                ))), $.default)
            )
        ),

        /** END TAGS **/

        _text: $ => token(prec(-1, /[^*{}\(\)@\s][^*\(\){}\n]*([^*/{}\(\)\n][^*{}\(\)\n]*\*+)*/)),

        _begin: $ => token(seq('/', repeat('*'))),

        _end: $ => '/',

        // To prevent these from getting parsed anywhere, these must all have a low precedence
        method: $ => prec(-2, seq(
            '{',
            choice(
                'get',
                'head',
                'post',
                'put',
                'delete',
                'trace',
                'options',
                'connect',
                'patch'
            ),
            '}'
        )),

        // For some ridiculous reason, tree sitter completely ignores the *? quantifier for both
        // group and type, grabbing everything between anyway. This is certainly due to the lexer
        // prefering matching longer strings, resulting in any ')' or '}' later in the line breaking
        // things.
        group: $ => prec(-2, /\(.*?\)\s/),

        type: $ => prec(-2, /{.*?}\s/),

        path: $ => prec(-2, /\/[-a-zA-Z0-9_/:]*/),

        url: $ => prec(-2, /https?:\/\/[-a-zA-Z0-9_/:.]*?\s/),

        parameter: $ => prec(-2, choice(
            $.name,
            $.optional
        )),

        optional: $ => prec(-2, seq(
            '[',
            $.name,
            // Although optional parameters should ALWAYS be specified with a default value,
            // for the sake of syntax highlighting it is marked as optional here
            optional(seq('=', $.default)),
            ']'
        )),

        description: $ => prec(-2, seq(
            $._text,
            repeat($._text)
        )),

        default: $ => prec(-2, /[^\]]*/),

        name: $ => prec(-2, /[a-zA-Z][a-zA-Z_]*/),

        // This type of title is intended to span the rest of the line, just like description.
        // If there was a better way to alias this without creating a symbol, let me know.
        title: $ => prec(-99, '')

    }
});
