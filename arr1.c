/*Access array using pointer notation*/
#include<stdio.h>

int main()
{
	int arr[3][2] = {{1,2},{3,4},{5,6}};
	int (*p)[2];
	int i=1;
	int j=1;
 
	p = arr;
	printf("%d", *(*(p+i)+j));
	return 0;
}
