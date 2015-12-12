#include<stdio.h>

int main()
{
	char c = -4;
	short s = -4;
	int i = -4;
	
	unsigned char uc = 4;
	unsigned short us = 4;
	unsigned int ui = 4;
  	
	if (uc > c)
		printf("unsigned char is greater\n");
	else
		printf("signed char is greater\n");
	
	if (us > s)
		printf("unsigned short is greater\n");
	else
		printf("signed short is greater\n");
	
	if (ui > i)
		printf("unsigned int is greater\n");
	else
		printf("signed int is greater\n");

  	printf("c=%X uc=%X, s=%X us=%X, i=%X ui=%X\n", c, uc, s, us, i, ui);
	return 0;
}

/*
output
unsigned char is greater
unsigned short is greater
signed int is greater
c=FFFFFFFC uc=4 , s=FFFFFFFC us=4 , i=FFFFFFFC ui=4
*/
