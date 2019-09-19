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
 		ll n;
 		cin>>n;
 		ll a[n], counter = 0;
 		ll m[100] = {0};
 		loop(i, 0, n) {
 			cin>>a[i];
 			ll d = log2(a[i]);
 			// cout<<d<<" "<<m[d]<<endl;
 			m[d]++;
 		}
 		int flag = 0, prob = 0, needed = 1;
 		loopr(i, 11, 0) {
 			if(m[i] >= needed) {
 				flag = 1;
 				break;
 			} else {
 				needed = needed - m[i];
 				needed *= 2;
 			}
 		}
 		if(flag) {
 			cout<<"YES\n";
 		} else {
 			cout<<"NO\n";
 		}
 	}
}