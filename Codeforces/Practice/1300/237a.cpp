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
        FILE_READ_IN
        FILE_READ_OUT
    #endif
    int n;
    cin>>n;
    pair <int, int> hm[n];
    loop(i, 0, n) {
    	cin>>hm[i].first>>hm[i].second;
    }
    int maxCafe = 1, cafes = 1;
    loop(i, 1, n) {
    	if(hm[i].first == hm[i-1].first && hm[i].second == hm[i-1].second) {
    		cafes++;
    		maxCafe = max(maxCafe, cafes);
    	} else {
    		maxCafe = max(maxCafe, cafes);
    		cafes = 1;
    	}
    }
    cout<<maxCafe<<endl;
}