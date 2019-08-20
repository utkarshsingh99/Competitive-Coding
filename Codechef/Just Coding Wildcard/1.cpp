#include <bits/stdc++.h>
using namespace std;
//For ordered_set
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        float ans;
        if(n == 1) {
            float ans1;
            ans1 = (float)3/7;
            cout<<setprecision(6)<<ans1<<endl;
        } else if(n == 2) {
            ans = (float)4 / 7;
            cout << setprecision(6) << ans << endl;
        }
        else if (n == 3)
        {
            ans = (float)5 / 7;
            cout << setprecision(6) << ans << endl;
        }
        else if (n == 4)
        {
            ans = (float)6 / 7;
            cout << setprecision(6) << ans << endl;
        } else
        {
            ans = 1.000000;
            cout << "1.000000" << endl;
        }
    }
   return 0;
}