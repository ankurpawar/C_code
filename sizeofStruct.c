#include<stdio.h>

struct S{};

int main()
{
  struct S s1,s2; 

  printf("sizeof s=%u %X %X",sizeof(s1),&s1,&s2);
  return 0;
}
