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
    	ll a[n];
    	loop(i, 0, n) {
    		cin>>a[i];
    	}
    	sort(a, a+n);
    	ll l=n-1;
    	loop(i, 0, n) {
    		if(a[i] > k) {
    			l = i;
    			break;
    		}
    	}
    	while(l != n-1) {
    		sort(a+l, a+n);
    		ll diff = a[l] - k;
    		a[l] = k;
    		a[n-2] -= diff;
    		l++;
    	}
    	ll sum = 0;
    	loop(i, 0, n) {
    		// cout<<a[i]<<" ";
    		sum += a[i];
    	}
    	cout<<sum<<endl;
    }
}