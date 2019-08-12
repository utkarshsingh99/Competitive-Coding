#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m, k;
        cin>>n>>m>>k;
        int h[n+1];
        for(int i = 1; i <= n; i++) {
            cin>>h[i];
        }
        int flag = 1;
        for(int i = 1; i < n; i++) {
            if(h[i] >= h[i+1]) {
                int reqdHeight = h[i+1] - k;
                if(reqdHeight < 0) {
                    reqdHeight = 0;
                }
                int heightDiff = h[i] - reqdHeight;
                m += heightDiff;
            } else {
                if(h[i+1] - h[i] - k <= m) {
                    int needed = max(h[i+1] - k - h[i], 0);
                    m = m - needed;
                } else {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}