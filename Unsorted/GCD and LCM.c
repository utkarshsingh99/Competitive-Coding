#include <stdio.h>
long long int gcd(long long int,long long int);
int main()
{
  int testcase;
  scanf("%d",&testcase);
  while (testcase--)
  {
    long long int GCD,a,b;
    scanf("%lld %lld",&a,&b);
    GCD=gcd(a,b);
    printf("%lld %lld\n",GCD,(a*b)/GCD);
  }
}
long long int gcd(long long int a,long long int b)
{
  if(a>b)
  {
    a-=b;
    gcd(a,b);
  }
  else
    if(a<b)
    {
      b-=a;
      gcd(a,b);
    }
  else
    if(a==b)
      return a;
}
