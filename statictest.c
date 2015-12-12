/*static variable initialization*/
/*try to compile this and the compiler gives*/
/*error: initializer element is not constant
  static int j = i;*/

#include <stdio.h>

int main()
{
	int i = 0;
	static int j = i;
	printf("%d %d\n", j, i);
	return 0;
}
