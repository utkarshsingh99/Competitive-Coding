#include <stdio.h>
long int Quick(long int ar[],long int start,long int end);
long int Partition(long int ar[],long int start,long int end);
long int swap(long int *a,long int *b);
long int binary(long int ar[],long int low,long int high,long int element);
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long int n,a[1000][1000],sum=0,find,o=0;
    scanf("%ld",&n);
    for(long int i=0;i<n;i++)
    {
      for(long int j=0;j<n;j++)
      {
        scanf("%ld",&a[i][j]);
      }
      Quick(a[i],0,n-1);
    }
    /*for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        printf("%ld",a[i][j]);
      }printf("\n");
    }*/
    sum=a[n-1][n-1];
    long int prev=a[n-1][n-1];
    //printf("%d\n",a[n-1][n]);
    for(long int i=n-2;i>=0;i--)
    {
      for(long int j=n-1;j>=0;j--)
      {
        if(a[i][j]<prev)
        {
          sum+=a[i][j];
          prev=a[i][j];
        //  printf("%ld %ld\n",sum,prev);
          break;
        }
        if(j==0)
        {
          o=1;
          break;
        }
      }
      if(o==1)
        break;
      //printf("%ld %d %d\n",index,a[i][index+1],sum );
    }
    if(o==1)
      printf("-1\n");
    else
      printf("%ld\n",sum);
  }
}
long int Quick(long int ar[],long int start,long int end)
{
  if(start<end)
  {
    long int pIndex=Partition(ar,start,end);
    Quick(ar,start,pIndex-1);
    Quick(ar,pIndex+1,end);
  }
}
long int Partition(long int ar[],long int start,long int end)
{
  long int pivot=ar[end];
  long int t,j=start,k=end-1;
  for(long int i=start;i<=end-1;i++)
  {
    if(ar[i]<pivot)
    {
      swap(&ar[i],&ar[j]);
      j++;
    }
  }
  swap(&ar[end],&ar[j]);
  return j;
}
long int swap(long int *a,long int *b)
{
  long int t=*a;
  *a=*b;
  *b=t;
}
long int binary(long int ar[],long int low,long int high,long int element)
{
  if(low<high)
  {
    long int mid=low+(high-low)/2;
    if(ar[mid]==element)
      return mid-1;
    if(ar[mid]<element)
      return binary(ar,mid+1,high,element);
    else
      return binary(ar,low,mid-1,element);
  }
  return low;
}
