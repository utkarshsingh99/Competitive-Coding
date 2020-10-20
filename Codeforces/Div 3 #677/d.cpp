#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        map <int, vector<int>> dist;
        map <int, vector<int>> ::iterator itr;
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            dist[a[i]].push_back(i);
        }
        int count = 0, flag = 0;
        for(itr = dist.begin(); itr != dist.end(); itr++) {
            for(auto j:itr->second) {
                auto k = itr;
                advance(k, 1);
                for(; k != dist.end(); k++) {
                    for(auto l:k->second) {
                        // cout<<j+1<<" "<<l+1<<endl;
                        count++;
                    }
                    if (count > n-1) {
                        flag = 1;
                        break;
                    }
                }
                if (count > n-1) {
                    flag = 1;
                    break;
                }
            }
            if (count > n-1) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout<<"NO\n";
            continue;
        } else {
            cout<<"YES\n";
            count = 0;
        }
        for(itr = dist.begin(); itr != dist.end(); itr++) {
            for(auto j:itr->second) {
                auto k = itr;
                advance(k, 1);
                for(; k != dist.end(); k++) {
                    for(auto l:k->second) {
                        cout<<j+1<<" "<<l+1<<endl;
                        count++;
                        if (count == n-1) {
                            flag = 1;
                            break;
                        }
                    }
                    if (count == n-1) {
                        flag = 1;
                        break;
                    }
                }
                if (count == n-1) {
                    flag = 1;
                    break;
                }
            }
            if (count == n-1) {
                flag = 1;
                break;
            }
        }
    }
}