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
    int r, c;
    cin>>r>>c;
    char cake[r][c];
    int row[r] = {0}, col[c] = {0};
    loop(i, 0, r) {
    	loop(j, 0, c) {
    		cin>>cake[i][j];
    		if(cake[i][j] == 'S') {
    			row[i]=1;
    			col[j]=1;
    		}
    	}
    }
    loop(i, 0, r) {
    	if(row[i] == 0) {
    		loop(j, 0, c) {
    			cake[i][j] = 'E';
    		}
    	}
    }
    loop(i, 0, c) {
    	if(col[i] == 0) {
    		loop(j, 0, r) {
    			cake[j][i] = 'E';
    		}
    	}
    }
    int count = 0;
    loop(i, 0, r) {
    	loop(j, 0, c) {
    		if(cake[i][j] == 'E') 
    			count++;
    	}
    }
   	cout<<count<<endl;
}