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
    	int n;
    	cin>>n;
    	int a[n];
    	loop(i, 0, n) {
    		cin>>a[i];
    	}
    	string s;
    	cin>>s;
    	int min=0, max = INT_MAX;
    	loop(i, 0, s.size()) {
    		if(a[i+1] == -1) {
    			if(s[i] == '>') {
    				if(a[i] != -1)
    					max = a[i] - 1;
    				else 
    					max--;
    				min = 0;
    			} else if (s[i] == '<') {
    				if(a[i] != -1)
    					min = a[i] + 1;
    				else
    					min++;
    				max = INT_MAX;
    			} else if (s[i] == '=') {
    				if(a[i] != -1) {
    					min = a[i];
    					max = a[i];
    				}
    			}
    		} else {
    			if(a[i] == -1) { 

    			}
    		}
    	}
    }
}