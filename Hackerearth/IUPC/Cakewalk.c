#include <stdio.h>
int main()
{
  int n,op=0;
  scanf("%d",&n);
  while(n!=0)
  {
    if(n%2==1)
      op++;
    n/=2;
  }
  printf("%d\n",op);
}
