/*Program to test function pointers*/

#include<stdio.h>


int prod(int,int);
int sum(int,int);
int testFun(int,int,int (*)(int,int));

typedef int (*pftype)();

int main()
{
 int i=0,x=5,y=8;
 pftype fp1;
 fp1=sum;
 printf("The sum is %d\n",fp1(20,30));
  i=test(x,y,sum);
  printf("The sum of %d,%d is %d\n",x,y,i);


  i=test(x,y,prod);
  printf("The product of %d,%d is %d\n",x,y,i);

  

 return 0;
}

int test(int x,int y,int (*fp)(int,int))
{
 
return fp(x,y); 

}

int sum(int x,int y)
{
  return(x+y);
}

int prod(int x,int y)
{
  return(x*y);
}



