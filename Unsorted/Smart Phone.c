#include <stdio.h>
long long int quick(long long int ar[],long long int, long long int );
long long int partition(long long int ar[],long long int start,long long int end);
long long int swap(long long int *a,long long int *b);
int main()
{
  long long int n,a[1000000],max=0,sum=0;
  scanf("%lld",&n);
  for(long long int i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
  /*if(a[i]<smallest)
    {
      smallest=a[i];
    }*/
  }
  quick(a,0,n-1);
  for(long long int i=0;i<n;i++)
  {
    sum=a[i]*(n-i);
    if(sum>max)
      max=sum;
  }
  printf("%lld\n",max);
}
long long int quick(long long int ar[],long long int start,long long int end)
{
  if(start<end)
  {
    long long int pIndex=partition(ar,start,end);
    quick(ar,start,pIndex-1);
    quick(ar,pIndex+1,end);
  }
  return -1;
}
long long int partition(long long int ar[],long long int start,long long int end)
{
  long long int pivot=ar[end],j=start;
  for(long long int i=start;i<=end-1;i++)
  {
    if(ar[i]<pivot)
    {
      swap(&ar[i],&ar[j]);
      j++;
    }
  }
  swap(&ar[j],&ar[end]);
  return j;
}
long long int swap(long long int *a,long long int *b)
{
  long long int t=*a;
  *a=*b;
  *b=t;
}
