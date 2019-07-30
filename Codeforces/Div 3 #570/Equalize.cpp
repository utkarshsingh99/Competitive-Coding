#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        long int n, k;
        cin>>n>>k;
        long int a[n], largest = INT_MIN, smallest = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            if(a[i] < smallest) {
                smallest = a[i];
            }
            if(a[i] > largest) {
                largest = a[i];
            }
        }
        int b = smallest + k;
        if(largest - k <= b) {
            cout<<b<<endl;
        } else {
            cout<<"-1\n";
        }
    }
}