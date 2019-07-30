#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y;
    cin>>n>>x>>y;
    long int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    long int smallest = a[0];
    for(int i = 0; i < n; i++) {
        int flag = 0;
        int xcount = x, ycount = y;
        while(xcount > 0) {
            if(i-xcount < 0) {
                xcount--;
                continue;
            }
            // cout<<i<<" "<<xcount<<" "<<a[i-xcount]<<" "<<a[i]<<endl;
            if(a[i-xcount] > a[i]) {
                xcount--;
                continue;
            } else {
                flag = 1;
                break;
            }
            xcount--;
        }
        // cout<<endl;
        while(ycount>0) {
            if(ycount + i >= n) {
                ycount--;
                continue;
            }
            // cout<<i<<" "<<ycount<<" "<<a[i+ycount]<<" "<<a[i]<<endl;
            if(a[i+ycount] > a[i]) {
                ycount--;
                continue;
            } else {
                flag = 1;
                break;
            }
            ycount--;
        }
        if(flag == 0) {
            cout<<i+1<<endl;
            break;
        }
    }
}