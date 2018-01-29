#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long int n,a[100000],b[100000],del;
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%ld",&a[i]);
      del=a[0];
      if(i>1)
      {
        if(a[i]>a[i-1])
          del=a[i-1];
          break;
      }
      if(i==1)
      {
        if(a[i]>a[i-1])
          del=a[i];
          break;
      }
    }
    printf("%ld\n",del);
  }
}
