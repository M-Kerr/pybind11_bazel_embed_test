load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    # copts = [
        # "-Wno-unused-result",
        # "-Wsign-compare",
        # "-Wunreachable-code",
        # "-DNDEBUG",
        # "-g",
        # "-fwrapv",
        # "-O3",
        # "-Wall",
    # ],
    # linkopts = [
    #     "-L/Users/mdkerr/.pyenv/versions/3.8.1/lib/python3.8/config-3.8-darwin",
    #     "-lpython3.8",
    #     "-ldl",
    #     "-framework CoreFoundation",
    # ],
    deps = [
        "@pybind11//:pybind11_embed",
    ],
)