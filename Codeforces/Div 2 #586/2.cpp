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
    ll m[n][n], a[n];
    loop(i, 0, n) {
    	loop(j, 0, n) {
    		cin>>m[i][j];
    	}
    }
    a[0] = (ll) sqrt((m[0][1]*m[0][2])/m[1][2]);
    cout<<a[0]<<" ";
    loop(i, 1, n) {
    	a[i] = m[0][i]/a[0];
    	cout<<a[i]<<" ";
    }
    cout<<endl;
}