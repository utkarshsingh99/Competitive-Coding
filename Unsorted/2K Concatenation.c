#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
long long int kadane(long long int a[],long long int start,long long int end);
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    long long int n,k,a[1000000],sum=0;
    scanf("%lld %lld",&n,&k);
    for(int i=0;i<n;i++)
    {
      scanf("%lld",&a[i]);
      sum+=a[i];
      a[n+i]=a[i];
    }
    if(k==1)
    {
      printf("%lld\n",kadane(a,0,n));
      continue;
    }
    if(k==0)
    {
      printf("0\n");
      continue;
    }
    //kadane(a,0,2*n);
    if(sum>=0)
    {
      printf("%lld\n",sum*(k-2)+kadane(a,0,2*n));
    }
    else{
      printf("%lld\n",kadane(a,0,2*n));
    }
  }
}
long long int kadane(long long int a[],long long int start,long long int end)
{
    long long int max_so_far = INT_MIN, max_ending_here = 0;

    for (long long int i = 0; i < end; i++)
    {
      //  printf("%lld\n",a[i]);
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
        //printf("max_so_far= %lld max_ending_here= %lld\n",max_so_far,max_ending_here);
    }
return max_so_far;
}
