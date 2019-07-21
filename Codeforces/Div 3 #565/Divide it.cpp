#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        long long int a, count = 0, flag = 0;
        cin>>a;
        while(a != 1) {
            if(a % 2 == 0) {
                a/= 2;
                count++;
            } else if (a % 3 == 0) {
                a = (2*a)/3;
                count++;
            } else if (a % 5 == 0) {
                a = (4*a)/5;
                count++;
            } else {
                flag = 1;
                break;
            }
        }
        flag ? cout<<"-1\n" : cout<<count<<endl;
    }
}