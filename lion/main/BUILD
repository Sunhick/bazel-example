load("//extensions:logger.bzl", "logger")
load("@tiger//extensions:rules.bzl", "sum")

logger(
    name = "greet",
    deps = [
        ":dep1",
        ":adder",
    ],
    msg = "Happy coding & building..."
)

logger(
    name = "dep1",
)

sum(
    name = "adder",
    a = 100,
    b = 100
)

cc_binary(
    name = "main",
    srcs = glob(["*.cc", "*.h"]),
    deps = [
       "//console:libconsole",
       "//graphics:graphics",
       "//3rd-party:math2",
       "@tiger//session:session",
       "@gnu//gnu:profile",
       "@duck//:history"
    ],
    linkstatic = 0,
    visibility = ["//visibility:public"]
)
