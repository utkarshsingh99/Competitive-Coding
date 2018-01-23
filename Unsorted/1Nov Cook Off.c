#include <stdio.h>
#include <math.h>
int main()
{
  int testcase;
  scanf("%d",&testcase);
  while (testcase--) {
    long long int ans[100000],n,dprod[5]={1,1,1,1,1},q,d[100000],x[100000],j=0;
    scanf("%lld %lld",&n,&q);
    for(int i=0;i<n;i++)
    {
       scanf("%lld",&d[i]);
       if(dprod[j]>pow(10,15))
        j++;
       dprod[j]*=d[i];
     }
     for(int i=0;i<q;i++)
     {
       scanf("%lld",&x[i]);
       ans[i]=x[i]/dprod[0];
       for(j=1;j<5;j++)
        ans[i]=ans[i]/dprod[j];
     }
     for(int i=0;i<q;i++)
     {
       printf("%lld ",ans[i]);
     }
     printf("\n");
  }
}
