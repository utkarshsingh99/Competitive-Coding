#include <bits/stdc++.h>
using namespace std;
int main()
{
  string name;
  int n;
  cin>>n;
  cin>>name;
  string a[200];
  int num[200];
  map<string, int> mp;
  for(int i = 0; i < name.length() - 1; i++){
     mp[name.substr(i, 2)]++;
  }
  auto x = std::max_element(mp.begin(), mp.end(),
      [](const pair<string, int>& p1, const pair<string, int>& p2) {
          return p1.second < p2.second; });
  cout<<x->first<<endl;
}
