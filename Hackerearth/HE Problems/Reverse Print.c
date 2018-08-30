#include <stdio.h>
int quick(int *,int,int);
int partition(int *,int,int);
int swap(int *,int *);
int main()
{
  int n,a[100];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  quick(a,0,n-1);
  for(int i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
}
int quick(int a[],int start,int end)
{
  if(start<end)
  {
    int pIndex=partition(a,start,end);
    quick(a,start,pIndex-1);
    quick(a,pIndex+1,end);
  }
}
int partition(int a[],int start,int end)
{
  int pivot=a[end];
  int i,j=start-1;
  for(i=start;i<=end-1;i++)
  {
    if(a[i]<=pivot)
    {
      j++;
      swap(&a[i],&a[j]);
    }
  }
  swap(&a[i+1],&a[end]);
  return i;
}
int swap(int *a,int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
