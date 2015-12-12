/*Program to change a const using pointer*/
#include<stdio.h>

int main()
{
	static int s = 5;
	static int str = 5;
	const int a = 2;
	int b = 3;
	const int *ptr1 = &a;
	const int * const ptr2 = &a;
	int *ptr;
	//ptr = (int*)&a;
	//*ptr = 4;
	//ptr1 = &b;
	//*ptr1 = 5; 
	//ptr2 = &b;
	//*ptr2 = 5; 
	printf("i=%d,*ptr=%d,%d\n",a,*ptr,s);	
	return 0;
}
