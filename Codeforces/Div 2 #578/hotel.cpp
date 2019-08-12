#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string a;
    cin>>a;
    int r[10] = {0};
    for(int i = 0; i < n; i++) {
        int leftCounter = 0, rightCounter = 9;
        if(a[i] == 'L') {
            // if(r[leftCounter] == 0) {
            //     r[leftCounter] = 1;
            //     continue;
            // }
            while(r[leftCounter] != 0) {
                leftCounter++;
            }
            r[leftCounter] = 1; 
        } else if(a[i] == 'R') {
            // if(r[rightCounter] == 0) {
            //     r[rightCounter] = 1;
            //     continue;
            // }
            while(r[rightCounter] != 0) {
                rightCounter--;
            }
            r[rightCounter] = 1; 
        } else {
            r[a[i]-48] = 0;
        }
    }
        for(int i = 0; i < 10; i++) {
        cout<<r[i];
    }cout<<endl;
    
}