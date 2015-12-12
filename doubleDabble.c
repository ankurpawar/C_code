/*program to test double dabble method to convert binary to bcd*/

#include<stdio.h>

int main()
{
  unsigned int x=0x3ff,bcd=0; 
  
  int i,j,k;
  
  for(i=9;i>=0;i--)
  {
    bcd<<=1;
    if(x&(1<<i))
    {
       bcd|=1;
    } 
   
    for(j=0,k=0;j<4;j++,k+=4)
    {
       if((bcd&(0xf<<k))>(0x4<<k))
         bcd+=0x3<<k;  
    }

    /*if((bcd&0xf)>0x4)
    {
       bcd+=3;
    }
    
    if((bcd&0xf0)>0x40)
    {
       bcd+=0x30;
    }
    
    if((bcd&0xf00)>0x400)
    {
       bcd+=0x300;
    }
    
    if((bcd&0xf000)>0x4000)
    {
       bcd+=0x3000;
    }*/

    

     printf(" bcd=%x \n",bcd);
  }

  printf("x(hex)=%x \nx(dec)=%d \nbcd=%x\n",x,x,bcd); 

  return 0;
}
