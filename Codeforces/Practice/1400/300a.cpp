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
    int a[n];
    vector <int> pos, neg, zer;
    zer.push_back(0);
    loop(i, 0, n) {
    	cin>>a[i];
    	if(a[i] < 0) {
    		neg.push_back(a[i]);
    	} else if(a[i] > 0) {
    		pos.push_back(a[i]);
    	}
    }
    int negLim = 0, posLim;
    if(pos.size() == 0) {
    	negLim = neg.size()-2;
    	pos.push_back(neg[neg.size()-1]);
    	pos.push_back(neg[neg.size()-2]);
    } else {
    	negLim = neg.size();
    }
    if(negLim %2 == 0) {
    	negLim--;
    	zer.push_back(neg[negLim]);
    }
    cout<<negLim<<" ";
    loop(i, 0, negLim) {
    	cout<<neg[i]<<" ";
    }cout<<"\n"<<pos.size()<<" ";
    loop(i, 0, pos.size()) {
    	cout<<pos[i]<<" ";
    }cout<<"\n"<<zer.size()<<" ";
    loop(i, 0, zer.size()) {
    	cout<<zer[i]<<" ";
    }
}