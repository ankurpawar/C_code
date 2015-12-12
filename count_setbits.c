/*count set bits in a number*/
#include<stdio.h>

int main()
{
	printf("%x %d \n",func(0x80000000),func(-1));
	return 0;
}

/*Brian Kernighan's method*/
int func(int n)
{
	int count;
	for (count = 0; n; count++) {
		n &= n - 1;
	}
	return count; 
}
