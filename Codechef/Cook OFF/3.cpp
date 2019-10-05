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
    int t;
    cin>>t;
    while(t--) {
    	int n, flag = 0;
    	cin>>n;
    	int a[n], min = 0, max = INT_MAX, exp = 0;
    	loop(i, 0, n) {
    		cin>>a[i];
    	}
    	string s;
    	cin>>s;
    	exp = a[0];
    	loop(i, 0, n-1) {
    		if(a[i] != -1) {
	    		if(a[i] >= min && a[i] <= max) {

	    		} else {
	    			flag = 1;
	    			break;
	    		}
    		}
    		if(a[i] != -1) {
    			if(s[i] == '>') {
    				max = a[i]-1;
    				min = 0;
    			}
    			if(s[i] == '<') {
    				min = a[i]+1;
    				max = INT_MAX;
    			}
    		} else {
    			if(s[i] == '<') {
    				min++;
    				max = INT_MAX;
    			} else if(s[i] == '>') {
    				max--;
    				min = 0;
    			}
    		}
    		// cout<<min<<" "<<max<<endl;
    	}
    	if(a[n-1] < min || a[n-1] > max) {
    		if(a[n-1] != -1) {
    			flag = 1;
    		} else {
    			if(min == 0) 
    				flag = 1;
    		}
    	} 
    	if(!flag) {
    		cout<<"YES\n";
    	} else {
    		cout<<"NO\n";
    	}
    }
}