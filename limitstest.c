/*Program to find the range of different data types*/
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
	/*Signed*/
	printf("Range of char is      %10d to %-10d \n",CHAR_MIN,CHAR_MAX);
	printf("Range of int  is      %10d to %-10d \n",INT_MIN,INT_MAX);
	printf("Range of short int is %10d to %-10d \n",SHRT_MIN,SHRT_MAX);
	printf("Range of long int is  %10d to %-10d \n",LONG_MIN,LONG_MAX);
	printf("Range of long long is %20lld to %-20lld \n",LLONG_MIN,LLONG_MAX);
        printf("\n");

	/*Unsigned*/
	printf("Range of unsigned char is      %u to %-10u \n",0,UCHAR_MAX);
	printf("Range of unsigned int  is      %u to %-10u \n",0,UINT_MAX);
	printf("Range of unsigned long is      %u to %-10u \n",0,ULONG_MAX);
	printf("Range of unsigned short int is %u to %-10u \n",0,USHRT_MAX);
	printf("Range of unsigned long long is %llu to %-20llu \n",0ll,ULLONG_MAX);
	printf("\n");

	/*Floating point*/
         
	printf("Range of float  is          %10.9e  to %-10.9e \n",FLT_MIN,FLT_MAX);
	printf("Range of double is          %10.9e  to %-10.9e \n",DBL_MIN,DBL_MAX);
       	printf("Range of long double is     %10.9Le to %-10.9Le \n",LDBL_MIN,LDBL_MAX);

        printf("\n");	
	return 0;
}

/* Output of the above code is  
Range of char is                      -128 to 127        
Range of int  is               -2147483648 to 2147483647 
Range of short int is               -32768 to 32767      
Range of long int is           -2147483648 to 2147483647 
Range of long long is -9223372036854775808 to 9223372036854775807  

Range of unsigned char is      0 to 255        
Range of unsigned int  is      0 to 4294967295 
Range of unsigned long is      0 to 4294967295 
Range of unsigned short int is 0 to 65535      
Range of unsigned long long is 0 to 18446744069414584320  

Range of float  is           1.175494351e-38  to 3.402823466e+38 
Range of double is          2.225073859e-308  to 1.797693135e+308 
Range of long double is     3.362103143e-4932 to 1.189731495e+4932 
*/

