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
    char a[n][n];
    loop(i, 0, n) {
    	if(i%2 == 0) {
    		a[i][0] = 'W';
    	} else {
    		a[i][0] = 'B';
    	}
    }
    loop(i, 0, n) {
    	loop(j, 1, n) {
    		if(a[i][j-1] == 'B') {
    			a[i][j]='W';
    		} else {
    			a[i][j]='B';
    		}
    	}
    }
    loop(i, 0, n) {
    	loop(j, 0, n) {
    		cout<<a[i][j];
    	}cout<<endl;
    }

}