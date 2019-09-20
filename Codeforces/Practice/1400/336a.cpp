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
    ll x, y, quad;
    cin>>x>>y;
    if(x > 0 && y > 0) {
    	quad = 1;
    }
    if(x < 0 && y > 0) {
    	quad = 2;
    }
    if(x < 0 && y < 0) {
    	quad = 3;
    }
    if(x > 0 && y < 0) {
    	quad = 4;
    }
    ll c;
    if(quad == 1) {
    	c = y+x;
    	cout<<"0 "<<c<<" "<<c<<" 0\n";
    }
    if(quad == 2) {
    	c = y-x;
    	cout<<-c<<" 0 0 "<<c<<"\n";
    }
    if(quad == 3) {
    	c = y+x;
    	cout<<c<<" 0 0 "<<c;
    }
    if(quad == 4) {
    	c = y-x;
    	cout<<"0 "<<c<<" "<<-c<<" 0\n";
    }
}