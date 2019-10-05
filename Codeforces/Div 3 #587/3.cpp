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
int swap (int a, int b) {
	int t = a;
	a = b;
	b = t;
}
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
        // FILE_READ_IN
        // FILE_READ_OUT
    #endif
    int x1, x2, x3, x4, x5, x6, y1, y2, y3, y4, y5, y6;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>x5>>y5>>x6>>y6;
    
    // Case 1 x3, x4
    if(x3 <= x1 && x4 >= x2 && y3 <= y1 && y4 >= y2) {
    	cout<<"1NO\n";
    	return 0;
    }

    // Case 2 x5, x6
    if(x5 <= x1 && x6 >= x2 && y5 <= y1 && y5 >= y2) {
    	cout<<"2NO\n";
    	return 0;
    }

    // Case 3 vertical combination
    if(x3 <= x1 && x4 >= x2 && x5 <= x1 && x6 >= x2) {
    	if(max(y4, y6) >= y2 && min(y3, y5) <= y1) {
    		cout<<"3NO\n";
    		return 0;
    	}
    }

    // Case 3 horizontal combination
    if(y3 <= y1 && y4 >= y2 && y5 <= y1 && y6 >= y2) {
    	if(max(x4, x6) >= x2 && min(x3, x5) <= x1) {
    		cout<<"4NO\n";
    		return 0;
    	}
    }
    cout<<"YES\n";
}