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
    ll a, b;
    cin>>a>>b;
    ll num1 = 0, num2 = 0;
    ll c= a+b, num3 = 0;
    int mult = 1;
    while(a!=0) {
    	int j = a%10;
    	if(j!=0) {
    	   num1+=j*mult;
    	   mult *=10;
    	}
    	a/=10;
    }
    mult = 1;
    while(b!=0) {
    	int j = b%10;
    	if(j!=0) {
    		num2+=j*mult;
    		mult*=10;
    	}
    	b/=10;
    }
    mult = 1;
    while(c!=0) {
    	int j = c%10;
    	if(j!=0) {
    		num3+=j*mult;
    		mult*=10;
    	}
    	c/=10;
    }
    // cout<<num1<<" "<<num2<<" "<<num3<<endl;
    if(num3 == num1 + num2) {
    	cout<<"YES\n";
    } else {
    	cout<<"NO\n";
    }
}