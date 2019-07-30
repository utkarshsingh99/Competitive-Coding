#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long int a[1000];
    for(int i = 0; i < n; i++) {
        // cout<<"Okay?";
        cin>>a[i];
    }
    // cout<<"Array";
    int q, type, rec=0;
    cin>>q;
    for(int i = 0; i < q; i++) {
        cin>>type;
        if(type == 1) {
            int p, x;
            cin>>p>>x;
            a[p-1] = x;
        } else {
            int x;
            cin>>x;
            if(x > rec) {
                rec = x;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] > rec) {
           cout<<a[i]<<" ";
        } else {
           cout<<rec<<" ";
        }
    }
    cout<<endl;
}