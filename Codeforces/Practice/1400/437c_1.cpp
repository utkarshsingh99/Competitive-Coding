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
    int n, m, tot = 0;
    cin>>n>>m;
    int en[n];
    loop(i, 1, n+1) {
    	cin>>en[i];
    }
    vector <int> a[n+1];
    loop(i, 0, m) {
    	int x, y;
    	cin>>x>>y;
    	a[x].push_back(y);
    	a[y].push_back(x);
    } 
    loop(i, 1, n+1) {
    	for(auto t: a[i]) {
    		cout<<a[i][t]<<" ";
    	}
    	cout<<endl;
    }
    int sums[n+1] = {0};
    loop(j, 1, n+1) {
	    // loop(i, 1, n+1) {
	    // 	for(auto t: a[i]) {
	    // 		sums[i] += a[i][t];
	    // 	}
	    // 	cout<<sums[i]<<" ";
	    // }
	    // cout<<endl;
	    // int smallestIndex = -1, smallest = INT_MAX;
	    // loop(i, 1, n+1) {
	    // 	if(sums[i] > smallest) {
	    // 		smallest = sums[i];
	    // 		smallestIndex = i;
	    // 	}
	    // }
	    // for(auto t: a[smallestIndex]) {
	    // 	tot += a[smallestIndex][t];
	    // 	en[smallestIndex] = 0;
	    // } 
    }
}