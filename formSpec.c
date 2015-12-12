#include<stdio.h>

int main()
{
 int x=852;
 float f=1247.34;

 printf("x= %d   with %%d \n",x);
 printf("x= %5d  %%5d \n",x);
 printf("x= %-5d %%-5d \n",x);
 printf("x= %05d %%05d\n",x);

 printf("f= %f with %%f \n",f);
 printf("f=%8.2f with %%8.2f \n",f);
 printf("f=%-8.2f with %%-8.2f \n",f);
 printf("f=%08.2f with %%08.2f \n",f);
 printf("f=%.2f with %%.2f \n",f);
 return 0;
}
