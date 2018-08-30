#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  std::cin >> t;
  while (t--) {
    long int n,h,a[100000],k,count=0,large=99999999999999;
    long long int sum=0;
    std::cin >> n>>h;
    for(int i=0;i<n;i++)
    {
      std::cin >> a[i];
      sum+=a[i];
    }
    sort(a,a+n);
    int l=1;
    for(int i=sum/(h+1);i<=sum/h;i++)
    {
      //cout<<i<<" "<<sum/h<<"\n";
      count=0;
      for(int j=0;j<n;j++)
      {
        count+=(a[j]/i);
        if(a[j]%i)
          count++;
        else
          count++;
      }
      if(count==h)
      {
        k=i;
        break;
      }
    }

    std::cout << k << '\n';
  }
}
