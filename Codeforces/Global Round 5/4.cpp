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
    ll a[n];
    loop(i, 0, n) {
    	cin>>a[i];
    }
    loop(i, 0, n) {
    	float x = (float) a[i]/ (float) 2;
    	int count = 1, j = i+1, loopss = 0;
    	if(j == n)
    		j = 0;
    	ll high = a[i];
    	while(1) {
    		if(j == i)
    			loopss++;
    		if(a[j] < x) {
    			break;
    		} else {
    			count++;
    			high = max(high, a[j]);
    			x = (float) high / (float) 2;
    		}
    		if(j < n-1)
    			j++;
    		else
    			j = 0;
    		if(loopss > 2) {
    			break;
    		}
    	}
    	if(loopss<= 2)
    		cout<<count<<" ";
    	else
    		cout<<"-1 ";
    }
}