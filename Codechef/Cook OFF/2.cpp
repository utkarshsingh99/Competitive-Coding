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
    	int a, b, c;
    	cin>>a>>b>>c;
    	ll sum = a + b*2 + 3*c;
    	ll k = sum;
    	if(sum %2 != 0) {
    		cout<<"NO\n";
    		continue;
    	}
    	sum /= 2;
    	while(c != 0) {
    		if(sum >= 3) {
    			c--;
    			sum -= 3;
    		} else {
    			break;
    		}
    	}
    	while(b != 0) {
    		if(sum >= 2) {
    			b--;
    			sum -= 2;
    		} else {
    			break;
    		}
    	}
    	while(a != 0) {
    		if(sum >= 1) {
    			a--;
    			sum -= 1;
    		} else {
    			break;
    		}
    	}
    	if(sum == 0) {
    		ll j = a + 2*b + 3*c;
    		// cout<<a<<" "<<b<<" "<<c<<" "<<j<<endl;
    		if(j == k/2)
    			cout<<"YES\n";
    		else 
    			cout<<"NO\n";
    	} else {
    		cout<<"NO\n";
    	}
    }
}