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
    int n, count = 0, x, y;
    cin>>n>>x>>y;
    string a;
    cin>>a;
    if(a[n-y-1] == 0)
    		count++;
    for(int i = n-1; i > n-x-1; i--) {
    	cout<<a[i]<<endl;
    	// if(i == n-y-1)
    	// 	continue;
    	if(a[i] == '1') {
    		count++;
    	}
    }
    cout<<"1: "<<count<<endl;
}