#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector <int> a, c;
    vector<int> :: reverse_iterator j;
    int num;
    for(int i = 0; i < n; i++) {
        cin>>num;
        a.push_back(num);
    }
    int largest = 0;
    for(j = a.rbegin(); j <= a.rend(); j++) {
        if(largest <= *j) {
            c.push_back(*j);
            largest = *j;
        }
    }
    for(j = c.rbegin();j <= c.rend() - 1;j++) {
        cout<<*j<<" ";
    }
    cout<<"\n";
}