#include <stdio.h>
#include <string.h>

int main()
{
	struct bitfield {
		int a:5;
		int b:5;
		int c:6;
	} bit;
	char *p;
	memset(&bit, 0, sizeof(bit));
	p = &bit;
	bit.a = 1;
	bit.b = 3;
	bit.c = 5;
	printf("%X\n", *p);
	p++;
	printf("%X\n", *p);
	p++;
	printf("%X,sizeof(bit) = %i\n", *p, sizeof(bit));

	return 0;	
}

/*
 output 
 1 3 5 sizeof(bit) = 3
 layout little
 000aaaaa000bbbbb00cccccc
 000000010000001100000101
 |       |
 ptr     |
         ptr++
*/
