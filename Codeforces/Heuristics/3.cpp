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
    ll n, m;
    cin>>n>>m;
    vector <ll> v;
    loop(i, 0, n) {
    	ll a;
    	cin>>a;
    	v.push_back(a);
    }
    // for(int i = 0; i < n; i++) {
    // 	cout<<v[i]<<" ";
    // }cout<<endl;
    while(v.size() != m) {
    	sort(v.begin(), v.end(), greater <int> ());
    	ll shorty, j = 2;
    	while(v[0]/j > v[1]) {
    		j++;
    	}
    	shorty = v[0]/j;
    	loop(i, 1, j) {
    		v.push_back(shorty);
    	}
    	shorty = v[0]%j;
    	for(int i = v.size()-1; ;i--) {
    		if(shorty == 0) {
    			break;
    		}
    		shorty--;
    		v[i]++;
    	}
    	v[0] = v[0]%2;
    	sort(v.begin(), v.end(), greater <int> ());
    }
    cout<<v[0]<<endl;
}