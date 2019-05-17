#include<bits/stdc++.h>
using namespace std;
int main() {
    long int n, q;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    char num[n+1];
    for(int i = 0; i < n; i++) {
        cin>>num[i+1];
        if(num[i+1] == ' ') {
            i--;
        }
    }
    for(int i = 0; i < q; i++) {
        int a, b, c;
        cin>>a;
        if(a == 1) {
            cin>>b;
            if(num[b] == '1')
                num[b] = '0';
            else
                num[b] = '1';
        } else {
            cin>>b>>c;
            if(num[c] == '0' || c > n) {
                cout<<"EVEN\n";
            } else {
                cout<<"ODD\n";
            }
        }
    }
}