load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "pybind11",
    build_file = "@pybind11_bazel//:pybind11.BUILD",
    sha256 = "97504db65640570f32d3fdf701c25a340c8643037c3b69aec469c10c93dc8504",
    strip_prefix = "pybind11-2.5.0",
    urls = ["https://github.com/pybind/pybind11/archive/v2.5.0.tar.gz"],
)

http_archive(
    name = "pybind11_bazel",
    # sha256 = "6163b5220abe74de263a5b7f64a4407cd8589c47986fb6ffaf9af192c993fef3",
    strip_prefix = "pybind11_bazel-pybind11_embed",
    urls = ["https://github.com/M-Kerr/pybind11_bazel/archive/pybind11_embed.zip"],
)

http_archive(
    name = "rules_python",
    sha256 = "aa96a691d3a8177f3215b14b0edc9641787abaaa30363a080165d06ab65e1161",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.0.1/rules_python-0.0.1.tar.gz",
)

load("@pybind11_bazel//:python_configure.bzl", "python_configure")

python_configure(name = "local_config_python")
