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
        long int c[n+1], h[n+1], r[n+1] = {0}, colrcount = 0;
        for(int i = 1; i <= n; i++) {
            cin>>c[i];
            if(c[i] >= n) {
                colrcount++;
                continue;
            }
            int beg = i - c[i];
            if(beg < 0) {
                beg = 0;
            }
            int end = i + c[i];
            if(end > n) {
                end = n;
            }
            if(beg <= 0 && end >= n) {
                colrcount++;
                continue;
            }
            for(int j = beg; j <= end; j++)
                r[j]++;
        }
        // for(int i = 1; i <= n; i++){
        //     cout<<r[i]<<endl;
        // }
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
            // int found = 0;
            // for(int j = 1; j <= n; j++) {
            //     if(h[i] - r[j] == 0) {
            //         found = 1;
            //         break;
            //     }
            // }
            // if(!found) {
            //     flag = 1;
            //     break;
            // }
        }
        // for(int i = 1; i <= n; i++) {
        //     cout<<h[i]<<"\t"<<r[i]<<endl;
        // }
        if(flag) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
}