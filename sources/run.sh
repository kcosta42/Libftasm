nasm -f macho64 ft_test.s -o ft_test.o
ld ft_test.o -macosx_version_min 10.12 -lSystem
./a.out
