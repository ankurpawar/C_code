/*Program generates 100 random number between MAX_RAND,MIN_RAND using
standard library functions*/
#include <stdlib.h>
#include <stdio.h>

#define MIN_RAND	-150
#define MAX_RAND	150
#define TOTAL_NUM	100

int main()
{
	int i, x;
	/*srand() sets its argument as seed for rand() function
	time(0) returns the time as the number of seconds since the Epoch*/
	srand(time(0));
	
	for (i = 0; i < TOTAL_NUM; i++) {
		x = rand() % (MAX_RAND - (MIN_RAND) + 1) + MIN_RAND;
		printf("%d ",x);
	}
	
	printf("\n");
	return 0;
}
