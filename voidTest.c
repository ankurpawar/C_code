#include<stdio.h>

void fun(void *v)
{
	unsigned int *i;
	i = (int *)v;
	*i = 0xaabbccdd;
}

int main()
{
	unsigned int i = 0;
	fun(&i);
	printf("i = %X\n",i);
	return 0;
}
