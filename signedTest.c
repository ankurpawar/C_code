#include<stdio.h>

int main()
{
  int i=-13;
  unsigned int ui=12,u2;
  
  printf("%d %u \n",i+ui,ui+i^(1<<31) );
  

  return 0;
}
