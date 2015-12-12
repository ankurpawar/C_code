#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[]="hare deer lion bats";
	char b[]="cats dogs bird fish";
	printf("\n %lu %lu", &a , &b);
	//memmove(a+5, a, 20);
	//printf("\n %s %d", a , sizeof(a));
	
	printf("\n %s %lu", b, sizeof(b));
	memcpy(b+5, b, 20);
	printf("\n %s %lu", b, sizeof(b));

	return 0;
}

/*
output on linux x86_64
140736359594160 140736359594192
 cats dogs bird fish 20
*** stack smashing detected ***: ./string_overlap terminated
 cats cats dogs dogd fogd 6؋U}�� 20Aborted (core dumped)


*/
