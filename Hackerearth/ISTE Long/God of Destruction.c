#include <stdio.h>
#include <math.h>
int main()
{
  long long int n,m,flag,i,b[100000];
  b[0]=0;
  for(i=1;i<100;i++)
  {
    b[i]=pow(2,i)+b[i-1];
  //  printf("%lld ",b[i]);
  }
  scanf("%lld",&n);
  for(i=1;i<100;i++)
  {
    if(n<=b[i])
    {
      m=b[i-1];
      break;
    }
  }
  n=n-m;
  //printf("n %lld\n",n);
  for(int i=0;;i++)
  {
    if(pow(2,i)>=n)
    {
      m=i;
      break;
    }
  }
  for(;m>=0;m--)
  {
    if(n>=pow(2,m))
    {
      n-=pow(2,m);
      printf("9");
    }else
      printf("8");

  }
  printf("\n");
}
