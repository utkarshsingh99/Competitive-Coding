#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n;
        cin>>n;
        int a[n], countI[n];
        for(int i = 0; i < n; i++) {
            countI[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            countI[a[i]-1]++;
        }
        // for(int i = 0; i < n; i++) {
        //     cout<<countI[i]<<" ";
        // }
        // cout<<endl;
        int count = 0, b[n], d;
        for (int c = 0; c < n; c++)
        {
            for (d = 0; d < count; d++)
            {
                if(countI[c] == b[d])
                    break;
            }
            if (d == count)
            {
                b[count] = countI[c];
                count++;
            }
        }
        sort(b, b+count, greater<int>());
        sort(countI, countI+n);
        // for(int i = 0; i < n; i++) {
        //     cout<<countI[i]<<" ";
        // }
        // cout<<endl;
        int sum = 0, toTake = countI[n-1];
        for(int i = n-1; i >= 0; i--) {
            if(toTake == 0) {
                break;
            }
            // cout<<countI[i]<<" "<<toTake<<endl;
            if(countI[i] >= toTake) {
                sum+=toTake;
                toTake--;
            }
        }
        cout<<sum<<endl;
        // cout<<count<<endl;
    }
}