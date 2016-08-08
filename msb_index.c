/*Find the bit position of msb in a unsigned integer
  example x = 7, msb position is 2
*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int msb_index(uint32_t x)
{
	int index = 0;
	(0xFFFF0000 & x) && (index = 16,x >>= 16);
	(0xFF00 & x) && (index += 8,x >>= 8);
	(0xF0 & x) && (index += 4,x >>= 4);
	(0xC & x) && (index += 2,x >>= 2);
	(0x2 & x) && (index += 1,x >>= 1);
	return index;
}

int main(int argc, char *argv[])
{
	uint32_t x;
	if (argc != 2) {
		fprintf(stderr, "incorrect number of arguments\n");
		return 0;
	}
	x = atoi(argv[1]);
	printf("x = %X msb index = %d\n", x, msb_index(x));
	return 0;
}
