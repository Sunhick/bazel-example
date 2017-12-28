load(
    "//extensions:logger.bzl",
    "logger"
)
load(
    "@tiger//extensions:rules.bzl",
    "sum"
)

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
    srcs = [
        "starter.cc",
        "common.h",
    ] + select({
        "//tools/conditions:windows" : ["windows.cc"],
        "//tools/conditions:linux" : ["linux.cc"],
        "//conditions:default" : ["default.cc"],
    }),
    deps = [
        "//console:libconsole",
        "//graphics:graphics",
        # math2 is precompiled for darwin.
        # commenting this for now.
        # "//3rd-party:math2",
       "@tiger//session:session",
        "@gnu//gnu:profile",
        "@duck//:history",
        # "//platform:ui"
    ] + select({
        "//tools/conditions:windows" : ["//platform:winui"],
        "//tools/conditions:linux" : ["//platform:linux"],
        "//conditions:default" : ["//platform:defui"],        
    }),
    linkstatic = 0,
    visibility = ["//visibility:public"]
)
