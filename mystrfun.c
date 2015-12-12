#include<stdio.h>
#include<string.h>
 
int mygets2(char *);
int mygets(char *);
int mystrlen(const char *);
const char* mystrcpy(char *,const char*);
int main()
{
  char s1[20],s2[20],s3[20];
  char str[]="hello world";
  mygets2(s1);
  printf("sizeof(str)=%d\n",sizeof(str));
  printf("%s \n",s1);
  printf("length=%d %d\n",mystrlen(s1),strlen(s1));
  printf("%s \n",mystrcpy(s2,s1));
  return 0;
}

int mygets2(char *str)
{
 int i=0;
 char c,p=32;
 while((c=getchar())!='\n' || (!isgraph(p)))
 {
  *(str++)=c;
  p=c;
 }
 *str='\0';

  return i;
}


int mygets(char *str)
{
 int i=0;
 char c;
 while((c=getchar())!='\n')
 {
  *(str++)=c;
 }
 *str='\0';

 return i;
}

int mystrlen(const char *s1)
{
 int len=0;
 
 while(*(s1++))
   len++; 
 
 return len;
}

const char* mystrcpy(char *dest,const char *src)
{
 char *c=dest;
 while((*(dest++))=(*(src++)))

 *dest='\0';
 return c;
}


  
