#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n;
        cin>>n;
        int s[4*n];
        for(int i = 0; i < 4*n; i++) {
            cin>>s[i];
        }
        int a[2*n], counter = 0;
        for(int i = 0; i < 4*n; i++) {
            if(s[i] == -1) {
                continue;
            }
            for(int j = i+1; j < 4*n; j++) {
                if(s[i] == s[j]) {
                    s[j] = -1;
                    a[counter] = s[i];
                    counter++;
                    break;
                }
            }
        }
        // cout<<counter<<"\t"<<n<<endl;
        if(counter != 2*n) {
            cout<<"NO\n";
            continue;
        }
        int numOfRect = counter / 2, flag = 0;
        sort(a, a+counter);
        long int area = a[0]*a[counter-1];
        for(int i = 0; i < numOfRect; i++) {
            if(a[i] * a[counter - i - 1] != area) {
                flag = 1;
                cout<<"NO\n";
                break;
            }
        }
        if(!flag) {
            cout<<"YES\n";
        }
    }
}