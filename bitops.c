#include<stdio.h>

int main()
{
   int a=0x45,n,t;

   /*set n'th bit*/
   n=1;
   t=a|(0x1<<n);
   printf("%x\n",t);

   /*reset n'th bit*/
   n=1;
   t=a&(~0x1<<n);
   printf("%x\n",t);

   /*flip n'th bit*/
   n=7;
   t=a^(0x1<<n); 
   printf("%x\n",t);

   /*Query n'th bit*/
   n=6;

   t=(a&0x1<<n)>>n;
   printf("%x %x\n",a,t);

   return 0;
}
/*
 *47
 *44
 *c5
 *1
 */
