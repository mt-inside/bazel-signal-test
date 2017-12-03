sh_binary(
    name="foo",
    srcs=["foo.sh"],
    data=["file1.txt"],
    deps=[":bar", "//aux:baz"],
)

sh_library(
    name="bar",
    srcs=["bar.sh"],
    data=["file2.txt"],
)
