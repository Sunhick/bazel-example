# 
# Copyright (C) 2017 by Sunil
#

def _logger(ctx):
    print("Logger: Hello world")
    print("Name: ", ctx.attr.name)
    print("Msg: ", ctx.attr.msg)
    print("--Deps--")
    for dep in ctx.attr.deps:
        print(dep)

logger = rule(
    implementation = _logger,
    attrs = {
        "msg": attr.string(default = "Greetings!"),
        "deps": attr.label_list(),
    },
)
