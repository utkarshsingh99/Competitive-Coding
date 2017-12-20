#include <stdio.h>
int main()
{
  int testcase;
  scanf("%d",&testcase);
  while (testcase--) {
    long long int m,x,y,even[100000],odd[100000],j=0;
    scanf("%lld",&m);
    /*for(long long int i=1;i<=m;i+=2)
    {
      odd[j]=i;
      j++;
    }
    j=0;
    for(long long int i=1;i<=m;i+=2)
    {
      even[j]=i;
      j++;
    }
    */
    scanf("%lld %lld",&x,&y);
    printf("%lld\n",m^(m-1));
  }
}
