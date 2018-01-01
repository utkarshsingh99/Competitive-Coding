#include <stdio.h>
long long int power(long long int,long long int,long long int);
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long long int a,n;
    scanf("%lld %lld",&a,&n);
    long long int i=0,sum1=1,sum2,result= power(a,n,100000000);
      sum1=result;
    while(sum1/10)
    {
      sum2=0;
      while(sum1>0)
      {
        int r=sum1%10;
        sum2+=r;
        sum1/=10;
      }
      sum1=sum2;
    }
    printf("%lld\n",sum1);
  }
}
long long int power(long long int x, long long int y,long long int p)
{
    long long int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
