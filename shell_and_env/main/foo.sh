echo Where we think we are: $(pwd)
echo Where we actually are: $(pwd -P)
echo Who we think we are: $0
echo Who we actually are: $(readlink $0)
echo
echo "What's here:"
ls -R
echo
main/bar.sh
aux/baz.sh
echo
cat main/file1.txt main/file2.txt aux/file3.txt
