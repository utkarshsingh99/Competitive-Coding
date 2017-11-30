#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    double n,a[1000],twice[1000],half[1000];
    int count=0;
    scanf("%lf",&n);
    for(int i=0;i<(long long int)n;i++)
    {
      scanf("%lf",&a[i]);
      twice[i]=a[i]*2;
      half[i]=a[i]/2;
      for(int j=0;j<(long long int)i;j++)
      {
        if(twice[j]==a[i]||half[j]==a[i])
          count+=1;
      }
    }
    printf("%d\n",count);
  }
}
