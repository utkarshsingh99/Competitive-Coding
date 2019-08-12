#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int xorr = 0;
        int a[n], left[n] = {0}, right[n] = {0};
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            xorr ^= a[i];
        }
        if(xorr != 0) {
            cout<<"0\n";
        } else {
            cout<<(pow(2, n-1) - 1)<<endl;
        }
    }
}