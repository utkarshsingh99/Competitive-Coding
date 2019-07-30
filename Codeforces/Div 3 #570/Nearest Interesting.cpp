#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, s = 0;
    cin>>a;
    int d = a;
    while(a>0) {
        s+=a%10;
        a/=10;
    }
    a = d;
    int c = s;
    while(s%4!=0) {
        a++;
        int d = a;
        s = 0;
        while(d > 0) {
            s+= d%10;
            d/=10;
        }

    }
    cout<<a<<endl;
}