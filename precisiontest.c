/*Program to test comparison operator on floating numbers*/

#include<stdio.h>
#include<math.h>

int main()
{
 int x=2;
 float y=sqrt(4);
 float z=sqrt(0.1225);
 float diff=0.00;
 printf("x=%d \ny=%f \nz=%g \n",x,y,z);

 if(x==y)
    printf("x and y are equal \n");
 else
    printf("x and y are not equal \n");

 if(z==0.35)
    printf("z is equal to 0.35 \n");
 else
    printf("z is not equal to 0.35 \n");

 diff=fabs(x-y);
 if(diff<1e-5)
    printf("x and y are equal \n");
 else
    printf("x and y are not equal \n");
 
 diff=fabs(z-0.35);
 if(diff<1e-5)
    printf("z is equal to 0.35 \n");
 else
    printf("z is not equal to 0.35 \n");

 return 0;
}
/*Output of above code 
x=2 
y=2.000000 
z=0.350000 
x and y are equal 
z is not equal to 0.35 
x and y are equal 
z is equal to 0.35 
*/
