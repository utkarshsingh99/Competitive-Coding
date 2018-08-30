#include <stdio.h>
long long int gcd(long long int,long long int);
int main()
{
  long long int n,a[1000000],m,largest=10000000;
  scanf("%lld",&n);
  for(long long int i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
    if(i>=1)
    {
      m=gcd(a[i],m);
      if(largest>m)
      {
        largest=gcd(m,largest);
      //  printf("%lld\n",largest);
      }
    }else{
      if(i==0)
        m=a[i];
    }
  }
  printf("%lld",largest*n);
}
long long int gcd(long long int a,long long int b)
{

  if(a<b)
    return gcd(a,b-a);
  if(a>b)
    return gcd(a-b,b);
  if(a==b)
    return a;
}
