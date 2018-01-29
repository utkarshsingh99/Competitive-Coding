#include <stdio.h>
int main()
{
  int tc;
  scanf("%d",&tc);
  while (tc--)
  {
    long int n,k,t,f;
    scanf("%ld %ld %ld %ld",&n,&k,&t,&f);
    printf("%ld\n",n+(k*(f-n))/(k-1));
  }
}
