#include<stdio.h>

int countBit(unsigned int x)
{
    int i,count;
    for(i=0,count=0;i<32;i++)
    {
        if((x>>i)&0x1)
            count++;
    }
    
    return count;
}

int main()
{
  printf("bits in 15=%d\n",countBit(15)); 
  return 0;
}
