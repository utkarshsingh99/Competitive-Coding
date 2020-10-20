#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        bool yes = false;
        int first, last;
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            if (!yes) {
                if (a[i] == 1) {
                    yes = true;
                    first = i;
                }
            }
            if (a[i] == 1) {
                last = i;
            }
        }
        int count = 0;
        for(int i = first; i < last; i++) {
            if (a[i] == 0) {
                count++;
            }
        }
        cout<<count<<endl;
    }   
}