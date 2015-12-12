/*Program to test const pointers */

#include<stdio.h>

int main()
{
 
 int x=67;
 int y=89;

 int *p1; 
 p1=&x;/*Address of x assigned to pointer p1*/
 p1=&y;/*Address of y assigned to pointer p1*/
 /*Value pointed by p1 can be incremented as 
  *well as pointer itself can be incremented 
  *so *p1=20,p++,(*p)++,p=&y works*/	 

 
 int const* p2;
 /*Pointer p2 is pointing to a constant integer.
   We can change the pointer p2 but cannot change 
   the value in the variable pointed by p2 */ 
 p2=&x; /*valid*/
 p2=&y; /*valid*/

 /*(*p2)++;*/ /*Invalid:increment to read only location*/

 printf("%d\n",*p2);


 int* const p3 = &x; /*same as const int *p3=&x*/
 /*p3=&y;*/ /*p3 is constant pointer and will always point to a x*/
 (*p3)++; /*value at address p3 can be changed*/

 printf("%d\n",*p3);

 const int * const p4 = &x;
 
 /*p4++;*/    /*invalid*/
 /*(*p4)++;*/ /*invlaid*/
 /*Both the operations are invalid.Value pointed by p3 cannot be
  *changed.Address in pointer cannot be changed*/


 return 0;
}


