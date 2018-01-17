#include <stdio.h>
#include <limits.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long int n,k,a[1000000];
    scanf("%ld %ld",&n,&k);
    for(long int i=0;i<n;i++)
    {
      scanf("%ld",&a[i]);
    }
    for(long long int i=0,j=0;i<n*k;i++,j++)
    {
        a[i]=a[j];
        if(j==n-1)
          j=-1;
    }
    long long int max_so_far=INT_MIN,max_ending_here=0,c;
    for(long long int i=0;i<n*k;i++)
    {
      c=a[i];
      max_ending_here = max_ending_here + c;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    printf("%lld\n",max_so_far);
  }
}
