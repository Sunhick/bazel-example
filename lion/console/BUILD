cc_inc_library (
    name = "console",
    hdrs = ["console.h"],
    deps = [
        ":console_impl"
    ],
    visibility = ["//visibility:public"],
)

cc_library(
   name = "console_impl",
   defines = ["VERBOSE", "MOR"],
   srcs = ["console.cc"],
   hdrs = ["console.h"],
   visibility = ["//visibility:public"],
)