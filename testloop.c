#include<stdio.h>

int main()
{
	int i=0;
	int j=0;
	for(i=0;i<5;i++)
	{
		continue;
		j++;
	}
	printf("i=%d,j=%d",i,j);
	return 0;
}
