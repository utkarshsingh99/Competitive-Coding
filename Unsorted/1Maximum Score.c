#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long int n,a[1000][1000],sum=0,find,o=0;
    scanf("%ld",&n);
    for(long int i=0;i<n;i++)
    {
      for(long int j=0;j<n;j++)
      {
        scanf("%ld",&a[i][j]);

      }
    }
    printf("%ld\n",a[n-1][n]);
  }
}
