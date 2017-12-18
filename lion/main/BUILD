load("//extensions:logger.bzl", "logger")

logger(
    name = "greet",
    deps = [
        "dep1"
    ],
    msg = "Happy coding & building..."
)

logger(
    name = "dep1",
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
