#include <stdio.h>
int main()
{
  long int n,a[10000],q,power[10000],num=0,sum=0;
  scanf("%ld",&n);
  for(long int i=0;i<n;i++)
    scanf("%ld",&a[i]);
  scanf("%ld",&q);
  for(long int i=0;i<q;i++)
  {
    scanf("%ld",&power[i]);
    sum=0;
    num=0;
    for(long int j=0;j<n;j++)
    {
      if(power[i]>=a[j])
      {
        num++;
        sum+=a[j];
      }
    }
    printf("%ld %ld\n",num,sum);
  }
}
