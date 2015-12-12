/*Program to test various types of initailizations to global variables*/
#include<stdio.h>
#include<math.h>

/*Expressions containing any function call is not allowed
 *But expression containing only constants and operators works  
 */
int g1=10+2; /*Correct initialization*/
int g4=10<7?(8*8):(19+3);/*Correct initialization*/
int g5=sizeof(g1);/*Correct initialization*/

//int g2=printf("hello");/*error initializer element is not constant*/
//int g3=10+sqrt(4);/*error initializer element is not constant*/


int main()
{

 printf("Test global variables\n");
 printf("g1=%d\n",g1);
 printf("g4=%d\n",g4);
 printf("g5=%d\n",g5);
 return 0;
}


/*output od above code
Test global variables
g1=12
g4=22
g5=4
*/
