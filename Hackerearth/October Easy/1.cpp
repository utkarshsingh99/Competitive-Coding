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
    int t;
    cin>>t;
    while(t--) {
    	ll n, k;
    	cin>>n>>k;
    	ll count = 0, hand = n;
    	// cout<<hand/k<<endl;
    	while(hand/k != 0) {
    		int ret = hand/k;
    		count += ret;
    		hand = hand%k;
    		hand += ret;
    		// cout<<count<<" "<<ret<<" "<<hand<<endl;
    	}
    	cout<<count<<endl;
    }
}