#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long int n;
        cin>>n;
        double z = sqrt(8*n+1);
        int count = 1;
        if(z != (int) z) {
            int k = 2;
            while(z != 0) {
                k++;
                int j = n/k;
                z = sqrt(8*j+1);
            }
        }
        int x = 1 + sqrt(8*n+1);
        x/=2;
        cout<<"1";
        for(int i = 0; i < x; i++) {
            cout<<"3";
        }
        cout<<"7\n";
    }
}