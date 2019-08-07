#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string a, b;
        cin>>a>>b;
        int anum[a.size()], bnum[b.size()], acounter = 0, bcounter = 0;
        for(int i = a.size(); i >= 0; i--) {
            if(a[i] == '1') {
                anum[acounter] = a.size() - i;
                acounter++;
            }
        }
        for(int i = b.size(); i >= 0; i--) {
            if(b[i] == '1') {
                bnum[bcounter] = b.size() - i;
                bcounter++;
            }
        }
        if(anum[0] >= bnum[0]) {
            cout<<anum[0]-bnum[0]<<endl;
            continue;
        }
        int i = 0;
        while(i <= a.size()) {
            // cout<<anum[i]<<endl;
            if(bnum[0] <= anum[i]) {
                cout<<anum[i]-bnum[0]<<endl;
                break;
            }
            i++;
        }
    }
}