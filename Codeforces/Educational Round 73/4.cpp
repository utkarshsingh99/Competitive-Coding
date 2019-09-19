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
    int q;
    cin>>q;
    while(q--) {
    	int n;
    	cin>>n;
    	ll a[n], b[n], prerc[n], postrc[n];
    	loop(i, 0, n) {
    		cin>>a[i]>>b[i];
    		if(i != 0) {
    			if(a[i] == a[i-1]-1) {
    				ll inc = min(b[i], prerc[i-1]);
    				prerc[i] = inc + b[i];
    			} else {
    				prerc[i] = b[i];
    			}
    		} else {
    			prerc[0] = b[i];
    		}
    		// cout<<prerc[i]<<" ";
    	}
    	// cout<<endl;
    	loopr(i, n-1, 0) {
    		if(i != n-1) {
    			if(a[i] == a[i+1] - 1) {
    				ll inc = min(b[i], postrc[i-1]);
    				postrc[i] = inc + b[i];
    			} else {
    				postrc[i] = b[i];
    			}
    		} else {
    			postrc[n-1] = b[i];
    		}
    	}
    	// loop(i, 0, n) {
    	// 	cout<<postrc[i]<<" ";
    	// }
    	// cout<<endl;
    	ll rub = 0;
    	loop(i, 1, n) {
    		if(a[i] == a[i-1]) {
    			if(prerc[i-1] < postrc[i]) {
    				rub += prerc[i-1];
    				prerc[i] += prerc[i-1];
    				a[i-1]=0;;
    			} else {
    				rub += postrc[i];
    				if(i != n-1)
    					postrc[i+1] += postrc[i];
    				a[i]=0;
    			}
    			// cout<<prerc[i-1]<<" "<<postrc[i]<<" "<<rub<<endl;
    		}
    	}
    	cout<<rub<<endl;
    }
}