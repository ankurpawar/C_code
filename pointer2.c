#include<stdio.h>

int main()
{
   unsigned int a=0x0a0b0c0d;
   unsigned int *b;
   unsigned short int sa,sb;
   unsigned short int *sap,*sab;
   
    
   void *v;
   unsigned char (*cp)[4];
   unsigned char c[4];
   
   b=&a;
   v=b;

   cp=v;

   printf("%x %x %x %x \n",*(*cp+0),*(*cp+1),*(*cp+2),*(*cp+3));   
   
   sap=&sa;
   sab=&sb;

   sap=v;
   sab=sap+1;

   printf("%x %x\n",*(sap),*(sab));
   return 0;
}

