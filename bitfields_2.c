/*code to see how layout of the bitfields take plca in the memory*/
#include <stdio.h>
#include <string.h>

int main()
{
	struct bitfield {
		int a:3;
		int b:13;
		//int c:1;
	};
	struct bitfield bit = {1,2};
	memset(&bit, 0, sizeof(bit));
	bit.a = 1;
	bit.b = 2;
	char *c = &bit;
	printf("%d %X \n", sizeof(bit), *c);
	return 0;	
}

/*
 output 4
*/
