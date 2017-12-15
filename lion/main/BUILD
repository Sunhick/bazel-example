cc_binary (
    name = "main",
    srcs = glob(["*.cc", "*.h"]),
    deps = [
       "//console:libconsole",
       "//graphics:graphics",
       "//3rd-party:math2",
       "//objc:objc",
       "@tiger//session:session",
       "@gnu//gnu:profile",
       "@duck//:history"
    ],
    linkstatic = 0,
    visibility = ["//visibility:public"]
)