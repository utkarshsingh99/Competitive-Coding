#include <stdio.h>
int main()
{
  typedef long long int ll;
  ll n,i;
  ll a[20]={1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
  ll b[26];
  b[0]=97;
  for(int j=1,k=98;j<26;j++,k++)
  {
    b[j]=b[j-1]+k;
  //  printf("%lld ",b[j-1]);
  }
  scanf("%lld",&n);
  //ll cost=0,sum_of_al=0;
  for(i=0;i<20;i++)
  {
    if(a[i]>=n)
      break;
  }
  printf("%lld\n",b[i]);
}