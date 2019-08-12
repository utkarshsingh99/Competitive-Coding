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
        long int c[n+1], h[n+1], r[n+1] = {0}, colrcount = 0, a[n+1]={0}, b[n+1] = {0};
        for(long int i = 1; i <= n; i++) {
            cin>>c[i];
            int beg = (i - c[i] < 1) ? 1 : (i-c[i]);
            a[beg]++;
            int end = (i + c[i] > n) ? n : (i + c[i]);
            b[end]++;
        }
        int bus = 0;
        for(int i = 1; i <= n; i++) {
            bus += a[i];
            r[i] += bus;
            bus -= b[i];
        }
        for(int i = 1; i <= n; i++) {
            cin>>h[i];
        }
        sort(h+1, h+n+1, greater<int>());
        sort(r+1, r+n+1, greater<int>());
        int flag = 0;
        for(int i = 1; i <= n; i++) {
            if(h[i] - r[i] != colrcount) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
}