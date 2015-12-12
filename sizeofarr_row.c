#include<stdio.h>
int main()

{	
	/*int (*q)[3][4];
	 * What are the sizes of q, *q, **q, ***q
	 * Write some code to test this with a 2D array
	 */

	int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int (*q)[3][4];
	q=&arr;


	printf("%u,%u,%u,%u\n",sizeof(q),sizeof(*q),sizeof(**q),sizeof(***q));

	return 0;
}

/*4,48,16,4*/
