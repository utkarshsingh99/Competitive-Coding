#include <stdio.h>

int main()
{
  int t;
  long long int n,output[1000000],x,sum[1000000],asum;
  for(long long int i=1;i<=1000000-1;i++)
  {
    output[i]=0;
    sum[i]=sum[i-1]+i;
    //printf("sum[%lld]: %lld\n",i,sum[i]);
  }
  scanf("%d",&t);
  while (t--) {
    sum[0]=0;
    for(long long int i=1;i<=100000-1;i++)
    {
      output[i]=0;
      //printf("sum[%lld]: %lld\n",i,sum[i]);
    }
    scanf("%lld %lld",&x,&n);
    if(n==1)
    {
      printf("impossible\n");
      continue;
    }
    if(n!=1000000)
      asum=sum[n]-x;
    else
      asum=sum[n-1]+n-x;
    if(asum%2!=0)
    {
      printf("impossible\n");
      continue;
    }
    asum/=2;
    for(long long int i=n;i>=1;i--)
    {
      if(i==x)
        continue;
      if(i<=asum)
      {
        if((asum-i)==x)
          continue;
        asum-=i;
        output[i]=1;
      }
      if(asum<=0)
        break;
    }
    if(asum==0)
    {
      int flag=0;
      if(output[1]==1)
        flag=1;
      for(long long int i=1;i<=n;i++)
      {
        if(flag==1)
        {
          if(output[i]==1)
            output[i]=0;
          else
            output[i]=1;
        }
        if(i==x)
          printf("2");
        else
          printf("%lld",output[i]);
      }
    }
    else
      printf("impossible");
    printf("\n");
  }
}
