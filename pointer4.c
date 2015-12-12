/*Program to test a void pointer to access structure elements */
#include<stdio.h>

struct emp{
           int i;
           char c,c2;
           float f;
          };

int main()
{
 struct emp e1;
 int i1;
 char c1[3]={68,89,89};
 int i2;

 e1.i=0xef45;
 e1.c='g';
 e1.f=13.45;

 void *v;
 char *c; 
 c=(char *)&e1.i;

 printf("%x\n",*c);
 printf("%x\n",*(++c));
 
 printf("%p %p %p %p\n",&e1,&e1.i,&e1.c,&e1.f);
 
 printf("%d %d\n",sizeof(e1),sizeof(e1.c));
 
 printf("%p %p %p\n",&i1,c1,&i2);
 return 0;
}
