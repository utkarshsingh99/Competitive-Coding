#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>
long long int rightsum(long long int a[],long long int start,long long int end);
long long int kadane(long long int a[],long long int start,long long int end);
long long int max(long long int a,long int b)
{
  if(a>b)
    return a;
  return b;
}
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long long int n,k,a[100000],l,sum=0,left_sum=0,large_left=INT_MIN;
    scanf("%lld %lld",&n,&k);
    for(long long int i=0;i<n;i++)
    {
      scanf("%lld",&a[i]);
      left_sum+=a[i];
      sum+=a[i];
      if(left_sum>large_left)
        large_left=left_sum;
        //printf("%lld %lld\n",left_sum,large_left);
    }
    if(k==1)
    {
      printf("%lld\n",kadane(a,0,n));
    }
    if(sum>=0)
    {
      sum=sum*(k-1);
      long long int add=max(large_left,rightsum(a,0,n));
      //printf("%lld %lld\n",left_sum,rightsum(a,0,n));
      sum+=add;
      printf("%lld\n",sum);
    }
    else{
      printf("%lld\n",kadane(a,0,n));
    }
}
}
long long int kadane(long long int a[],long long int start,long long int end)
{
    long long int max_so_far = INT_MIN, max_ending_here = 0;

    for (long long int i = 0; i < end; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
return max_so_far;
}
long long int rightsum(long long int a[],long long int start,long long int end)
{
  long long int right_sum=0,large_right=INT_MIN;
  for(long long int i=end-1;i>=start;i--)
  {
    right_sum+=a[i];
    if(large_right<right_sum)
      large_right=right_sum;
      //printf("right_sum: %lld large_right: %lld\n",right_sum,large_right);
  }
  return large_right;
}
