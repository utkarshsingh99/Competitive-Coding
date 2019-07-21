#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[6] = {0,0,0,0,0,0}, num, count = 0;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>num;
        switch(num) {
            case 4: a[0]++;
                break;
            case 8: if(a[0] < a[1] + 1) {
                count++;
            } else {
                a[1]++;
            }
                break;
            case 15: if(a[1] < a[2] + 1) {
                count++;
            } else {
                a[2]++;
            }
                break;
            case 16: if(a[2] < a[3] + 1) {
                count++;
            } else {
                a[3]++;
            }
                break;
            case 23: if(a[3] < a[4] + 1) {
                count++;
            } else {
                a[4]++;
            }
                break;
            case 42: if(a[4] < a[5] + 1) {
                count++;
            } else {
                a[5]++;
            }
                break;
            default: count++;
        }
    }
    for(int i = 4; i >= 0; i--) {
            if(a[i] > a[i+1]) {
                count += (a[i] - a[i+1]);
                a[i] = a[i+1];
            }
        }
    cout<<count<<endl;
}