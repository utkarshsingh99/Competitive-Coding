#include<bits/stdc++.h>
using namespace std;
int main() {
    bool prime[10001]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=10000; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=10000; i += p) 
                prime[i] = false; 
        } 
    } 
    int t;
    cin>>t;
    while(t--) {
        int n, a[1000], primey = INT_MIN, flag = 0;
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            int y = a[i];
            if(prime[y]) {
                if(a[i] > primey) {
                    primey = a[i];
                    flag = 1
                }
            }
        }
        if(flag) {
            cout<<primey*primey<<endl;
        } else {
            cout<<"-1\n";
        }
    }
}