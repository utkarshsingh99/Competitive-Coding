#include<stdio.h>
#include <string.h>
#include <math.h>
long long int gcd(long long a,long long int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    typedef long long int ll;
    ll b,a=0,j=0,num;
    char s[100000];
    scanf("%lld",&b);
    scanf("%s",s);
    if(b==0)
    {
      printf("%s\n",s);
      continue;
    }
    for(int i=0;i<=strlen(s)-1;i++)
    {
      a=a*10+(s[i]-'0');
      j++;
      a=a%b;
    //  printf("%d\n",((int)s[i])-48);
    }
    ll answer=gcd(b,a);
    printf("%lld\n",answer);
  }
}
