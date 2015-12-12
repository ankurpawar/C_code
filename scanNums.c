#include<stdio.h>

int main()
{
 char *str="34.5+56.3+345.3";
 float f[3];
 char c;
 sscanf(str,"%f%[+-/*%]",f,&c);
 printf("%f %c\n",f[0],c);

 return 0;
}
