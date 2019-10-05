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
    int n, k, sum = 0;
    cin>>n>>k;
    queue <int> a;
    loop(i, 0, n-1) {
    	if(sum <= k) {
    		sum += i;
    		a.push(i);	
    	} else {
    		a.push(0);
    	}    	
    }
    a.push(k-sum);
    loop(i, 0, n) {
    	loop(j, 0, n) {    		
    		int c = a.front();
    		cout<<" "<<c;
    		a.pop();
    		a.push(c);
    	}
    	int c = a.front();
    	a.pop();
    	a.push(c);
    	cout<<endl;
    }
}