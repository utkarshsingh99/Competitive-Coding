#include <stdio.h>
int Quick(long long int *,long long int *,long long int,long long int);
long long int Partition(long long int t[],long long int ar[],long long int start,long long int end);
int swap(long long int *,long long int *);
int main()
{
  long long int n,t[100000],s[100000],t1[100000],s1[100000];
  scanf("%lld",&n);
  for(long long int i=0;i<n;i++)
  {
    scanf("%lld %lld",&t[i],&s[i]);
    t1[i]=t[i];
    s1[i]=s[i];
  }
  Quick(t,s,0,n-1);
  Quick(s1,t1,0,n-1);
 // for(long int i=0;i<n;i++)
   // printf("%ld %ld\n",t1[i],s1[i]);
  long long int sum=0,sum1=0,m=n,k=0;
  for(long long int i=0;i<n;i++)
  {
    sum+=s[i];
    n-=t[i];
  }
 // printf("%lld\n",sum);
 // for(long int i=0;i<m;i++)
   //printf("%ld %ld\n",t1[i],s1[i]);
  for(long long int i=m-1;i>=k;i--)
  {
    sum1+=s1[i];
    k+=t1[i];
   // printf("%lld %lld\n",sum1,k);
  }
  //printf("%lld\n",sum1);
    if(sum1<sum)
      sum=sum1;
  printf("%lld\n",sum);
}
int Quick(long long int t[],long long int ar[],long long int start,long long int end)
{
  if(start<end)
  {
    long long int pIndex=Partition(t,ar,start,end);
    Quick(t,ar,start,pIndex-1);
    Quick(t,ar,pIndex+1,end);
  }
}
long long int Partition(long long int t[],long long int ar[],long long int start,long long int end)
{
  long long int pivot=ar[end];
  long long int j=start,k=end-1;
  for(long long int i=start;i<=end-1;i++)
  {
    if(ar[i]<pivot)
    {
      swap(&ar[i],&ar[j]);
      swap(&t[i],&t[j]);
      j++;
    }
  }
  swap(&ar[end],&ar[j]);
  swap(&t[end],&t[j]);
  return j;
}
int swap(long long int *a,long long int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
