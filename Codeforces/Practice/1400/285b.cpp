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
    int n, s, t;
    cin>>n>>s>>t;
    int p[n];
    loop(i, 0, n) {
    	cin>>p[i];
    }
    if(s == t) {
    	cout<<"0\n";
    	return 0;
    }
    int pos = s, count = 0, flag = 0;
    loop(i, 0, n) {
    	count++;
    	pos = p[pos-1];
    	if(pos == t) {
    		flag = 1;
    		break;
    	}
    }
    if(flag) {
    	cout<<count<<endl;
    } else {
    	cout<<"-1\n";
    }
}