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
	    int n, m;
	    cin>>n;
	    ll p[n], pe = 0, po = 0;
	    loop(i, 0, n) {
	    	cin>>p[i];
	    	if(p[i] % 2 == 0) {
	    		pe++;
	    	} else {
	    		po++;
	    	}
	    }
	    cin>>m;
	    ll q[m], qe = 0, qo = 0;
	    loop(i, 0, m) {
	    	cin>>q[i];
	    	if(q[i] % 2 == 0) {
	    		qe++;
	    	} else {
	    		qo++;
	    	}
	    }
	    ll count = 0;
	    // loop(i, 0, n) {
	    // 	loop(j, 0, m) {
	    // 		if((p[i] + q[j]) % 2 == 0) {
	    // 			count++;
	    // 		} 
	    // 	}
	    // }
	    cout<<pe*qe + po*qo<<endl;

    }
}