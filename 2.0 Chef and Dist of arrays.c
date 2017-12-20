#include <stdio.h>
int main()
{
  long int t;
  scanf("%ld",&t);
  while (t--) {
    long int n,a[100000],c,b[100000],ham=0,j;
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%ld",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
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
      b[i]=a[i];
      printf("%ld ",b[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
      a[i]=a[n-i-1]+a[i];
      a[n-i-1]=a[i]-a[n-i-1];
      a[i]=a[i]-a[n-1-i];
    }
    for(int i=0;i<n;i++)
    {
      printf("%ld ",a[i]);
      if(a[i]!=b[i])
        ham++;
    }printf("\n");
    printf("%ld\n",ham);
    for(int i=0;i<n;i++)
    {
      printf("%ld ",a[i]);
    }
    printf("\n");
  }
}
