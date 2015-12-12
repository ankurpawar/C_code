INCLUDE=-I./add -I./mul
all: main.o add.o mul.o
	gcc -o main main.o ./add/add.o ./mul/mul.o
main.o: main.c
	gcc -c ${INCLUDE} main.c
add.o:
	(cd add; make all)
mul.o:
	(cd mul; make all)
clean:
	-rm -f main.o main
	(cd add; make clean)
	(cd mul; make clean)
.PHONY: all clean
