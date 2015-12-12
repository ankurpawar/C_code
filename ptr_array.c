/*pointer to 2d array*/

#include<stdio.h>
#include<stdlib.h>



int main()
{
	char (*arr)[16][2];
	char (*a2)[2];
	a2 = malloc(2*sizeof(char));
	printf("sizeof(a2)=%lu",sizeof(a2));
	arr = malloc(16*sizeof(a2)); 
	printf("arr=%lu",arr);
	printf("arr=%lu",arr+1);
	return 0;
}



