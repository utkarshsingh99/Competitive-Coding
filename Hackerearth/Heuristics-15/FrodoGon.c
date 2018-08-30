#include <stdio.h>
#include <stdlib.h>
int main()
{
  long long int n,q,a[100000],b[100000],l1,l2,sum=0;
  scanf("%lld %lld",&n,&q);
  for(long long int i=0;i<n;i++)
  {
    b[i]=0;
    scanf("%lld",&a[i]);
    if(i!=0)
      b[i]=b[i-1]+a[i];
    else
      b[i]=a[i];
    sum+=a[i];
  }
  //for(long long int i=0;i<n;i++)
  //{
  //    printf("%ld ",b[i]);
//  }printf("\n");
  for(long long int i=0;i<q;i++)
  {
    long long dist;
      scanf("%lld %lld",&l1,&l2);
      l1%=n;
      l2%=n;
      if(l1==0)
      {
        dist=a[l1];
      }else
      if(l2==0)
      {
        dist=a[l1];
      }else
        dist=abs(b[l2-1]-b[l1-1]);
      long long int rem=sum-dist;
      if(rem<dist&&rem>=0)
      {
        dist=rem;
      }
      printf("%lld\n",dist);
  }
}
