#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n;
        cin>>n;
        int x[n], y[n], f[n][4];
        int topLimit = 100000, bottomLimit = -100000, leftLimit = -100000, rightLimit = 100000;
        for(int i = 0; i < n; i++) {
            cin>>x[i]>>y[i]>>f[i][0]>>f[i][1]>>f[i][2]>>f[i][3];
            if(f[i][0] == 0) {
                if(x[i] > leftLimit) {
                    leftLimit = x[i];
                }
            }
            if(f[i][1] == 0 && y[i] < topLimit) {
                topLimit = y[i];
            }
            if(f[i][2] == 0 && x[i] < rightLimit) {
                rightLimit = x[i];
            }
            if(f[i][3] == 0 && y[i] > bottomLimit) {
                bottomLimit = y[i];
            }
        }
        // cout<<topLimit<<" "<<bottomLimit<<" "<<leftLimit<<" "<<rightLimit<<"\n";
        if(topLimit >= bottomLimit && leftLimit <= rightLimit) {
            cout<<"1 "<<(leftLimit + rightLimit)/2<<" "<<(topLimit + bottomLimit)/2<<endl;
        } else {
            cout<<"0\n";
        }
    }
}