module.exports = grammar({
    name: 'apidoc',

    externals: $ => [
        // Tags (excluding bas @api tag)
        $.ignore,
        $.define,
        $.deprecated,
        $.description,
        $.error,
        $.errorexample,
        $.example,
        $.apigroup,
        $.header,
        $.headerexample,
        $.apiname,
        $.param,
        $.paramexample,
        $.permission,
        $.private,
        $.samplerequest,
        $.success,
        $.successexample,
        $.use,
        $.version,
        $._tag_count, // Only for the external scanner, not actually part of grammar

        // Parts
        $.group,
        $.type,
        $.name,
        $.title,
        $.off,
        $.semver,

        // Others
        $.api,
        $._doc_start,
        $._doc_end,
        $._text
    ],

    rules: {
        apidoc: $ => seq(
            $._doc_start,
            repeat($._tag),
            $._doc_end
        ),

        _tag: $ => choice(
            $._text,
            seq($.api,
                optional($.method),
                optional($.path),
                optional($.title)
            ),
            seq(choice(
                $.ignore,
                $.deprecated,
                $.description,
                $.private
            )),
            seq($.define,
                optional($.name),
                optional($.title)
            ),
            seq(choice(
                    $.error,
                    $.success
                ),
                optional($.group),
                optional($.type),
                optional($.name)
            ),
            seq(choice(
                    $.errorexample,
                    $.example,
                    $.headerexample,
                    $.paramexample,
                    $.successexample
                ),
                optional($.type),
                optional($.title)
            ),
            seq(choice(
                    $.apigroup,
                    $.apiname,
                    $.permission,
                    $.use
                ),
                optional(alias($.title, $.name))
            ),
            seq(choice(
                    $.header,
                    $.param
                ),
                optional($.group),
                optional($.type),
                optional($.parameter)
            ),
            seq($.samplerequest,
                optional(choice($.url, $.path, $.off))
            ),
            seq($.version,
                optional(choice($.semver, $.name))
            )
        ),

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

        default: $ => prec(-2, /[^\]\n\r]*/)
    }
});
