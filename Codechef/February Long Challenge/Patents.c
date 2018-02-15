#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    typedef long long int ll;
    ll n,m,x,k,EVEN=0,ODD=0,od,eve,YES=0;
    char a[1000000];
    scanf("%lld %lld %lld %lld",&n,&m,&x,&k);
    scanf("%s",a);
    for(ll i=0;i<k;i++)
    {
      if(a[i]=='E'||a[i]=='e')
        EVEN++;
      if(a[i]=='O'||a[i]=='o'||a[i]=='0')
        ODD++;
    }
    for(ll i=1;i<=m;i++)
    {
      if(i%2==0)
      {
        if(EVEN>x)
        {
          EVEN=EVEN-x;
          n-=x;
        }
        else{
          n-=EVEN;
          EVEN=0;
        }
      }else{
        if(ODD>x)
        {
          ODD-=x;
          n-=x;
        }else{
          n-=ODD;
          ODD=0;
        }
      }
      if(n<=0)
      {
        YES=1;
        break;
      }
    }
    /*if(EVEN<x)
      eve=EVEN;
    else
      eve=x;
    if(ODD<x)
      od=ODD;
    else
      od=x;
    ll total=eve*(m/2)+od*((m+1)/2);*/
    if(YES)
      printf("yes\n" );
    else
      printf("no\n");
  }
}
