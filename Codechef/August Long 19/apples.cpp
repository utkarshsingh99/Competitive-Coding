#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long int n, k;
        cin>>n>>k;
        if(n/k < k) {
            cout<<"YES";
        } else if((n/k)%k == 0) {
            cout<<"NO";
        } else {
            cout<<"YES";
        }
        cout<<endl;
    }
}