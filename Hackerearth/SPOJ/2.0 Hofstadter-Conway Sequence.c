#include <stdio.h>
long long int recur(long long int);
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long long int n,j=0;
    scanf("%lld",&n);
    for(long long int i=1;i<=n;i++)
    {
      j+=recur(i);
    }
    printf("%lld\n",j%1000000000);
  }
}

long long int recur(long long int n)
{
  static int i,a[100000][100000],j;
  long long int m=1000000000;
  j=n/100000;
  a[j][n]=a[j][a[j][n-1]]+a[j][n-a[j][n-1]];
  a[0][1]=1;
  a[0][2]=1;
  if(n==1)
    return 1;
  if(n==2)
    return 1;
  else
    return a[j][a[j][n-1]]+a[j][n-a[j][n-1]];/*+recur(n-1)%m*/
}
