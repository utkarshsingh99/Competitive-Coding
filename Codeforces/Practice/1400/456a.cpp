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
    pair <int, int> a[n];
    loop(i, 0, n) {
    	cin>>a[i].first>>a[i].second;
    }
    sort(a, a+n);
    loop(i, 0, n-1) {
    	if(a[i+1].second < a[i].second) {
    		cout<<"Happy Alex\n";
    		return 0;
    	}
    }
    cout<<"Poor Alex\n";
    return 0;
}