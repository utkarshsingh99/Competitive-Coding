#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long int ans=0,n,i,m,l=2;
    scanf("%ld",&n);
    m=n+1;
    for(i=2;i<=n+1;i++)
    {
      for(int j=l;j<=m;j++)
      {
        ans+=j;
      }
      l++;
      m--;
    }
    printf("%ld\n",ans);
  }
}
