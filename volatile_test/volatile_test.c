#include <stdio.h>

int s_delay(int n)
{
	volatile int i;
	for (i = 0; i < n; i++)
	;
	return i;
}

int main()
{
	int i;
	int x = 0;
	/*volatile int *ptr=&i;*//*ptr is pointer to a volatile integer*/
	/*int volatile *ptr;*//*ptr is pointer to a volatile integer*/
	/*int *volatile ptr;*//*ptr is volatile pointer to integer*/
	volatile int* volatile ptr = &i;/*ptr is volatile pointer to a volatile integer*/
	for (i = 0; i < 5;)
	{
		i++;
	}
	
	i = s_delay(5);
	for (*ptr = 0; *ptr < 5; (*ptr)++) {
		//x++;
	}
	return 0;
}
