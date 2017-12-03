cc_library(
        name = "server",
        srcs = [
                "server.c",
        ],
        hdrs = [
                "server.h",
        ],
        deps = [
                "//parent:parent",
                "//child:child",
        ],
)

cc_binary(
        name = "signal-test",
        srcs = ["main.c"],
        deps = [
                ":server",
        ],
)
