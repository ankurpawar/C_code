/*Program to find weather a processor is big ot little endian*/
#include<stdio.h>

union little_big
{
	int i;
	char c;
};

int main()
{
	/*pointers do the work.better way is to use union*/
	int a = 0xAB;
	int *ptr;
	unsigned char *c;
	/**/
	union little_big u;
	u.i = 0x01;
	c = (unsigned char *)&a;
	printf("*c=%d\n",*c); 
	if((*c) == (a&0xFF))
		printf("pointer little\n");
	else
		printf("pointer big\n");

	printf("address of i=%p u=%p",&u.i,&u.c);
	if (u.c == 0)
		printf("un big\n");
	else
		printf("un little\n");
	
	return 0;
}
