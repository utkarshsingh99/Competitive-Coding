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
    ll q;
    cin>>q;
    while(q--) {
    	ll c, m, x, count = 0;
    	cin>>c>>m>>x;
    	if(x < c && x < m) {
    		count += x;
    		c -= x;
    		m -= x;
    		x = 0;
    	}
    	// cout<<c<<" "<<m<<endl;
    	ll mini = min(c, m);
    	// cout<<mini<<" "<<(c+m+x)/3<<endl; 
    	count += min(mini, (c+m+x)/3);
    	cout<<count<<endl;
    }
}