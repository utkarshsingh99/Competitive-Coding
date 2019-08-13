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
            int add = max(0, h[i+1]-k);
            m += h[i] - add;
            if(m < 0) {
                flag="NO";
            }
        }
        cout<<flag<<endl;
    }
}