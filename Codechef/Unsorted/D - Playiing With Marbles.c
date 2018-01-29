#include <stdio.h>
int main()
{
  while(1)
  {
    long int n, ans=0;
    scanf("%ld",&n);
    if(n==0)
      break;
    for(int i=n;i>=1;i--)
    {
      ans+=5*i;
    }
    if(n!=1)
      printf("%ld\n",ans-1-((n-1)*2));
    else
      printf("%ld\n",ans);
  }
}
