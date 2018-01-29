#include <stdio.h>
#include <stdlib.h>
long long int rfact(long int, long int);
long long int fact(long int);
int main()
{
  int tc;
  scanf("%d\n",&tc);
  while(tc--)
  {
    long long int a,b,m=100000007,ans;
    scanf("%lld %lld",&a,&b);
    ans=(fact(a)-fact(b));
    if(ans<0)
    {  ans=abs(ans)%m;
      printf("%lld\n",-ans);
    }
    else
    {  ans=abs(ans)%m;
      printf("%lld\n",ans);
    }
  }
}
long long int rfact(long int a, long int b)
{
  long long ans=1,m=100000007;
  for(int i=b+1;i<=a;i++)
  {
    ans*=i;
    ans%=m;
  }
  return ans;
}
long long int fact(long int n)
{
  if(n>135)
    return 0;
  int a[2000]; //array will have the capacity to store 200 digits.
  int i,j,temp,m,x,mod=1000000007;
  long long int factorial=0;
  a[0]=1;  //initializes array with only 1 digit, the digit 1.
  m=1;    // initializes digit counter

  temp = 0; //Initializes carry variable to 0.
  for(i=1;i<=n;i++)
  {
       for(j=0;j<m;j++)
       {
          x = a[j]*i+temp; //x contains the digit by digit product
          a[j]=x%10; //Contains the digit to store in position j
          temp = x/10; //Contains the carry value that will be stored on later indexes
       }
        while(temp>0) //while loop that will store the carry value on array.
        {
          a[m]=temp%10;
          temp = temp/10;
          m++; // increments digit counter
        }
        if(m==14)
          break;
 }
 for(i=m-1;i>=0;i--) //printing answer
 factorial=factorial*10+a[i];
  return factorial%mod;
}
