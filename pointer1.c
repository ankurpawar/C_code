#include<stdio.h>

void testFun(int,int (*));
void testFun2(int ,int ,int (*)[]);
int main()
{
  int a[10]={2,6,5,8,9,10,5,3,6,12};
  int (*pa)[10];

  pa=&a;

  printf("sizeof(pa)=%d\n",sizeof(*pa));
  printf("sizeof(pa)=%d\n",sizeof(**pa));
  printf("sizeof(pa)=%u\n",*pa[1]);
  printf("sizeof(pa)=%d\n",*(*pa+2));

  
  int b[2][3]={{1,2,3},{9,10,11}};
  int (*pb)[2][3];
  pb=&b;
  printf("sizeof(pb)=%d\n",sizeof(*pb));
  printf("sizeof(pb)=%d\n",sizeof(**pb));
  printf("sizeof(pb)=%u\n",sizeof(*pb[1]));
  printf("sizeof(pb)=%d\n",***pb);

  /*testFun2(2,3,b);
  testFun(10,a);*/
  testFun2(1,10,&a);
  return 0;
}  


void testFun2(int n,int m,int (*p)[m])
{
  
  printf("sizeof(p) %d\n",sizeof(p));
  printf("sizeof(*p) %d\n",sizeof(*p));
  printf("sizeof(**p)%d\n",sizeof(**(p)));
  printf("%d\n",*(*p+1));
}

/*void testFun(int n,int (*p))
{
  int k=0;
  printf("%d\n",sizeof(p));
  printf("%d\n",sizeof(*p));
  (printf("%d\n",*(p+0));

}*/
