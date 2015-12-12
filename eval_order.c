#include<stdio.h>

int main()
{

  int a=2,b=5,c=7,d;
  
  d = (++a, ++b, ++c, a+5);
  printf("%d \n",d);

  d = ++a, ++b, ++c, a+5;
  printf("%d \n",d);

  return 0;

}  
/*
output is

8

4
*/
