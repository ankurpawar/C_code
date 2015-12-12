/*Code to test some array subscript notations*/
#include<stdio.h>

int main()
{
  int a[7]={11,22,33,44,55,66,77};
  //int arr[][]={10,20,30,40,50,60};
  /*all the notations a[i],i[a],*(a+i) are similar because
    internally a[i] is converted to *(a+i) and
    i[a] is converted to *(i+a),and both are same.*/
  printf("a[%d]=%d\n",4,a[4]);
  printf("%d[a]=%d\n",4,4[a]);
  printf("*(a+%d)=%d\n",4,*(a+4));

  return 0;
}
/*Output
a[4]=55
4[a]=55
*(a+4)=55
*/
