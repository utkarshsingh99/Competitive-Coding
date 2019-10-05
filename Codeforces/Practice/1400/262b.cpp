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
    int n, k;
    cin>>n>>k;
    int a[n], sum = 0, f= 0;
    loop(i, 0, n) {
    	cin>>a[i];
    	if(a[i] < 0) {
    		if(k > 0) {
    			k--;
    			sum -= a[i];
    		} else {
    			sum += a[i];
    		}
    	}
    	if(a[i] >= 0) {
    		if(f == 0) {
    			f = a[i];
    			continue;
    		}
    		sum += a[i];
    	}
    }
    if(k%2 != 0) {
    	sum -= f;
    } else {
    	sum += f;
    }
    cout<<sum<<endl;
}