#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        bool ascending = false, descending = false;
        int total = 0, segmentSize = 1, segment;
        for(int i = 1; i < n; i++) {
            if(a[i] >= a[i-1]) {
                ascending = true;
                descending = false;
                segmentSize++;
            } else if (a[i] < a[i-1]) {
                descending = true;
                ascending = false;
                segment = segmentSize;
                segmentSize--;
            }
            if(segmentSize == 1 && i != 1) {
                total += segment;
            } 
        }
        cout<<total;
    }
}