#include <stdio.h>
long int binary(long int *,long int ,long int ,long int);
long int quick(long int *,long int,long int);
long int partition(long int *,long int,long int);
long int swap(long int *,long int *);
int main()
{
  long int n,ar[100000],sum[100000],q,power[10000];
  scanf("%ld",&n);
  for(long int i=0;i<n;i++)
  {
    scanf("%ld",&ar[i]);
  }
  quick(ar,0,n-1);
  scanf("%ld",&q);
  sum[0]=ar[0];
  for(long int i=0;i<n;i++)
  {
    if(i>0)
    sum[i]=sum[i-1]+ar[i];
  }
  for(long int i=0;i<q;i++)
  {
    scanf("%ld",&power[i]);
    long int match=binary(ar,0,n-1,power[i]);
    printf("%ld %ld\n",match+1,sum[match]);
  }
}
long int binary(long int ar[],long int low,long int high,long int element)
{
  if(low<=high)
  {
    long int mid=low+(high-low)/2;
    //if(ar[mid]==element)
      return mid;
    if(ar[mid]<element)
      return binary(ar,mid+1,high,element);
    else
      return binary(ar,low,mid-1,element);
  }
  return low;
}
long int quick(long int ar[],long int low,long int high)
{
  if(low<high)
  {
    long int pIndex=partition(ar,low,high);
    quick(ar,low,pIndex-1);
    quick(ar,pIndex+1,high);
  }
}
long int partition(long int ar[],long int low,long int high)
{
    long int pivot=ar[high],j=low;
    for(long int i=low;i<=high-1;i++)
    {
      if(ar[i]<pivot)
      {
        swap(&ar[i],&ar[j]);
        j++;
      }
    }
    swap(&ar[j],&ar[high]);
    return j;
}
int swap(long int *a,long int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
