#include<stdio.h>

int main()
{
 int a[2]={5,6},b=45;

 printf("%p %p\n",a,&b);
 
 printf("%d",*(a+2));
return 0;
}
