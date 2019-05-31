#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int a[n], smallest = INT_MAX, largest = -1, profit = 0, add = false;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(smallest > a[i]) {
            add = false;
            smallest = a[i];
        } else if (a[i] >= largest) {
            largest = a[i];
        } else if (a[i] < largest) {
            add = true;
            profit += (largest - smallest);
            smallest = INT_MAX;
            largest = -1;
        }
        if(i == n-1 && !add) {
            profit += (largest - smallest);
        }
    }
    cout<<profit*k<<endl;
}