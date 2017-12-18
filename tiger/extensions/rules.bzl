def _sum(ctx):
    print("Sum invoked")
    a = ctx.attr.a
    b = ctx.attr.b
    print("sum(", a, ",", b, ") = ", a + b)

sum = rule(
    implementation = _sum,
    attrs = {
        "a": attr.int(default=10),
        "b": attr.int(default=10)
    },
)
