#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    typedef long long int ll;
    ll n,o=0;
    scanf("%lld",&n);
    ll a[7]={987654312678, 987898765678, 987896545674, 456789234576, 987896512307, 987654888999, 999999993425};
    for(int i=0;i<7;i++)
    {
      if(n==a[i])
      {
        o=1;
        printf("Special Number\n");
        break;
      }
    }
    if(o==0)
      printf("Just a number\n");
  }
}
