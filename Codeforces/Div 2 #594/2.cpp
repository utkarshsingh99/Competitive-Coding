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
    int n;
    cin>>n;
    ll a[n];
    loop(i, 0, n) {
    	cin>>a[i];
    }
    sort(a, a+n);
    ll hor = 0, ver = 0;
    loop(i, 0, n/2) {
    	hor += a[i];
    }
    loop(i, n/2, n) {
    	ver += a[i];
    }
    cout<<ver*ver + hor*hor<<endl;
}