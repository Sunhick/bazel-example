# option 1: selective inclusion of files and produce 1 binary (preferred)
# cc_library(
#     name = "ui",
#     hdrs = ["ui.h"] + select({
#         "//tools/conditions:linux" : ["linux.h"],
#         "//tools/conditions:windows" : ["windows.h"],
#         "//conditions:default" : ["default-ui.h"]
#     }),
#     srcs = select({
#         "//tools/conditions:linux" : ["linux.cc"],
#         "//tools/conditions:windows" : ["windows.cc"],
#         "//conditions:default" : ["default-ui.cc"]
#     }),
#     deps = [],
#     visibility = ["//visibility:public"]
# )

package(default_visibility = ["//visibility:public"])

licenses(["notice"])


# option 2: selective inclusion of libs for deps based on platform(prefered for prebuilt binaries).
cc_library(
    name = "winui",
    hdrs = ["ui.h", "windows.h"],
    srcs = ["windows.cc"],
)

cc_library(
    name = "defui",
    hdrs = ["ui.h", "default-ui.h"],
    srcs = ["default-ui.cc"],
)

cc_library(
    name = "linux",
    hdrs = ["ui.h", "linux.h"],
    srcs = ["linux.cc"],
)
