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


ll printNcR(int n, int r) 
{ 
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = __gcd(p, k); 
  
            // dividing by gcd, to simplify product 
            // division by their gcd saves from the overflow 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1; 
  
    // if our approach is correct p = ans and k =1 
    return p;
} 
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
        // FILE_READ_IN
        // FILE_READ_OUT
    #endif
    string s1, s2;
    cin>>s1>>s2;
    int tp = 0, ep = 0, rp, n=0; 
    loop(i, 0, s1.size()) {
    	if(s1[i] == '+')
    		tp++;
    	if(s1[i] == '-') 
    		tp--;
    }
    loop(i, 0, s2.size()) {
    	if(s2[i] == '+')
    		ep++;
    	if(s2[i] == '-')
    		ep--;
    	if(s2[i] == '?')
    		n++;
    }
    rp = tp-ep;
    ll count = 0;
    loop(i, 0, n+1) {
    	if(rp == n-2*i) {
    		count = printNcR(n, i);
    	}
    }
    double ans = (double) count / (double)(2<<n);
    cout<<setprecision(9)<<ans<<endl; 
}