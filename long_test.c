#include<stdio.h>

int i;

int main()
{
	long l = 0;
	int *p = &i;
	printf("size = %p\n",p);
	i = 5; 
	p = &i;
	printf("size = %p\n",p);
	
	return 0;
}
