/*Code to see how layout of bitfields takes place in 
memory*/

#include <stdio.h>
#include <string.h>

int main()
{
	struct bitfield {
		unsigned char a:2;
		unsigned char b:8;
		unsigned char c:6;
	} bit;
	char *p;
	bit.a = 1;
	bit.b = 3;
	bit.c = 5;
	p = &bit;
	printf("%X\n", *p);
	p++;
	printf("%X\n", *p);
	p++;
	printf("%X sizeof(bit) = %d i=%X\n", *p, sizeof(bit), bit.a);

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
