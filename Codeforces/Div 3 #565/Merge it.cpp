#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, a[100], b[3] = {0, 0, 0};
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            if(a[i] % 3 == 1) {
                b[1]++;
            } else if(a[i] % 3 == 2) {
                b[2]++;
            } else {
                b[0]++;
            }
        }
        int ans = min(b[2], b[1]), ans1 = min(b[2], b[1]);
        while(b[1] - ans1 >= 3) {
            b[1]-=3;
            ans++;
        }
        // cout<<b[0]<<", "<<b[1]<<", "<<b[2]<<"\n";
        while(b[2] - ans1 >= 3) {
            b[2] -= 3;
            ans++;
        }
        ans += b[0];
        cout<<ans<<endl;
    }
}