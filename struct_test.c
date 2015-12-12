#include<stdio.h>


struct test{int i;};

int main()
{
 struct test T1;
 scanf("%d",&T1); 
 printf("%u ,%u",&T1.i,&T1);


 return 0;
}
