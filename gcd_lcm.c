/* GCD of two numbers */

#include<stdio.h>

int gcd1(int a, int b)
{
	while (a != b)	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

int gcd2(int a, int b)
{
	int t;
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;	
	}
	return a;
}

int main()
{
	int n1, n2;
	printf("Enter value of n1");
	scanf("%d", &n1);
	printf("Enter value of n2");
	scanf("%d", &n2);
       
        printf("GCD of %d and %d is %d\n", n1, n2, gcd1(n1, n2));
        printf("LCM of %d and %d is %d\n", n1, n2, n1*n2/gcd1(n1, n2));

        printf("GCD of %d and %d is %d\n", n1, n2, gcd2(n1, n2));
        printf("LCM of %d and %d is %d\n", n1, n2, n1*n2/gcd2(n1, n2));

	return 0;
}

