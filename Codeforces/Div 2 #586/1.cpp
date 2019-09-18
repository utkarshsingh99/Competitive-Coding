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
    string a;
    cin>>a;
    int z = 0, nn = 0;
    loop(i, 0, n) {
    	if(a[i] == 'z') {
    		z++;
    	}
    	if(a[i] == 'n') {
    		nn++;
    	}
    }
    while(nn != 0) {
    	cout<<"1 ";
    	nn--;
    }
    while(z != 0) {
    	cout<<"0 ";
    	z--;
    }
    cout<<endl;
}