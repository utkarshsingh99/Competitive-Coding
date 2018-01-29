#include <stdio.h>
int main()
{
  long long int n,y,x,a,i;
  scanf("%lld %lld %lld",&n,&y,&x);
    for(i=1;i<x;i++)
    {
      if((n*(2*i+(n-1)*y))/2==x)
        break;
    }
  if(i==n)
  {
    printf("-1\n");
  }else{
    long long int k=1;
    for(long long int j=i;k<=n;j+=y)
    {
      printf("%lld ",j);
      k++;
    }
  }printf("\n");
}
