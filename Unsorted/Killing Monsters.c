#include <stdio.h>
int main()
{
  typedef long long int ll;
  ll n,h[200000],q,x,y,op;
  scanf("%lld",&n);
  for(ll i=0;i<n;i++)
    scanf("%lld",&h[i]);
  scanf("%lld",&q);
  op=n;
  for(ll z=0;z<q;z++)
  {
    scanf("%lld %lld",&x,&y);
    op-=x;
  /*  for(ll k=0;k<n;k++)
    {
     //printf("k&x=%lld k=%lld h[k]=%lld y=%lld\n",k&x,k,h[k],y);
      if((k&x)==k&&(h[k]>0))
      {  h[k]-=y;
      if(h[k]<=0)
        op--;
      }
     //printf("h[k]=%lld op=%lld\n",h[k],op);
   }*/
    printf("%lld\n",--op);
  }
}
