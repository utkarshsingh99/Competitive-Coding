#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int tens = n % 10 - 1;
        int ans = tens*10;
        int count = 0;
        while(n!=0) {
            n /= 10;
            count++;
        }
        int i = 1;
        while (i <= count) {
            ans += i;
            i++;
        }
        cout<<ans<<endl;
    }
}