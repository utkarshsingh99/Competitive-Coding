#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long int n,a[10000],op=1;
    scanf("%ld",&n);
    scanf("%ld",&a[0]);
    for(long int i=1;i<n;i++)
    {
      scanf("%ld",&a[i]);
      if(a[i-1]>=a[i])
        op++;
    }
    printf("%ld\n",op);
  }
}
