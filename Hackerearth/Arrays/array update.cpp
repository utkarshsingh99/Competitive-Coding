#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        int a[n], smallest = 1000001;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            if(a[i] < smallest) {
                smallest = a[i];
            }
        }
        if(k < smallest) {
            cout<<"0\n";
        } else{
            cout<<k - smallest<<"\n";
        }
    }
}