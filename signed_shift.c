/*Shift operators in signed and unsigned variables*/

#include<stdio.h>

int main()
{
 char i=-8;
 unsigned char ui=0xA;
 
 /*The shift operator preserves the sign of signed numbers.
   When left shift is done zero is inserted on LSB side.
   When right shift is done ones are inserted  on MSB side*/
 printf("%d>>2=%d\n",i,i>>2);
 printf("%d<<2=%d\n",i,i<<2);
 

 /*The shift operator insert zero on MSB when right shift is done
   and zero on LSB side when left shift is done*/
 printf("%d>>2=%d\n",ui,ui>>2);
 printf("%d<<2=%d\n",ui,ui<<2);
 
 return 0;
}
/*Output

-8>>2=-2
-8<<2=-32
10>>2=2
10<<2=40

*/
