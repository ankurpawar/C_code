#include<stdio.h>
int main()
{	 
	int a[5]={10,20,30,40,50},b=87;
	int *p=a, *q=*(&a+1)-1;             	
      
	printf("%d\n",*p++);

	 printf("%d\n",*++p);

	 printf("%d\n",(*p)++);

	 printf("%d\n",++(*p));

	 printf("%d\n",++*p);

	 printf("%d\n",*(p++));

	 printf("%d\n",*(++p));

	 printf("%d\n",*q--);

	 printf("%d\n",*--q);

         printf("%d\n",(*q)--);

	 printf("%d\n",--(*q));
	 
	 printf("%d\n",--*p);

	 printf("%d\n",*(q--));

	 printf("%d\n",*(--p));
	 return 0;
}
/*Output of code
the precedence  of * ,-- and ++ unary operators are same.
So when any two of these come in an expression ,they are evaluated
according to associativity.Which is right to left.
10
30
30
32
33
33
50
50
33
33
31
49
31
40
*/
