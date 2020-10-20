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
    int a[n], b[n];
    loop(i, 0, n) {
    	cin>>a[i];
    }
    loop(i, 0, n) {
    	cin>>b[i];
    }
    int count = 0, i = 0, j = 0;
    while(i != n) {
    	if(a[i] == 0) {
    		i++;
    		continue;
    	}
    	if(a[i] == b[j]) {
    		i++;
    		b[j] = 0;
    		continue;
    	} else {
    		loop(k, 0, n) {
    			if(a[k] == b[j]) {
    				a[k] = 0;
    				break;
    			}
    		}
    		b[j] = 0;
    		count++;
    		i++;
    	}
    }
    cout<<count<<endl;
}