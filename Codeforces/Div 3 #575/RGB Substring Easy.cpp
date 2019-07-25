/* -------------- NOT SOLVED -------------- */
#include<bits/stdc++.h>
using namespace std;
string formString(char a, int k) {
    string n;
    n[0] = a;
    for(int i = 1; i < k; i++) {
        if(n[i-1] == 'R'){
            n[i] = 'G';
        }
        if(n[i-1] == 'G'){
            n[i] = 'B';
        }
        if(n[i-1] == 'B'){
            n[i] = 'R';
        }
    }
    return n;
}
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n, k;
        cin>>n>>k;
        string nstring[n];
        cin>>nstring;
        int ans = INT_MAX;
        for(int i = 0; i < n-k; i++) {
            string ideal = formString(nstring[i], k);
            int newCost = strcmp(nstring, ideal);
            cout<<newCost;
        }
    }
}