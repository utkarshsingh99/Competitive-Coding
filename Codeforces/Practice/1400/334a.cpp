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
    a[0] = 1;
    a[n-1] = n;
    loop(i, 1, n/2) {
    	a[i] = a[i-1]+1;
    	a[n-i-1] = a[n-i]-1;
    }
    // loop(i, 0, n) {
    // 	cout<<a[i]<<" ";
    // }
    loop(i, 0, n) {
    	// cout<<i+1<<" ";
    	int sum = 0;
    	loop(j, 0, n) {
    		cout<<j*n+a[j]<<" ";
    		sum += j*n + a[j];
    		if(j < n/2) {
    			a[j]++;
    		} else {
    			a[j]--;
    		}
    		if(a[j] == 0) {
    			a[j] = n;
    		}
    		if(a[j] > n) {
    			a[j] = 1;
    		}
    	}
    	// cout<<sum;
    	cout<<endl;
    }
}