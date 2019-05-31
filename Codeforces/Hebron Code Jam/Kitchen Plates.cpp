#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[5][2];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 2; j++) 
            a[i][j] = 0;
    }
    for(int i = 0; i < 5; i++) {
        char str[3];
        cin>>str;
        if(str[1] == '<') {
            a[str[0] - 65][0]++; 
            a[str[2] - 65][1]++;
        } else {
            // cout<<str[0]-65<<" ";
            a[str[0] - 65][1]++;
            a[str[2] - 65][0]++;
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 2; j++) {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}