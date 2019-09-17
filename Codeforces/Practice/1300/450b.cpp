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
    // #ifndef ONLINE_JUDGE
    //     FILE_READ_IN
    //     FILE_READ_OUT
    // #endif
    ll x, y;
    cin>>x>>y;
    ll f1 = x, f2 = y, f3 = y - x;
    ll n;
    cin>>n;
    bool neg;
    if((n/3)%2 == 0) 
    	neg = false;
   	else
   		neg = true;
   	ll ans;
   	switch(n%3) {
   		case 1: ans = (neg ? -f1 : f1);
   			break; 
   		case 2: ans = (neg ? -f2 : f2);
   			break;
   		case 0: ans = (neg ? f3 : -f3);
   			break;
   	}
   	ans = ans%1000000007;
   	if(ans < 0) {
   		ans = 1000000007 + ans;
   	}
   	cout<<ans<<endl;
}