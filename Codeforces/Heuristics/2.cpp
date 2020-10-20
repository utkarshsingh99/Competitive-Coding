#include <bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define ull unsigned long long int
#define ll long long int
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
using namespace std;
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
        // FILE_READ_IN
        // FILE_READ_OUT
    #endif
    ll n;
    cin>>n;
    ll a[n];
    loop(i, 0, n) {
    	cin>>a[i];
    }
    sort(a, a+n, greater <int>());
    ll sum = 0, lsum = 0;
    // loop(i, 0, n) {
    // 	cout<<a[i]<<" ";
    // }cout<<endl;
    loop(i, 0, n) {
    	sum += (n-1-i)*a[i];
    }
    loop(i, 0, n) {
    	lsum += (n-(n-i))*a[i];
    	// cout<<lsum<<endl;
    }
    // cout<<sum<<" "<<lsum<<endl;
    ll ans = sum - lsum;
    cout<<ans<<endl;
}