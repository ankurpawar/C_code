#include <stdio.h>

int main()
{
	int i = -3, j = 2 , k = 0, m;
	m = j || i && k;
	printf("m = %d, i = %d, j = %d, k = %d\n", m, i, j , k);
	return 0;
}
