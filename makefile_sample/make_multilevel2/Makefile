CC=gcc
INCLUDE=-I./add -I./mul
MAIN_OBJ=main.o
SUBDIR_OBJ=add.o mul.o

all: main.o add.o mul.o
	$(CC) -o main main.o ./add/add.o ./mul/mul.o
main.o: main.c
	$(CC) -c $(INCLUDE) main.c
$(SUBDIR_OBJ): 
	(cd $*;$(MAKE))
clean:
	-rm -f main.o main;
	(cd add; make clean)
	(cd mul; make clean)
.PHONY: all clean
