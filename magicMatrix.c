/* Program to check whether a given matrix is magic matrix*/
#include<stdio.h>
int checkMagic(int,int (*)[]);
int main()
{
  int n,i,j;

  printf("Enter the size of matrix\n") ;
  scanf("%d",&n);
   
  int a[n][n];

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
       printf("Enter element %d %d\n",i,j);
       scanf("%d",&a[i][j]);
    }
  }
  
  if( checkMagic(n,a))
      printf("It is a magic matrix\n");
  else
      printf("Not a magic matrix\n");	  
  

 return 0;
}

/* */
int checkMagic(int n,int (*ptr)[n])
{
 int i=0,j=0,checkSum=0,sum=0;
 
 if(n==3)
    checkSum=15;
 else if(n==4)
    checkSum=34;	  
 
 /* Check diagonal of matrix in this \ direction  */
 while(i<n)
 {
   sum+=*(*(ptr+i)+i);	 
   i++;
 }
 
 /*If sum of diagonal is not 34 the return */
 if(sum!=checkSum)
    return 0;

 /*Check diagonal of matrix in this / direction  */
 sum=0;
 i=0;
 while(i<n)
 {
   sum+=*(*(ptr+i)+n-1-i);	 
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
       sum+=*(*(ptr+i)+j);	    
   i++;
   if(sum!=checkSum)
      break;	   
 }
  
 if(sum!=checkSum)
   return 0;	 
 
 /* check columns */
 while(i<n)
 {
   sum=0;	 
   for(j=0;j<n;j++)
       sum+=*(*(ptr+j)+i);	    
   i++;
   if(sum!=checkSum)
      break;	   
 }
  
 if(sum!=checkSum)
  return 0;

 return 1;
}
