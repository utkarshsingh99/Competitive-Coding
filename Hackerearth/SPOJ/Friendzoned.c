#include <stdio.h>
int main()
{
  long long int n,q,l,r,ans;
  long long int ar[100000];
  scanf("%lld %lld",&n,&q);
  for(int i=0;i<n;i++)
  {
    scanf("%lld",&ar[i]);
  }
  for(int i=0;i<q;i++)
  {
    scanf("%lld %lld",&l,&r);
    if(r-l+1==1)
      printf("%lld\n",ar[l-1]);
      else
        printf("0\n");


      /*long int num=(r-l+1)%4;
      if(num==1)
        ans=1;
      if(num==2)
        ans=r-l+2;
      if(num==3)
        ans=0;
      if(num==0)
        ans=r-l+1;
      printf("%lld\n",ans );*/
  }
}
