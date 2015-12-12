all : main

main : main.o func.o
	gcc -o main main.o func.o 

main.o : main.c func.h
	gcc -c main.c

func.o : func.c
	gcc -c func.c

clean :
	-rm *.o main
