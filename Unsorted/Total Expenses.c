#include <stdio.h>
int main()
{
  int testcase;
  scanf("%d",&testcase );
  while (testcase--) {
    long int quantity,price;
    scanf("%ld %ld",&quantity,&price);
    if (quantity>1000) {
      printf("%lf",(double)(price*quantity)*(0.9));
    }else
      printf("%lf",(double)(price*quantity));
      printf("\n");
  }
}
