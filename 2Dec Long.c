#include <stdio.h>
int main()
{
  typedef long long int ll;
  ll n,t,q,i,xk,a[100000];
  scanf("%lld %lld",&n,&q);
  for(ll i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
  }
  for(ll m=0;m<q;m++)
  {
    ll num=0,xor=0;
    scanf("%lld %lld %lld",&t,&i,&xk);
    if(t==1)
      a[i-1]=xk;
    if(t==2)
    {
      for(ll j=0;j<i;j++)
      {
        xor=xor^a[j];
        if(xor==xk)
          num+=1;
      }
      printf("%lld\n",num);
    }
  }
}
