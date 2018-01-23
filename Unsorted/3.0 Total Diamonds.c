#include <stdio.h>
#include <stdlib.h>
int main()
{
  int t;
  long long int m,f,b,c,d,e,j,a[1000000];
  a[6000]=316617489;
  for(long long int n=6000;n<=100000;n++)
  {
    a[n]=0;
    long long int sum=0;
  for(long long int i=n+1;i<=2*n;i++)
  {
    long long int even_sum=0,odd_sum=0;
    f=i%10;
    b=i%100/10;
    c=i%1000/100;
    d=i%10000/1000;
    e=i%100000/10000;
    if(f%2==0)
      even_sum+=f;
    else
      odd_sum+=f;
    if(b%2==0)
      even_sum+=b;
    else
      odd_sum+=b;
    if(c%2==0)
      even_sum+=c;
    else
      odd_sum+=c;
    if(d%2==0)
      even_sum+=d;
    else
      odd_sum+=d;
    if(e%2==0)
      even_sum+=e;
    else
      odd_sum+=e;
    j=abs(even_sum-odd_sum);
    sum+=j;
    if(i==2*n)
    {
      sum*=2;
      sum-=abs(even_sum-odd_sum);
    }
  }
  a[n]+=a[n-1];
  a[n]+=sum;
}
printf("check\n" );
  scanf("%d",&t);
  while (t--) {
    scanf("%lld",&m);
    if(m>=6000)
    printf("%lld\n",a[m]);
    else
    {
      long long int n,room_number,digit,diamonds=0;
      n=m;
      for(long int i=0;i<n;i++)
      {
        for(long int j=0;j<n;j++)
        {
          int even_sum=0,odd_sum=0;
          room_number=i+j+2;
          while(room_number>0)
          {
            digit=room_number%10;
            if(digit%2==0)
              even_sum+=digit;
            else
              odd_sum+=digit;
            room_number/=10;
          }
          diamonds=diamonds+abs(even_sum-odd_sum);
        }
      }
      printf("%lld\n",diamonds);
    }
  }

}
