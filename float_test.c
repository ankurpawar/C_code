/*0x40900000 is IEEE754 hex representation of 4.5. Casting 0x40900000 in
float will not convert it to 4.5 but it will convert it to equivalent decimal
number. This could be easily done using union.*/
#include <stdio.h>

int main()
{
	union un{
		unsigned int i;
		float f;
	};
	float fa;
	float fb;
	union un u1;
	u1.i = 0x40900000;
	fa = *((float*)(&u1.i));
	fb = (float)0x40900000;
	printf("u1.f = %f, fa = %f, fb = %f\n", u1.f, fa, fb);
	return 0;
}

/*
output
u1.f = 4.500000, fa = 4.500000, fb = 1083179008.000000
*/
