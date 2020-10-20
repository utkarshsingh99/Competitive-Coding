#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n], maxi = INT_MIN, index = -1;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            maxi = max(maxi, a[i]);
        }
        for(int i = 0; i < n; i++) {
            if (a[i] == maxi) {
                if (i != 0)
                   if (a[i-1] < maxi) {
                        index = i;
                        break;
                    }
                if (i != n-1)
                    if (a[i+1] < maxi) {
                        index = i;
                        break;
                    }
            }
        }
        if (index != -1)
            index++;
        cout<<index<<endl;
    }
}