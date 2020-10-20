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
    ll n, k;
    cin>>n>>k;
    ll a[n];
    loop(i, 0, n) {
    	cin>>a[i];
    }
    sort(a, a+n);
    int lowest = a[0], highest = a[n-1];
    while(k > 0) {
    	ll inc=0, dec=0, fsame = 1, lsame = 1;
    	lowest = a[0], highest = a[n-1];
    	loop(i, 1, n) {
    		if(a[i] != lowest) {
    			inc = a[i] - lowest;
    			break;
    		} else {
    			fsame++;
    		}
    	}
    	loopr(i, n-2, 0) {
    		if(a[i] != highest) {
    			dec = highest - a[i];
    			break;
    		} else {
    			lsame++;
    		}
    	}
    	if(inc == 0 && dec == 0)
    		break;
    	inc *= fsame;
    	dec *= lsame;
    	// cout<<inc<<" "<<dec<<endl;
    	ll op = min(inc, dec);
    	if(op <= k) {
    		if(inc <= dec) {
    			loop(i, 0, fsame) {
    				a[i]+=(inc/fsame);
    			}
    		} else {
    			loopr(i, n-1, n-lsame) {
    				a[i]-=(dec/lsame);
    			}    			
    		}
    	}
    	k -= min(op, k);
    	// loop(i, 0, n) {
    	// 	cout<<a[i]<<" ";
    	// }cout<<endl;
    }
    // loop(i, 0, n) {
    // 	cout<<a[i]<<" ";
    // }cout<<endl;
    cout<<a[n-1]-a[0]<<endl;
}