#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long long int a,b,e,d;
    scanf("%lld %lld",&e,&d);
    a=e,b=d;
    long long int c=d;
    if (a>b)
    {
      while(b>=1)
      {
        if(a%b==0&&d%b==0)
        {
          printf("%lld ",b);
          printf("%lld\n",(e*d)/b);
          break;
        }else
          b--;
      }
    }
    else
    {
      while(a>=1)
      {
        if(b%a==0&&e%a==0)
        {
          printf("%lld ",a);
          printf("%lld\n",(e*d)/a);
          break;
        }else
          a--;
      }
    }
  }
}
