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
    string a, b, c;
    cin>>a;
    b = a, c = a;
    loop(i, 0, n) {
    	if(i%2==0) {
    		b[i] = 'a';
    		c[i] = 'b';
    	} else {
    		b[i]='b';
    		c[i]='a';
    	}
    }
    int a1 = 0, a2 = 0;
    loop(i, 0, n) {
    	if(a[i] != b[i]) {
    		a1++;
    	}
    	if(a[i] != c[i]) {
    		a2++;
    	}
    }
    // cout<<b<<" "<<c<<endl;
    if(abs(a1) < abs(a2)) {

    	cout<<a1<<"\n"<<b<<endl;
    } else {
    	cout<<a2<<"\n"<<c<<endl;
    }
}