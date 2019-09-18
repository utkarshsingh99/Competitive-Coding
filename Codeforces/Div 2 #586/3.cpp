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
    string s;
    cin>>s;
    int a[26] = {0};
    loop(i, 0, s.size()) {
    	a[(int)s[i]-97]++;
    	if(i == 0) {
    		cout<<"Mike\n";
    		continue;
    	}
    	int flag = 0;
    	loop(j, 0, (int)s[i]-97) {
    		if(a[j] > 0) {
    			flag = 1;
    			break;
    		}
    	}
    	if(flag) {
    		cout<<"Ann\n";
    	} else {
    		cout<<"Mike\n";
    	}
    }
}