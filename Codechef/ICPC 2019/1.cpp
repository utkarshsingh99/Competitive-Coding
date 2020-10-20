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
    ll t;
    cin>>t;
    while(t--) {
    	ll n=0, flag = 1, j = 0;
    	string a;
    	cin>>a;
    	loop(i, 0, a.size()-1) {
    		// cout<<(int)a[i-1]-48<<" "<<(int)a[i]-48<<endl;
    		int prev = (int) a[i]-48,  curr = (int) a[i+1]-48;
    		if(flag) {
    			if(prev > curr) {
    				flag = 0;
    			} else {
    				n = 10*n + prev;
    				// j++;
    			}
    		} else {
    			n = 10*n + prev;
    		}
    		// cout<<n<<endl;
    	}
    	if(!flag) {
    		n = 10*n + (a[a.size()-1]-48);
    	}
    	// cout<<a[a.size()-1]<<"\n";
    	// if(!flag) {
    	// n += n*10 + (int)a[a.size()-1]-48;
    	// }
    	cout<<n<<endl;
    }
}