#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int maxTop = 0, maxBottom = 0, maxLeft = 0, maxRight = 0;
        int top = 0, left = 0, right = 0, bottom = 0;
        for(int i = 0; i < s.size() ; i++) {
            if(s[i] == 'W') {
                bottom--;
                top++;
                if(top > maxTop) {
                    maxTop = top;
                }
            }
            if(s[i] == 'S') {
                top--;
                bottom++;
                if(bottom > maxBottom) {
                    maxBottom = bottom;
                }
            }
            if(s[i] == 'D') {
                left--;
                right++;
                if(right > maxRight) {
                    maxRight = right;
                }
            }
            if(s[i] == 'A') {
                right--;
                left++;
                if(left > maxLeft) {
                    maxLeft = left;
                }
            }
        }
        // cout<<maxBottom<<"\t"<<maxTop;
        int length = maxBottom+maxTop+1;
        int breadth = maxLeft+maxRight+1;
        // cout<<length<<"\t"<<breadth<<endl;
        if((length == 1 && breadth == 2) || (length == 2 && breadth == 1)) {
            cout<<length*(breadth)<<endl;
            continue;
        }
        if(length < breadth) {
            cout<<(length-1)*breadth<<endl;
        } else if(length > breadth) {
            cout<<(breadth - 1)*length<<endl;
        } else {
            cout<<length * breadth<<endl;
        }
    }
}