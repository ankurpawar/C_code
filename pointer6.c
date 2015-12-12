/*point int with char pointer*/

#include <stdio.h>

int main()
{
	int i = 0x12345678;
	unsigned short s = 0xabcd;
	int *ptr2 = &s;
	char *ptr = &i;
	printf("%x\n",*ptr); /*output 0x78 on x86*/
	printf("%x\n",*ptr2); /*output 0x5678abcd on x86*/
	printf("%d",sizeof(ptr));
	return 0;
}
