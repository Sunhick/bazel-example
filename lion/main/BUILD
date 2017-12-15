cc_binary(
    name = "main",
    srcs = glob(["*.cc", "*.h"]),
    deps = [
       "//console:libconsole",
       "//graphics:graphics",
       "@tiger//session:session",
       "@gnu//gnu:profile",
       "@duck//:history"
    ],
    linkstatic = 0
)