#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n, k;
        cin>>n>>k;
        int a[n], oddCount = 0;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            if(a[i]%2 != 0) {
                oddCount++;
            }
        }
        if(oddCount < k) {
            cout<<"NO\n";
            continue;
        } else if(oddCount % 2 == k %2) {
            cout<<"YES\n";
        // } else if((oddCount / k) % 2 != 0) {
        //     if((oddCount % k) % 2 == 0) {
        //         cout<<"YES\n";
        //     }
        } else {
            cout<<"NO\n";
            continue;
        }
        // } else {
        //     cout<<"YES\n";
        // }
        int findOdds = oddCount / k; int ind = 0, print = 0;
        for(int i = 0; i < n; i++) {
            // if(a[i] % 2 != 0){
            //     findOdds--;
            //     if(findOdds == 0 && print != k-1) {
            //         cout<<i+1<<" ";
            //         print++;
            //         findOdds = oddCount / k;
            //     }
            // }
            if(a[i] % 2 != 0 && print != k-1) {
                cout<<i+1<<" ";
                print++;
            }
        }
        if(print == k-1) {
            cout<<n;
        }
        cout<<"\n";
    
    }
}