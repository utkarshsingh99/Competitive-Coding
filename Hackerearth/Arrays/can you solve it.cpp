#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n, a[100000];
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int largest = a[n - 1], smallest = a[0], sum = INT_MIN, smallIndex = 0, largeIndex = n - 1;
        for(int i = 0; i < n; i++) {
            // int sum1 = abs(largest - a[i]) + abs(largeIndex - i), sum2 = abs(largest - a[n - 1 - i]) + abs(largeIndex - n + 1 + i),
            //     sum3 = abs(a[i] - smallest) + abs(i - smallIndex), sum4 = abs(a[n - 1 - i] - smallest) + abs(n - 1 - i - smallIndex),
            //     sum5 = abs(largest - smallest) + abs(largeIndex - smallIndex);
            if(smallest >= a[i] && abs(i - smallIndex) <= smallest - a[i]) {
                smallest = a[i];
                smallIndex = i;
            }
            // if(smallest > a[n - 1 - i]) {
            //     smallest = a[n - 1 - i];
            //     smallIndex = n - 1 - i;
            // }
            if(largest <= a[n - 1 - i] && abs(largeIndex - n + 1 + i) <= a[n - 1 - i] - largest) {
                largest = a[n - 1 - i];
                largeIndex = n - 1 - i;
            }
            // if(largest < a[i]) {
            //     largest = a[i];
            //     largeIndex = i;
            // }
            int sum1 = abs(largest - smallest) + abs(largeIndex - smallIndex);
            if(sum1 > sum) {
                sum = sum1;
            }
            // if(sum2 > sum) {
            //     sum = sum2;
            // }
            // if(sum3 > sum) {
            //     sum = sum3;
            // }
            // if(sum4 > sum) {
            //     sum = sum4;
            // }
            // if(sum5 > sum) {
            //     sum = sum5;
            // }
        }
        cout<<sum<<"\n";
    }
}