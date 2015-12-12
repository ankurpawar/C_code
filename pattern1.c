#include<stdio.h>

int main()
{
	int i,j,n=9;

	for(i = 0; i <= n; i++) {
		for(j = n; j >= i; j--)
			printf(" ");	 
		for(j = 0; j <= i; j++)
			printf("%d", j);
         	printf("\b");
		for(j = i; j >= 0; j--)
			printf("%d", j);
		printf("\n");
	}
	return 0;
}

/*
Output
          0
         010
        01210
       0123210
      012343210
     01234543210
    0123456543210
   012345676543210
  01234567876543210
 0123456789876543210
*/
