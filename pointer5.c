/*some pointer notations*/

#include<stdio.h>

int main()
{ 
 int a[4]={11,22,33,44},b=98;

 int *p=&b,*q=*(&a+1)-1;


 printf("%u %u %u %d\n",&a,*(&a+1),q,*q);

 printf("%d %d\n",sizeof(&a+1),sizeof((&a+1)-1));



 return 0;
}
