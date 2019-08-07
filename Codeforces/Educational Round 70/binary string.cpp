#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
} 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b;
        cin>>a>>b;
        int x = a, y = b;
        int fonex = 0, foney = 0;
        while(x != 0) {
            fonex++;
            if(x%10 == 1) {
                break;
            }
            x/=10;
        }
        while(y != 0) {
            foney++;
            if(y%10 == 1) {
                break;
            }
            y/=10;
        }
        cout<<fonex<<"\t"<<foney<<endl;
        if(fonex == foney) {
            cout<<"0"<<endl;
            continue;
        }
        if(fonex > foney) {
            cout<<fonex-foney<<endl;
            continue;
        }
        while(fonex <= foney){
            while(x != 0) {
                fonex++;
                if(x%10 == 1) {
                    break;
                }
                x/=10;
                cout<<x<<"\t"<<fonex<<endl;
            }
        }
        cout<<fonex-foney<<endl;
    }
}