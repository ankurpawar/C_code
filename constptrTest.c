/*Test constant pointer*/

#include<stdio.h>

int main()
{
 int x=10;
 const int y=23;
 const int * const p3=&y;
 
 int *pp;
 pp=p3;
 

 int * const p=&x;
 const int *p2=&x; 
 //p=&x;
 //x++;
 //p++;
 printf("%d\n",++x);

 printf("%d %d\n",*p3,++(*pp)); 

 return 0;
}

