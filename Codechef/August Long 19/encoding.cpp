#include<bits/stdc++.h>
using namespace std;
#define MODULO % (long long int) (1000000000 + 7)
long long f(long long num) {
    
}
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
            long long int num = k;
            int d[numOfDigits][2] = {0}, contin = -1, counter = 0;
        // long long int num = l;
            long long int digits = (long long int) log10(num);
            long long powerl = powl(10, digits);
            while(num != 0) {
                int msb = (int)(num / powerl);
                if(msb != contin) {
                    contin = msb;
                    d[counter][0] = msb;
                    d[counter][1] = log10(powerl);
                    counter++;
                }
                num = num % powerl;
                powerl /= 10;
            }
            long long sum = 0;
            for(int i = 0; i < counter; i++) {
                sum = (sum + (d[i][0]*((long long int)powl(10, d[i][1]))MODULO) MODULO) MODULO;
            }
            // cout<<sum<<endl;
            totalSum += sum MODULO;
        }
        cout<<totalSum MODULO<<"\n";
    }
}