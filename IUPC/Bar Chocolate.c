#include <stdio.h>
int main()
{
  long int n,m,a[100000];
  scanf("%ld %ld",&n,&m);
  for(long int i=0;i<n*m;i++)
  {
    scanf("%ld",&a[i]);
    if(a[i]=='?')
      a[i]=-1;
  }

}
