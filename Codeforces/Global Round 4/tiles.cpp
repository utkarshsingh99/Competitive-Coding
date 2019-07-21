#include<bits/stdc++.h>
using namespace std;
int main() {
    int w, h;
    cin>>w>>h;
    int ans = (4*(int)pow(2, w-1)*(int)pow(2, h-1)) % 998244353;
    cout<<ans<<endl;
}