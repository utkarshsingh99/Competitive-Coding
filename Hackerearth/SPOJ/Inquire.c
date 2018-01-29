#include <stdio.h>
int main()
{
  long long int n,p[100005],sum[100005],query,a,b;
  scanf("%lld",&n);
  sum[0]=0;
  p[0]=0;
  for(long long int i=1;i<n+1;i++)
  {
    scanf("%lld",&p[i]);
    sum[i]=sum[i-1]+p[i];
}
  scanf("%lld",&query);
  for(long long int i=0;i<query;i++)
  {
      scanf("%lld %lld",&a,&b);
      printf("%lld\n",sum[b]-sum[a-1]);
  }
}
