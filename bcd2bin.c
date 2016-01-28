/* C program to convert packed bcd to binary
 * 64(dec) = 0110 0100(pack bcd) = 0100 0000(binary)
 * N is a nibble, i is position of nibble
 * to convert a packed bcd N1,N0 represented in 8 bit
 * (N1 x 10^1) + (N0 x 10^0)
 * 
 * (6x10^1) + (4 x 10^0)
 *
 * $gcc -o bcd2bin bcd2bin.c -lm
 */

#include <stdio.h>
#include <math.h>

/*convert the packed bcd to decimal*/
unsigned int bcdtobinpack(unsigned int bcdpack)
{
	unsigned int bin = 0;
	int i = 0; /*8 nibbles in 32 bits*/
	while (i < 8) {
		bin = (((bcdpack >> 4*i)&0x0F)  * pow(10, i)) + bin;
		i++;
	}
	return bin;
}

/*Function converts string representation of decimal to packed bcd*/
unsigned int strtobcd(const char * numstr)
{
	unsigned int bcd = 0;
	const char * str = numstr;
	unsigned int b;
	while (*str) {
		bcd <<= 4;
		bcd = bcd + ((*str) - 0x30);
		str++; 
	}
	return bcd;
}

int main()
{
	const char *num = "89450";
	unsigned int bcd;
	unsigned int bin;

	bcd = strtobcd(num);
	printf("bcd = %X\n", bcd);

	bin = bcdtobinpack(bcd);
	printf("bin = %X\n", bin);
	
	return 0;
}
