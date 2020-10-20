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
    int x[n], y[n], z[n];
    loop(i, 0, n) {
    	cin>>x[i]>>y[i]>>z[i];
    }
    loop(i, 0, n) {
    	if(x[i] == INT_MIN)
    		continue;
    	int minx = INT_MAX, miny = INT_MAX, minz = INT_MAX, mindist = INT_MAX;
    	loop(j, 0, n) {
    		if(x[j] == INT_MIN)
    			continue;
    		if(i == j)
    			continue;
    		if(sqrt((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]) + (z[j]-z[i])*(z[j]-z[i])) < mindist) {
    			mindist = sqrt((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]) + (z[j]-z[i])*(z[j]-z[i]));
    			minx = j;
    		}
    	}
    	cout<<i+1<<" "<<minx+1<<endl;
    	x[i] = INT_MIN, x[minx] = INT_MIN;
    	y[i] = INT_MIN, y[minx] = INT_MIN;
    	z[i] = INT_MIN, z[minx] = INT_MIN;
    }
}