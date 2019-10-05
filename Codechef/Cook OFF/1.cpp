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
int matches(int j) {
	switch(j) {
		case 0: return 6;
			break;
		 case 1: return 2;
			break;
		case 2: return 5;
			break;
		case 3: return 5;
			break;
		case 4: return 4;
			break;
		case 5: return 5;
			break;
		case 6: return 6;
			break;
		case 7: return 3;
			break;
		case 8: return 7;
			break;
		case 9: return 6;
			break;
	}
}
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
        // FILE_READ_IN
        // FILE_READ_OUT
    #endif
    ll t;
    cin>>t;
    while(t--) {
    	ll a, b;
    	cin>>a>>b;
    	ll count = 0;
    	ll c = a+b;
    	while(c!=0) {
    		int j = c%10;
    		count += matches(j);
    		c/=10;
    	}
    	cout<<count<<"\n";
    }
}