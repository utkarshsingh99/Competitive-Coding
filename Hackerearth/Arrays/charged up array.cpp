#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long int a[n], limit = pow(2, n-1), total = 0;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            if(a[i] >= limit) {
                total += (a[i]%1000000007);
                total %= 1000000007;
            }
        }
        if(n>=64) {
            cout<<"0"<<endl;
        } else{
            cout<<total<<endl;
        }
    }
}