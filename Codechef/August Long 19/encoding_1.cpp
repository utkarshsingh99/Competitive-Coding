#include<bits/stdc++.h>
using namespace std;
#define MODULO % (long long int) (pow(10, 9) + 7)
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int nl, nr;
        long long int l, r;
        cin>>nl>>l;
        cin>>nr>>r;
        int numOfDigits = max(nl, nr);
        long long int totalSum = 0;
        for(long long int k = l; k <= r; k++) {
            long long int num[numOfDigits], number = k;
            int d[numOfDigits][2] = {0}, contin = -1, counter = 0;
            while(number != 0) {
                
            }
            for(int i = 0; i < counter; i++) {
                totalSum = (totalSum + (d[i][0]*((long long int)pow(10, d[i][1]))MODULO) MODULO) MODULO;
            }
        }
        cout<<totalSum MODULO<<"\n";
    }
}