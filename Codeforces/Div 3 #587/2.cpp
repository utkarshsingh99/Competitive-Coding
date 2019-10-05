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
    pair<int, int> a[n];
    loop(i, 0, n) {
    	cin>>a[i].first;
    	a[i].second = i+1;
    }
    sort(a, a+n);
    ll sum = 0;
    loopr(i, n-1, 0) {
    	sum += (n-1-i)*a[i].first + 1;
    }
    cout<<sum<<endl;
    loopr(i, n-1, 0) {
    	cout<<a[i].second<<" ";
    }
    cout<<endl;
}