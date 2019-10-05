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
    int n, m;
    cin>>n>>m;
    string a[n];
    loop(i, 0, n) {
    	cin>>a[i];
    }
    int count = 0;
    loop(i, 0, n) {
    	loop(j, 0, m) {
    		if(a[i][j] == 'W') {
    			// cout<<i<<" "<<j<<" "<<count<<endl;
    			if(i != n-1) {
    				if(a[i+1][j] == 'P') {
    					a[i+1][j] = '.';
    					count++;
    					continue;
    				}
    			}
    			if(i != 0) {
    				if(a[i-1][j] == 'P') {
    					a[i-1][j] = '.';
    					count++;
    					continue;
    				}
    			}
    			if(j != 0) {
    				if(a[i][j-1] == 'P') {
    					a[i][j-1] = '.';
    					count++;
    					continue;
    				}
    			}
    			if(j != m-1) {
    				if(a[i][j+1] == 'P') {
    					a[i][j+1] = '.';
    					count++;
    					continue;
    				}
    			}
    		}
    	}
    }
    cout<<count<<endl;
}