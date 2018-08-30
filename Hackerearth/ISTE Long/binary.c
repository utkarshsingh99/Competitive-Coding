#include <stdio.h>
#include <math.h>
int main()
{
  int n,m;
  scanf("%d",&n );
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
      printf("1");
    }else
      printf("0");

  }printf("\n");
}
