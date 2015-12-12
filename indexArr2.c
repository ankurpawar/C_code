#include<stdio.h>

int main()
{
 int a[5]={11,22,33,44,55};
 int i=0;

 for(i=0;i<5;i++)
 {
  printf("a[%d]=%d\n",i,a[i]);
 }
 
 printf("\n");
 
 for(i=0;i<5;i++)
 {
  printf("*(a+%d)=%d\n",i,*(a+i));
 }

 printf("\n");


 return 0;
}
/*Output
a[0]=11
a[1]=22
a[2]=33
a[3]=44
a[4]=55

*(a+0)=11
*(a+1)=22
*(a+2)=33
*(a+3)=44
*(a+4)=55*/

