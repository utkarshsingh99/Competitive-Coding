#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,a[100000],b[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }
    int m=n;
    for(int i=0;i<n;i++)
    {
      if(b[i]==0)
      {
        for(int j=0;j<n;j++)
        {
          if(a[j]>a[i])
          {
            m--;
            break;
          }
        }
      }
    }
    printf("%d\n",m);
  }
}
