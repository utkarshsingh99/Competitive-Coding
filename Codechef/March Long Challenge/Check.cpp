#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>> t;
  while (t--)
  {
    long int n,a[100000],op=0;
    cin>> n;
    for(int i=0;i<n;i++)
    {
      std::cin >> a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
      if(a[i]==a[i-1])
      {
        a[i]=a[i]+a[n-1];
        sort(a,a+n);
        op++;
      }
    }
    cout<<op;
    cout<<"\n";
  }
}
