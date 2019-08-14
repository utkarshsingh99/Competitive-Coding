#include<bits/stdc++.h>
using namespace std;
int main () {
    int q;
    cin>>q;
    while(q--) {
        int n;
        cin>>n;
        vector <int> p;
        int num, start = 0;
        for(int i = 0; i < n; i++) {
            cin>>num;
            if(num == 1) {
                start = i;
            }
            p.push_back(num);
        }
        for(int i = 0; i < n; i++) {
            p.push_back(p[i]);
        }
        int expected = 2, exception = 0, count = 0;
        for(int i = start+1; count != n-1; i++) {
            count++;
            if(p[i] == expected) {
                    expected++;
                    continue;
            } else {
                exception = 1;
                break;
            }
        }
        int rexception = 0;
        if(exception) {
            // Look for reverse order
            for(int i = p.size()-1; i >= 0; i--) {
               if(p[i] == 1) {
                    start = i;
                    break;
                }
            }
            expected = 2;
            count = 0;
            for(int i = start-1; count != n-1; i--) {
                count++;
                if(p[i] == expected) {
                    expected++;
                    continue;
                } else {
                    rexception = 1;
                    break;
                }
            }
        }
        if(exception && rexception) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
}