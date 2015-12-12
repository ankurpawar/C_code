#include <stdio.h>

void fun_ptr(int **ptr)
{
	printf("ptr=%X , ptr+1=%X\n", ptr, ptr+1);
	printf("*ptr=%X, *ptr+1=%X\n", *ptr, *ptr+1);
	printf("**ptr=%X, **ptr+1 = %X\n", **ptr, **ptr+1);
}

int main()
{
	int arr[2][2] = {{9,10}, {11,12}};
	int arr2[3][3] = {{1,10,5}, {7,15,4}};
	int *ptr1, *ptr2;
	int **ptr;
	int x;
	scanf("%d",&x);
	if (x % 2)
		ptr1 = &arr;
	else
		ptr1 = &arr2;
	ptr2 = ptr1;
	ptr = &ptr2;
	fun_ptr(ptr);
	printf("ptr=%X , ptr+1=%X\n", ptr, ptr+1);
	printf("*ptr=%X, *ptr+1=%X\n", *ptr, *ptr+1);
	printf("**ptr=%X, **ptr+1 = %X\n", **ptr, **ptr+1);
	return 0;
}
/*output 32bit address
ptr=BFBC4420 , ptr+1=BFBC4424
*ptr=BFBC4424, *ptr+1=BFBC4428
**ptr=1, **ptr+1 = 2
ptr=BFBC4420 , ptr+1=BFBC4424
*ptr=BFBC4424, *ptr+1=BFBC4428
**ptr=1, **ptr+1 = 2
*/
/*output
&arr=5DAAEE40 , &arr+1=5DAAEE50
arr=5DAAEE40 , arr+1=5DAAEE48
*arr=5DAAEE40, *arr+1=5DAAEE44
**arr=9, **arr+1=A

&ptr=5DAAEE38 , &ptr+1=5DAAEE40
ptr=5DAAEE40 , ptr+1=5DAAEE48
*ptr=9, *ptr+1=D
Segmentation fault (core dumped)

See the difference between *arr and *ptr, *arr is address but *ptr is value
when **arr is accessed it gives value but **ptr results in *(*ptr), earlier
we have seen *ptr=9 so **ptr becomes *(9). CPU treats value 9 as address when
it dereferences 9 OS gives segmentation fault because it is valid address.   

incrementing pointer by one result in addition of size of 
pointer type to the address the pointer is holding,*ptr is again a pointer so 
*ptr+1 = *ptr+sizeof(int) = 9+4 that is 13

**ptr+1 is = *(9)+1 , address 9 is very low address which may be allocated for 
some shared library code or read only code or it is inaccessible to process
when **ptr is performed OS complains for this operation and give segmentation fault

*/
