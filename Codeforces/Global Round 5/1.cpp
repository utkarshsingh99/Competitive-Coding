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
    int a[n], odd = 0;
    loop(i, 0, n) {
    	cin>>a[i];
    	if(a[i] % 2 != 0) {
    		odd++;
    	}
    }
    loop(i, 0, n) {
    	// cout<<odd<<" "<<a[i]<<" ";
    	if(a[i] % 2 != 0) {
	    	if(odd % 2 == 0) {
	    		float ans = (float) a[i]/ (float) 2;
	    		// cout<<a[i]<<" "<<ans<<endl;
	    		a[i] = ceil(ans);
	    	} else {
	    		float ans = (float) a[i]/ (float) 2;
	    		// cout<<a[i]<<" "<<ans<<endl;
	    		a[i] = floor(ans);
	    	}
	    	odd--;
    	} else {
    		a[i]/=2;	
    	}
    	// cout<<a[i]<<endl;
    }
    loop(i, 0, n) {
    	cout<<a[i]<<"\n";
    }cout<<endl;
}