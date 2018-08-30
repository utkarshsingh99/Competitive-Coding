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
      long long int dist=0;
      scanf("%lld %lld",&l1,&l2);
      if(l1>l2)
      {
        long long int t=l1;
        l1=l2;
        l2=t;
      }
      if((l2-l1)<=n/2)
      {
      for(long long int m=l1;m<l2;m++)
      {
        dist+=a[m];
      }
      if(dist>(sum-dist))
      {
        dist=sum-dist;
      }
    }
    else{
      for(int m=0;m<l1;m++)
        dist+=a[m];
      for(int m=l2;m<n;m++)
        dist+=a[m];
        if(dist>(sum-dist))
        {
          dist=sum-dist;
        }
    }
      printf("%lld\n",dist);
  }
}
