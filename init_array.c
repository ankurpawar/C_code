#include<stdio.h>
/*Program to demonstrate initialization of array at its declaration*/
int main()
{
	int arr[]={1,2,3,4,5}; /*arr array of 5 ints,initialized with 1,2,3,4,5*/
        int arr2[5]={0}; /*arr2 array of 5 int,all elements initialized with 0*/
	//int arr3[3]={1,2,3,4,5};
	int arr4[5]={[0 ... 4]=5};
	printf("%d",arr4[4]);

	return 0; 
}
