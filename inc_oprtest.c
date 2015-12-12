/*Program to test function call with increment operator*/

#include<stdio.h>

void testFun(int,int,int);
void testFun2(int *,int *,int *);

int main()
{

  int i=4;
  
  printf("in main %d %d %d\n",i++,i++,i++);
  
  i=4;
  printf("in main %d %d %d %d\n",++i,i++,++i,++i);


  i=4;
  testFun(i++,i++,i++); 
	 
  i=4;	  
  testFun(++i,++i,++i); 
   
  return 0;
}


void testFun(int i,int j,int k)
{
  
   printf("in testfun %d , %d ,%d \n",i,j,k);	
  
}

void testFun2(int *i,int *j,int *k)
{
  
   printf("in testfun %d , %d ,%d \n",*i,*j,*k);	
  
}

/*Output of above code
in main 6 5 4
in main 8 6 8 8
in testfun 6 , 5 ,4 
in testfun 7 , 7 ,7 
*/
