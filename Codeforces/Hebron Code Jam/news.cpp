#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 0;
    while(n--) {
        string input;
        cin>>input;
        if(input == "left") {
            count--;
        } else if (input == "right") {
            count++;
        } else {
            count+=2;
        }
    }
    switch(abs(count)%4) {
        case 0: cout<<"north"<<endl;
            break;
        case 1: cout<<"east"<<endl;
            break;
        case 2: cout<<"south"<<endl;
            break;
        case 3: cout<<"west"<<endl;
            break;
        default: break;
    }
}