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
    ll n, p, w, d;
    cin>>n>>p>>w>>d;
    // int x = 0, y = 0;
    int found = 0;
    ll x,t = p/w, y = (n%w);
    while(t != -1) {
    	if((p-t*w)%d == 0 && (p-t*w) >= 0) {
    		x = t;
    		y = (p-(t*w))/d;
    		found = 1;
    		break;
    	} else {
    		t--;
    	}
    } 
    if(found && x+y <= n) 
    	cout<<x<<" "<<y<<" "<<n-x-y<<endl;
    else
    	cout<<"-1\n";
}