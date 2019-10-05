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
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1 == x2) {
    	int side = abs(y2-y1);
    	int x3, x4, y3, y4;
    	if(x1 + side > 1000) {
    		side = -side;
    	}
    	x3 = x1 + side, x4 = x1 + side;
    	y3 = y1, y4 = y2;
    	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
    } else if(y1 == y2) {
    	int side = abs(x2-x1);
    	if(y1 + side > 1000) {
    		side = -side;
    	}
    	int x3, x4, y3, y4;
    	y3 = y1 + side, y4 = y1 + side;
    	x3 = x1, x4 = x2;
    	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
    } else {
    	if(abs(x2-x1) != abs(y2-y1)) {
    		cout<<"-1\n";
    		return 0;
    	}
    	cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<"\n";
    }

}