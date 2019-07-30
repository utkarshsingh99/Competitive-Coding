#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        int k, n, a, b;
        cin>>k>>n>>a>>b;
        int x = k/a - 1;
        int d = k - a*x;
        int y = d/b;
        while(x+y < n) {
            x--;
            d = k - a*x;
            y = d/b - 1;
        }
        if(x < 0) {
            x = -1;
        }
        if(x > n) {
            x = n;
        }
        cout<<x<<endl;
    }
}