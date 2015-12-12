/*multiplication without *operator */

#include <stdio.h>

void mul(int num1, int num2)
{
	int result = 0;
	while (num2) {
		if (num2 & 1)
			result += num1;
		num1 <<= 1;
		num2 >>= 1; 
	}
	return result;
}

int main()
{
	int res;
	res = mul(4,5);
	printf("%d\n",res);
	return 0;
}
