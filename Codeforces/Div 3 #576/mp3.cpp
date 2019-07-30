#include<bits/stdc++.h>
using namespace std;
int main() {
    long int n, I;
    cin>>n>>I;
    long int a[n], b[n][2], bcount = 1, val[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(i==0) {
            b[0][0] = a[i];
            b[0][1] = 1;
            val[0] = 1;
        } else {
            int bcounter = 0, flag = 0;
            // cout<<a[i]<<" "<<bcount<<endl;
            while(bcounter != bcount) {
                if(b[bcounter][0] == a[i]) {
                    b[bcounter][1]++;
                    val[bcounter] = b[bcounter][1];
                    flag = 1;
                    break;
                } else {
                    bcounter++;
                }
            }
            if(bcounter == bcount && flag == 0) {
                b[bcount][0] = a[i];
                b[bcount][1] = 1;
                val[bcount] = b[bcount][1];
                bcount++;
            }
        }
    }
    int countDistinct = bcount;
    long long int K = pow(2, (8*I)/n), sum = 0;
    // cout<<K<<" "<<countDistinct<<endl;
    if(countDistinct <= K) {
        cout<<"0"<<endl;
        return 0;
    }
    sort(val, val+countDistinct, greater<long int>());
    for(int i = K; i < countDistinct; i++) {
        // cout<<val[i]<<endl;
        sum+=val[i];
    }
    cout<<sum<<endl;
}