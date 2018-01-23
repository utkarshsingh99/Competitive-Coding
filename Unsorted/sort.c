#include <stdio.h>
int main()
{
  long int n,a[1000];
  scanf("%ld",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%ld",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(a[j]<a[j+1])
      {
        a[j+1]=a[j]+a[j+1];
        a[j]=a[j+1]-a[j];
        a[j+1]=a[j+1]-a[j];
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    printf("%ld ",a[i]);
  }
}
