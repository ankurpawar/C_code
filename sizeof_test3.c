/*Program to test sizeof operator for different datatypes*/

#include<stdio.h>

struct emp{
	   int n;
	   float k;
          };

int main()
{
 short int a=12;
 int b=54;
 long int c=29;
 float d=65.45;
 double e=9584.5439;
 long double f=695.499385958393;
 char g='e';
 union uemp{long int u;
	    char name;
           }uemp1;
 struct emp emp1;

 printf("size of short int %d\n",sizeof(a));
 printf("size of int %d\n",sizeof(b));
 printf("size of long int %d\n",sizeof(c));
 printf("size of float %d\n",sizeof(d));
 printf("size of double %d\n",sizeof(e));
 printf("size of long double %d\n",sizeof(f));
 printf("size of char %d\n",sizeof(g));
 printf("size of struct emp %d\n",sizeof(emp1));
 printf("size of union uemp %d\n",sizeof(uemp1));
 

 return 0;
}

/*
Output of the above program
size of short int 2
size of int 4
size of long int 4
size of float 4
size of double 8
size of long double 12
size of char 1
size of struct emp 8
size of union uemp 4
*/
