#include<stdio.h>

int main()
{
  unsigned int x=~0x0;
  unsigned int y;

  y=x+1;
  
  x>>=x;

  printf("%u \n",x);

  x>>=x;

  printf("%u \n",x); 

  
  return 0;
}
