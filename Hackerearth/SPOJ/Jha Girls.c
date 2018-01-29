#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    int n,a[32],k=0,m=5;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      if(i%2!=0)
      {
          a[i]=k+1;
          k++;
      }
      else{
        a[i]=m;
        m--;
      }
    }
    for(int i=1;i<=n;i++)
    {
      printf("%d %d\n",i,a[i]);
    }
  }
}
