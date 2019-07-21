#include<bits/stdc++.h>
using namespace std;
long long int power(int z, unsigned int y) 
{ 
    long long int x = 1;
    while(y--) x = (z*x)%998244353;
    return x;
}
int main() {
    int w, h;
    cin>>w>>h;
    int ex = w+h;
    long long int x = 1;
    while(ex--) {
        x = (2*x)%998244353;
    }
    cout<<x<<endl;
}