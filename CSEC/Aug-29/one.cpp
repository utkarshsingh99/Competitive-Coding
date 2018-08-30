#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll n, k;
  cin>>n>>k;
  while(k!=0) {
    k--;
    if(n%10!=0){
      n--;
    }else{
      n/=10;
    }
  }
  cout<<n<<endl;
}
