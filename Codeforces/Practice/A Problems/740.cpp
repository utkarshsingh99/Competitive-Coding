// Doubt question
#include <bits/stdc++.h>
//For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
using namespace std;
// For ordered_set
using namespace __gnu_pbds;
int main(){
    long int n, a, b, c;
    cin>>n>>a>>b>>c;
    n = n % 100;
    if(n%4 == 0) {
        cout<<"0\n";
        return 0;
    }
    if(n%4 == 1) {
        ll ans;
        if(a*3 < c) 
            ans = a*3;
        else 
            ans = c;
        if(ans > b+a) 
            ans = b+a;
        cout<<ans<<"\n";
    }
    if(n%4 == 2) {
        ll ans;
        if(a*2 < b) 
            ans = a*2;
        else
            ans = b;
        cout<<ans<<"\n";
    }
    if(n%4 == 3) {
        cout<<a<<"\n";
    }
}