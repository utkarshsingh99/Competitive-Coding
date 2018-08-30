#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>> t;
  while (t--)
  {
    long long int n,a[1000000],op=0;
    cin>> n;
    for(long int i=0;i<n;i++)
    {
      std::cin >> a[i];
    }
    sort(a,a+n);
    for(long int i=0;i<n-1;i++)
    {
      if(a[i]==a[i+1])
      {
        a[i]=a[i]+a[n-1];
        long long int t=a[i];
        a[i]=0;
        n++;
        a[n-1]=t;
      //  cout<<a[n-1]<<"\n";
        op++;
        i--;
    //    for(int j=0;j<n;j++)
      //    cout<<a[i];
      }
    }
    cout<<op;
    cout<<"\n";
  }
}
