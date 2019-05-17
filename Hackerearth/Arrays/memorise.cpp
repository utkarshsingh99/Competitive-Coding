#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    long long int a, b[100001] = {0};
    for(int i = 0; i < n; i++) {
        cin>>a;
        b[a]++;
    }
    int q;
    cin>>q;
    long long int c;
    for(int i = 0; i < q; i++) {
        cin>>c;
        if(b[c] > 0)
            cout<<b[c]<<"\n";
        else 
            cout<<"NOT PRESENT\n";
    }
}