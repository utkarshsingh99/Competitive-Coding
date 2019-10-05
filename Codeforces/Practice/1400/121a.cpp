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
    ll l, r;
    cin>>l>>r;
    vector <ll> v;
    v.push_back(4);
    v.push_back(7);
    ll mult = 10, beg = 0;
    while(v[v.size()-1] <= 1e9) {
    	int lim = v.size();
    	loop(i, beg, lim) {
    		v.push_back(mult*4 + v[i]);
    	}
    	loop(i, beg, lim) {
    		v.push_back(mult*7 + v[i]);
    	}
    	mult *= 10;
    	beg = lim;
    }
    int thi = 0;
    loop(i, 0, v.size()) {
    	if(v[i] >= l) {
    		thi = i;
    		break;
    	}
    }
    ll sum = 0;
    loop(i, l, r+1) {
    	if(v[thi] >= i) {
    		// cout<<v[thi]<<endl;
    		sum += v[thi];
    	} else {
    		thi++;
    		sum += v[thi];
    	}
    }
    cout<<sum<<endl;
}