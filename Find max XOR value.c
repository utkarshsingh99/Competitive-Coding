#include <stdio.h>
int main()
{
  long long int l,r,xor=0;
  scanf("%lld %lld",&l,&r);
  for(long long int i=l+1;i<=r;i++)
  {
    if((i^(i-1))>xor)
      xor=i^(i-1);
  }
  printf("%lld\n",xor);
}
