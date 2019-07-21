#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[100], b[100], partyCount = 1, coal = 0, largest = 0;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        // if(largest < a[i] && i != 0) {
        //     largest = a[i];
        // }
        largest += a[i];
    }
    coal = a[0];
    b[0] = 1;
    for(int i = 1; i < n; i++) {
        if(a[i]*2 <= a[0]) {
            coal += a[i];
            b[partyCount] = i+1;
            partyCount++;
        }
    }
    if(coal > largest/2) {
        cout<<partyCount<<endl;
        for(int i = 0; i < partyCount; i++) {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    } else {
        cout<<"0\n";
    }
}