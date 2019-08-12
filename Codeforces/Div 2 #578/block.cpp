#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m, k;
        cin>>n>>m>>k;
        int h[n];
        for(int i = 0; i < n; i++) {
            cin>>h[i];
        }
        string flag = "YES";
        for(int i = 0; i < n-1; i++) {
            if(h[i] <= h[i+1]) {
                if(h[i+1] - h[i] >  m + k) {
                    flag = "NO";
                    break;
                } else {
                    m -= h[i+1] - h[i] - k;
                    if(m < 0) {
                        flag = "NO";
                        break;
                    }
                }
            } else {
                int add = min(h[i] - h[i+1] + k, h[i]);
                m+= add;
            }
        }
        cout<<flag<<endl;
    }
}