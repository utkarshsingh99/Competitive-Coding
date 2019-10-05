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
    string a;
    cin>>a;
    ll sum = 0;
    if(a.size() == 1) {
    	cout<<"0\n";
    	return 0;
    }
    loop(i, 0, a.size()) {
    	sum += (int)a[i]-48;
    }
    int sum1 = 0, count = 1;
    while(sum / 10 != 0) {
    	count++;
    	sum1 = sum;
    	sum = 0;
    	while(sum1 != 0) {
    		sum += sum1 % 10;
    		sum1/=10;
    	}
    	// cout<<sum<<endl;
    }
    cout<<count<<endl;
}