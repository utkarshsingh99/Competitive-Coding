#include <stdio.h>
int Quick(int *,int,int);
int Partition(int ar[],int start,int end);
int swap(int *,int *);
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    int n,k[100000],sum[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&k[i]);
    }
   Quick(k,0,n-1);
/*    long long int cost=0;
    while(n!=1)
    {
      int j=0;
    for(int i=0;i<n;i++,j++)
    {
      sum[j]=k[i]+k[i+1];
      cost+=k[i]+k[i+1];
      i++;
      cost%=1000000007;
    }
    for(int i=0;i<j;i++)
    {
      k[i]=sum[i];
    }
    n=j;
  }
*/
    long long int o=k[0]+k[1];
    k[1]=k[0]+k[1];
    //printf("%d %d \n",k[0],k[1]);
    for(int i=2;i<n;i++)
    {
      o+=k[i-1]+k[i];
      k[i]=k[i-1]+k[i];
      o%=1000000007;

      for(long int f=i;f<n;f++)
      {
        if(k[i]<k[f])
        {
          int p=k[i],u;
          for(u=i+1;u<f;u++)
          {
            k[u-1]=k[u];
          }
          k[u-1]=p;
          break;
        }
        if(f==n-1){
          int p=k[i],u;
          for(u=i+1;u<n;u++)
          {
            k[u-1]=k[u];
          }
          k[u-1]=p;
          break;
        }
      }
  //  printf("%lld %d\n",o,k[i]);
    }
    //if(cost>o)
    printf("%lld\n",o%1000000007);
  //else
    //printf("%lld\n",cost%1000000007);
}

}
int Quick(int ar[],int start,int end)
{
  if(start<end)
  {
    int pIndex=Partition(ar,start,end);
    Quick(ar,start,pIndex-1);
    Quick(ar,pIndex+1,end);
  }
}
int Partition(int ar[],int start,int end)
{
  int pivot=ar[end];
  int t,j=start,k=end-1;
  for(int i=start;i<=end-1;i++)
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
int swap(int *a,int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
