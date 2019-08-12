#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int contg = 0, count = 0, cocount = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1' && !contg) {
                contg = 1;
                count++;
            } else if(s[i] == '1' && s[i-1] == '1') {
                count++;
            } else if((s[i] == '0' && contg == 1)) {
                contg = 0;
                cocount += count;
                count = 0;
            }
;        }
        cocount += count;
            // cout<<contg<<"\t"<<count<<"\t"<<cocount<<"\n";
        if(cocount % 2 == 0) {
            cout<<"LOSE\n";
        } else {
            cout<<"WIN\n";
        }
    }
}