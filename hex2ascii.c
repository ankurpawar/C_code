/*program to test double dabble method to convert binary to bcd*/
/*and bcd to ascii ,5f5e0ff*/

#include<stdio.h>

int main()
{
  unsigned int x=0x5f5e0ff;
  unsigned int d=0; 
  char c[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; 
  char ascii[9];
  int i,j,k;
  
  for(i=7;i>=0;i--)
  {
     ascii[i]=c[(x>>d)&0xf];
     d+=4;
  }
  ascii[9]='\0';
  printf("x=%x(hex) x=%d x=%s(ascii)\n",x,x,ascii); 

  return 0;
}
