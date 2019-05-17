#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    map<int, int> mp;
    map<int, int>::iterator itr;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int a;
        cin>>a;
        itr = mp.find(a);
        if(itr != mp.end()) {
            itr->second++;
        } else {
            mp.insert({a, 0});
        }
    }
    int max = 0, val = mp.begin()->first;
    for(itr = mp.begin(); itr != mp.end(); itr++) {
        if(max < itr->second) {
            max = itr->second;
            val = itr->first;
        }
    }
    cout<<val<<"\n";
}