#include <stdio.h>
#include <stdlib.h>
long long int add(long long int n);
int main()
{
  add(2);
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
      printf("%lld %lld\n",j,addn);
      addn=addn+abs(even_sum-odd_sum);
    }
    printf("%lld\n",(2*addn)-(2*n));
    return (2*addn)-(2*n);
}
