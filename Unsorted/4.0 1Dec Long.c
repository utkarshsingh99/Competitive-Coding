#include <stdio.h>
#include <stdlib.h>
long long int add(long long int);
int main()
{
  long long int diamonds[10000];
  diamonds[1]=2;
  for(long long int i=2;i<=10000;i++)
  {
    diamonds[i]=diamonds[i-1]+add(i);
  }
  int testcases;
  scanf("%d",&testcases);
  while (testcases--) {
    long int n;
    scanf("%ld",&n);
    printf("%lld\n",diamonds[n]);
  }
}
  long long int add(long long int n)
  {
    long long int addn=0;
      for(long long int j=n+1;j<=2*n;j++)
      {
        long long int i=j,even_sum=0,odd_sum=0,digit;
        while(i>0)
        {
          digit=i%10;
          if(digit%2==0)
            even_sum+=digit;
          else
            odd_sum+=digit;
          i/=10;
        }
        addn=addn+abs(even_sum-odd_sum);
      }
      return (2*addn)-(2*n);
  }
