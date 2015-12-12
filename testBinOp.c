#include<stdio.h>

#define BITSET(A,N) ( (A) = (A) | (1 << N) )
#define BITRESET(A,N) ( (A) = (A) & ~(1 << N) )
/*
#define BITGET(A,N)
#define BITSHIFTL(A,N)
#define BITSHIFTR(A,N)
#define BITFLIP(A,N)
*/
int main()
{
  unsigned int a=8,t;
  printf("%x\n",a);
  
  /*t=(a&0x1<<3)>>3;*/

  /*printf("%d\n",a);*/
  BITSET(a,2);  
  printf("%x\n",a);
  BITRESET(a,2);
  /*a=a^(0x1<<0);*/

  printf("%x\n",a);

  printf("%x\n",-1<<2);
  return 0;
} 

