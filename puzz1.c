#include<stdio.h>
#include<stdlib.h>

int main()
{
      int a=1;
      switch(a)
      {   
          
          case 1: a+1;
                  int b=2;
                  printf("b is %d\n",b);
                  break;
          default:printf("b not is %d\n",b);
                  break;
      }
      return 0;
}
