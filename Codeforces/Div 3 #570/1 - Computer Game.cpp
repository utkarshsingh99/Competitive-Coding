#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n, k, a, b;
        cin>>k>>n>>a>>b;
        int x = n, y = 0, count = 0;
        while(true) {
            int flag = 0;
            int battery = k;
            int justplay = x;
            while(justplay > 0 && battery > a) {
                battery -= a;
                justplay--;
            }
            int chargealso = y;
            while(chargealso > 0 && battery > b) {
                battery -= b;
                chargealso--;
            }
            // cout<<battery<<" "<<x<<endl;
            if(x < 0) {
                cout<<"-1"<<endl;
                break;
            }
            if(battery > 0) {
                cout<<x<<endl;
                break;
            } else {
                x--;
                y++;
            }
        }
    }
}