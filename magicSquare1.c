/*Program to generate magic matrix of size 3x3*/
/*using recursive backtracking */
#include<stdio.h>
#define MAX 9


int checkMagic(int,int (*)[]);
void perms(int);

int a[MAX];
int b[MAX];

int main()
{
 int i=3;
 int arr[]={2,7,6,9,5,1,4,3,8};
 
 perms(MAX-1);
 
 return 0;
}

void perms(int n)
{
 int i=0;

 
  if(n>=0)
  {
    for(i=1;i<=MAX;i++)
    { 
       if(b[i]==0)
       {
          b[i]=1;
          a[n]=i;
          perms(n-1);
          b[i]=0;
       }
    } 
  }
  else
  {
     if(checkMagic(3,&a))
     {
        
        for(i=0;i<MAX;i++)
        {
           printf("%d ",a[i]);
           if(((i+1)%3)==0)
              printf("\n");
        }
        printf("\n");
     } 
  }
 
}

/*Check matrix*/
int checkMagic(int n,int (*ptr)[n])
{
 int i=0,j=0,checkSum=0,sum=0;
 
 checkSum=n*(n*n+1)/2;
	  
 
 /* Check diagonal of matrix in this \ direction  */
 while(i<n)
 {
   sum+=*(*ptr+i*n+i);	 
   i++;
 }
 
/*If sum of diagonal is not equal to checkSum then return */
 if(sum!=checkSum)
    return 0;

 /*Check diagonal of matrix in this / direction  */
 sum=0;
 i=0;
 while(i<n)
 {
   sum+=*(*ptr+n*i+n-1-i);	 
   i++;
 }

  
 if(sum!=checkSum)
   return 0;	 

 /*Check each row */
 sum=0;
 i=0;j=0;
 while(i<n)
 {
   sum=0;	 
   for(j=0;j<n;j++)
       sum+=*(*ptr+i*n+j);	    
   i++;
   if(sum!=checkSum)
      break;	   
 }
  
 if(sum!=checkSum)
   return 0;	 
 
 /* check columns */
 i=0;j=0;
 while(j<n)
 {
   sum=0;	 
   for(i=0;i<n;i++)
       sum+=*(*ptr+j+i*n);	    
   j++;
   if(sum!=checkSum)
      break;	   
 }
  
 if(sum!=checkSum)
  return 0;

 return 1;
}
