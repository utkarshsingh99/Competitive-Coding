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
    //     // FILE_READ_IN
    //     // FILE_READ_OUT
    // #endif
    ll t;
 	cin>>t;
    ll n = 1;
    vector <int> a;
    a.push_back(1);
    // loop(i, 1, num+1) {
    // 	n = n*i;
    // 	n %= 1000000007;
    // 	ans[i] = ans[i-1]*n;
    // 	ans[i] %= 1000000007;
    // 	// loop(j, 1, i+1) {
    // 	// 	ans[i]*=j;
    // 	// 	ans[i]%=1000000007;
    // 	// }
    // }
 	while(t--) {
 		ll in;
 		cin>>in;
 		if(a.size() > in)
 			cout<<a[in]%1000000007<<"\n";
 		else {
 			loop(i, a.size(), in+1) {
 				n = n * i;
 				n %= 1000000007;
 				a.push_back((a[i-1]*n)%1000000007);
 			}
 			cout<<a[in]%1000000007<<"\n";
 		}
 	}   
}