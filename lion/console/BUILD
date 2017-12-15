cc_inc_library (
    name = "libconsole",
    hdrs = glob(["*.h"]),
    deps = [
        ":console"
    ],
    visibility = ["//visibility:public"],
)

cc_library(
   name = "console",
   defines = ["VERBOSE", "MORE"],
   srcs = glob(["*.cc"]),
   hdrs = glob(["*.h"]),
   visibility = ["//visibility:public"],
   linkstatic = 0,
)