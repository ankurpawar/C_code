/*program to test double dabble method to convert binary to bcd*/
/*and bcd to ascii ,5f5e0ff*/

#include<stdio.h>

int main()
{
  unsigned int x=0x5f5e0ff;
  unsigned int bcd=0; 
   
  int i,j,k;
  
  for(i=31;i>=0;i--)
  {
    for(j=0,k=0;j<8;j++,k+=4)
    {
       if((bcd&(0xf<<k))>(0x4<<k))
         bcd+=(0x3<<k);  
    }
    bcd<<=1;
    if(x&(1<<i))
    {
       bcd|=1;
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

  printf("99999999=%x x(hex)=%x \nx(dec)=%d \nbcd(hex)=%x bcd(dec)=%u\n",99999999,x,x,bcd,bcd); 

  return 0;
}
