/*gcc -o main main.c b.c header.h*/
/*readelf -s main*/
/*unique copy of static var and func for each source file */
#include <stdio.h>
#include "header.h"

static int var = 5;

int main()
{
	printf("hello %d\n",func(var));
	return 0;
}
