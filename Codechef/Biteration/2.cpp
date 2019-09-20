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
    	ll c[n], x, sum = 0;
    	loop(i, 0, n) {
    		cin>>c[i];
    		sum += c[i];
    	}
    	cin>>x;
    	ll b = sum/(x+1);
    	ll a = x*b, sumb = 0, turna = 0, probIndex = n-1, suma = 0, turnb = 0, bcount = 0;
    	loopr(i, n-1, 0) {
    		sumb+=c[i];
    		turnb++;
    		if(sumb>=b) {
    			sumb-=c[i];
    			probIndex = i;
    			break;
    		}
    	}
    	bcount = turnb;
    	loop(i, 0, probIndex) {
    		suma += c[i];
    	}
    	turna = suma/x;
    	if(turna >= turnb) {

    	} else {
    		bcount++;
    	}
    	cout<<n-bcount<<" "<<bcount<<endl;
    }
}