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
    	int n;
    	cin>>n;
    	string a;
    	cin>>a;
    	int l=0, r=0, flag = 0;
    	loop(i, 0, n) {
    		if(a[i] == '1') {
    			l = n-i;
    			flag = 1;
    			break;
    		} 
    	}
    	loopr(i, n-1, 0) {
    		if(a[i] == '1') {
    			r = i+1;
    			break;
    		}
    	}
    	if(flag) {
    		int ans = 2*max(l, r);
    		cout<<ans<<endl;
    	} else {
    		cout<<n<<endl;
    	}
    }
}