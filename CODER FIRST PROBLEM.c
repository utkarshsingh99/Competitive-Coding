#include <stdio.h>
long int recur(long int);
int main()
{
  long int n,ans;
  scanf("%ld",&n);
  ans=recur(n);
  printf("%ld",ans);
}
long int recur(long int n)
{
  if(n%2!=0)
    return 0;
  if(n!=2)
    return 2+recur(n/2);
  if(n==2)
    return 2;

}
