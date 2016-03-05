/*Find maximum integer among 3 integers*/
#include <stdio.h>

/*function return maximum of 3 integers*/
int max3_1(int a, int b, int c)
{
	int max = a;
	if (a > b) {
		if (a > c)
			max = a;
		else
			max = c;
	} else {
		if (b > c)
			max = b;
		else
			max = c;
	}
	return max;
}

/*another function return maximum of 3 integers*/
int max3_2(int a, int b, int c)
{
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}

int main(int argc, char *argv[])
{
	int arr[] = {8 , -9 , 0};

	printf("max is = %d\n", max3_1(arr[0], arr[1], arr[2]));
	printf("max is = %d\n", max3_1(1, 2, 3));
	printf("max is = %d\n", max3_1(-1, -9, 0));

	printf("max is = %d\n", max3_2(arr[0], arr[1], arr[2]));
	printf("max is = %d\n", max3_2(1, 2, 3));
	printf("max is = %d\n", max3_2(-1, -9, 0));
	
	return 0;
}
