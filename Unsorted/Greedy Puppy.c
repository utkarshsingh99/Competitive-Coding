#include <stdio.h>
int main()
{
  int testcase;
  scanf("%d",&testcase );
  while (testcase--) {
    long int n,k,ans=0;
    scanf("%ld %ld",&n,&k);
    while(k>0)
    {
      if(n%k>ans)
        ans=n%k;
      k--;
    }
    printf("%ld\n",ans);
  }
}
