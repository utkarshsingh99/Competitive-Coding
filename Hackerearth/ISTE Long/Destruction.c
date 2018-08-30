#include <stdio.h>
int main()
{
  int flag,count=0;
  for(long long int i=1;i<1000000000;i++)
  {
    flag=0;
    long long int n=i,x;
    while(n!=0)
    {
      x=n%10;
      if(x!=8&&x!=9)
      {
        flag=1;
        break;
      }
      n/=10;
    }
    if(flag==0)
      count++;
      //printf("%lld,",i);

  }printf("%d\n",count );
}
