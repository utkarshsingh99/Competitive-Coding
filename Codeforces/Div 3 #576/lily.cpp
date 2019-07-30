#include<bits/stdc++.h>
using namespace std;
int main() {
    long double h, l;
    cin>>h>>l;
    long double b = (l*l - h*h)/(2*h);
    std::cout << std::fixed;
    std::cout << std::setprecision(13);
    cout<<b<<endl;
}