#include<stdio.h>

inline int func() __attribute__((always_inline));
int func()
{
	static int avar = 0;
	avar++;
	return avar;
}

int foo()
{
	static int baz = 5;
	baz += 2;
	return baz;
}
int main()
{
	int z = 0;
	z = func();
	printf("z = %d\n", z);
	foo();
	foo();
	printf("%d \n", foo());
	return 0;
} 
