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
    int n;
    cin>>n;
    int a[n];
    loop(i, 0, n) {
    	cin>>a[i];
    }
    if(n == 1) {
    	cout<<"1\n";
    	return 0;
    }
    int maxm = 0, len = 2;
    loop(i, 2, n) {
    	if(a[i] == a[i-1] + a[i-2]) {
    		len++;
    	} else {
    		maxm = max(maxm, len);
    		len = 2;
    	}
    }
    maxm = max(maxm, len);
    cout<<maxm<<endl;
}