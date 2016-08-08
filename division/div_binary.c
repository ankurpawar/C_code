/*Binary division of unsigned int by shift and subtract*/
/*Algorithm taken from Wikipedia*/
#include <stdio.h>
#include <stdint.h>

struct div_struct {
	uint32_t dividend;
	uint32_t divisor;
	uint32_t quotient;
	uint32_t remainder;
};

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

int divide(struct div_struct *D)
{
	int msb_pos = 0;
	int i;
	if (D->divisor == 0) {
		printf("Divide by zero\n");
		return -1;
	}

	D->quotient = 0;
	D->remainder = 0;
	msb_pos = msb_index(D->dividend);

	for (i = msb_pos; i >= 0; i--) {
		D->remainder = D->remainder << 1;
		D->remainder = D->remainder | (0x01 & (D->dividend >> i));
		if (D->remainder >= D->divisor) {
			D->remainder = D->remainder - D->divisor;
			D->quotient = D->quotient | (1 << i);
		}
	}
	return 0;
}

int main(int argc, char *argv[])
{
	uint32_t dividend, divisor, q, r;
	uint32_t temp_divisor, temp_dividend;
	struct div_struct d;
	int i;
	if (argc != 3) {
		fprintf(stderr, "Incorrect number of arguments\n");
		return 0;
	}
	d.dividend = atoi(argv[1]);
	d.divisor = atoi(argv[2]);
	
	divide(&d);	
	
	printf("dividend = %u, divisor = %u\n", d.dividend, d.divisor);
	printf("q = %u, r = %u\n", d.quotient, d.remainder);
	
	return 0;
}
