#include <stdio.h>
#include <stdlib.h>
long long int binary(long long int ar[],long long int low,long long int high,long long int element);
int main()
{
  int t;
  unsigned long long int i,j,limit=1000000;
  long long int prime[100000],m=0;
int *primes;
int z = 1;
primes = malloc(sizeof(int) * limit);
for (i = 2;i < limit; i++)
    primes[i] = 1;
for (i = 2;i < limit; i++)
    if (primes[i])
        for (j = i;i * j < limit; j++)
            primes[i * j] = 0;
            for (i = 2;i < limit; i++)
            {
              if (primes[i])
              {  prime[m]=i;
                m++;
              }
            }
          //for(i=0;i<100;i++)
            //printf("%lld\n",prime[i]);
  scanf("%d",&t);
  while (t--) {
    long long int j;
    scanf("%lld",&j);
    long long int fact=1,n,mod,index;
    index=binary(prime,0,m-1,j);
    mod=prime[index+1];
    //printf("%lld\n",mod);
    for(n=1;n<=j;n++)
    {
      fact*=n;
      fact%=mod;
    }
    printf("%lld\n",fact);
  }
}
long long int binary(long long int ar[],long long int low,long long int high,long long int element)
{
  if(low<high)
  {
    long long int mid=low+(high-low)/2;
    if(ar[mid]==element)
      return mid;
    if(ar[mid]<element)
      return binary(ar,mid+1,high,element);
    else
      return binary(ar,low,mid-1,element);
  }
  return low;
}
