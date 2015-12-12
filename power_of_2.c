/*test a number is power of 2 or not*/
#include <stdio.h>

int is_power_of_2(int x)
{
	return x && !(x & (x-1));
}

int main()
{
	int i;
	for (i = -100; i < 100; i++) {
		if(is_power_of_2(i))
			printf("i = %d\n",i);
	}
	return 0;
}
