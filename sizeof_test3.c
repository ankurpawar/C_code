/*Program to test sizeof operator for different datatypes*/
#include<stdio.h>

struct emp {
	int n;
	float k;
	long l;
};

union uemp{
	long int u;
	char name;
} uemp1;

int main()
{
	short int a = 12;
	int b = 54;
	long int c = 29;
	float d = 65.45;
	double e = 9584.5439;
	long double f = 695.499385958393;
	char g = 'e';
 	struct emp emp1;
	char *ptrc;
	int *ptri;
	long int *ptrl;

	printf("size of short int %lu\n",sizeof(a));
	printf("size of int %lu\n",sizeof(b));
	printf("size of long int %lu\n",sizeof(c));
	printf("size of float %lu\n",sizeof(d));
	printf("size of double %lu\n",sizeof(e));
	printf("size of long double %lu\n",sizeof(f));
	printf("size of char %lu\n",sizeof(g));
	printf("size of struct emp %lu\n",sizeof(emp1));
	printf("size of union uemp %lu\n",sizeof(uemp1));
	printf("size of char *ptrc %lu\n",sizeof(ptrc));
	printf("size of long *ptri %lu\n",sizeof(ptri));
	printf("size of union *ptrl %lu\n",sizeof(ptrl));
	return 0;
}

/*
Output of the above program on Intel core i5
size of short int 2
size of int 4
size of long int 8
size of float 4
size of double 8
size of long double 16
size of char 1
size of struct emp 16
size of union uemp 8
size of char *ptrc 8
size of long *ptri 8
size of union *ptrl 8
*/
