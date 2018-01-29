#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long long int n,m,fac=1;
    scanf("%lld %lld",&n,&m);
    fac=n-1;
    long long int x=n-1;
    long long int t=x;
    for(long long int i=1;i<n-1;i++)
    {
      fac*=i;
      fac%=1000000007;
    }
    printf("%lld\n",(fac*(n-m+1))%1000000007);
    //printf("%lld\n",(x*(n-m+1))%1000000007);
  }
}
