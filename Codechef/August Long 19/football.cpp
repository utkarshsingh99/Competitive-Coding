#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n], b[n], largest = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        for(int i = 0; i < n; i++) {
            cin>>b[i];
            largest = max(a[i]*20 - b[i]*10, largest);
        }
        if(largest < 0) {
            largest = 0;
        }
        cout<<largest<<endl;
    }
}