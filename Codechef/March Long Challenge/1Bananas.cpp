#include<bits/stdc++.h>
using namespace std;
long int binary(long int ar[],long int low,long int high,long int element)
{
//  printf("Low: %d\tHigh: %d\n",low,high);
  if(high>=low)
  {
    int mid=low+(high-low)/2;
  //  printf("Mid: %d\tar[mid]: %d\n",mid,ar[mid]);
    if(ar[mid]==element)
      return mid;
    if(ar[mid]<element)
      return binary(ar,mid+1,high,element);
    if(ar[mid]>element)
      return binary(ar,low,mid-1,element);
  }
  return low-1;
}
int main()
{
  int t;
  cin>>t;
  while (t--) {
    long int n,h,a[100000],ans,count,hours;
    cin>>n>>h;
    for (long int i = 0; i < n; i++) {
      std::cin >> a[i];
    }
    sort(a,a+n);
    for(long int i=a[n-1];i>0;i--)
    {
      hours=0;
      long int last=binary(a,0,n-1,i);
      for(int k=last;k>=0;k--)
      {
        if(a[last]==a[k])
          last=k;
        else{
          break;
        }
      }
      for(long int j=n-1;j>=last;j--)
      {
        hours+=a[j]/i;
        if(a[j]%i)
          hours++;
      }
      hours+=last;
      if(hours>h)
      {
        ans=i+1;
        break;
      }
    }
    cout<<ans<<"\n";
  }
}
