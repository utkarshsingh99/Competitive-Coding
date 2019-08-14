#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n;
        cin>>n;
        int p[n+1], start = 1;
        for(int i = 1; i <= n; i++) {
            cin>>p[i];
            if(p[i] == 1) {
                start = i;
            }
            if(i == n) {
                p[0] = p[i];
            }
        }
        int i = start;
        int forward = 0;
        if(p[i+1] == 2) {
            forward = 1;
        } else if(p[i-1] == 2) {
            forward = 0;
        } else {
            if(i == n) {
                if(p[n-1] == 2) {
                    forward = 0;
                } else if(p[1] == 2) {
                    forward = 1;
                }
            } else if(n != 1) {
                cout<<"NO\n";
                continue;
            }
        }
        int outputFlag = 0;
        if(forward == 1) {
            // cout<<"Here";
            int currentVal = 1;
            i++;
            while(p[i] != 1) {
                if(p[i] != currentVal + 1) {
                    cout<<"NO\n";
                    outputFlag = 1;
                    break;
                }
                if(i == n) {
                    i = 1;
                    currentVal++;
                } else {
                    currentVal++;
                    i++;
                }
            }
        } else {
            int currentVal = 1;
            i--;
            while(p[i] != 1) {
                // cout<<p[i]<<"\t"<<i<<endl;
                if(p[i] != currentVal + 1) {
                    cout<<"NO\n";
                    outputFlag = 1;
                    break;
                }
                if(i == 0) {
                    i = n-1;
                    currentVal++;
                } else {
                    currentVal++;
                    i--;
                }
            }
        }
        if(!outputFlag)
            cout<<"YES\n";
    }
}