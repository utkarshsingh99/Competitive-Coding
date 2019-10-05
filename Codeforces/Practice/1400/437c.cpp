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
    int n, m, tot = 0;
    cin>>n>>m;
    int v[n+1];
    loop(i, 1, n+1) {
    	cin>>v[i];
    }
    pair <int, int> r[m];
    loop(i, 0, m) {
    	cin>>r[i].first>>r[i].second;
    }
    int flag = 0;
    pair <int, int> e[n];
    loop(i, 0, n) {
    	e[i].second = 0;
    }
    while(flag == 0) {
	    loop(i, 0, n) {
	    	int h = 0;
	    	loop(j, 1, m+1) {
		    	if(r[j].first == i+1) {
		    		h += v[r[j].second];
		    	} else if (r[j].second == i+1) {
		    		h += v[r[j].first];
		    	}
	    	}
	    	e[i].first = h;
	    }
	    
		sort(e, e+n);
		loop(i, 0, n) {
			cout<<e[i].first<<" "<<e[i].second<<endl;
		}cout<<endl;
		int yes = 0;
		loop(i, 0, n) {
			if(e[i].second == 0) {
				tot += e[i].first;
				e[i].second = 1;
				v[i+1] = 0;
				yes = 1;
				break;
			}
		}
		if(!yes) {
			flag = 1;
		}
    }
    cout<<tot<<endl;
}