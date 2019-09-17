#include <bits/stdc++.h>
//For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define ld long double
using namespace std;
// For ordered_set
using namespace __gnu_pbds;
template <typename T>
using ord_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);
ll countSubArrayProductLessThanK(ll a[], ll n, long long k) 
{     
    long long p = 1; 
    int res = 0; 
    for (int start = 0, end = 0; end < n; end++) { 
  
        // Move right bound by 1 step. Update the product. 
        p *= a[end]; 
          
        // Move left bound so guarantee that p is again  
        // less than k. 
        while (start <= end && p >= k)  
            p /= a[start++];         
          
        // If p is less than k, update the counter. 
        // Note that this is working even for (start == end): 
        // it means that the previous window cannot grow  
        // anymore and a single array element is the only  
        // addendum. 
        if (p < k) { 
            int len = end-start+1; 
            res += len;
            // cout<<start<<" "<<end<<" "<<res<<endl; 
        } 
    }   
    return res; 
}

int main(){
    int n;
    cin>>n;
    ll a[n];
    loop(i, 0, n) 
        cin>>a[i];
    
    ll posCount = 0, negInd[n], negCt = 0, len = 1;
    bool evenNeg = true;
    loop(i, 0, n) {
        if(a[i] < 0) {
            len = 1;
            negInd[negCt++] = i;
            if(evenNeg) {
                evenNeg = false;
            } else {
                evenNeg = true;
            }
        } else if(evenNeg) {
            posCount += len;
            len++;
        }
    }
    cout<<posCount<<endl;
    loop(i, 0, negCt) {
        cout<<negInd[i]<<" ";
    }cout<<endl;
    loop(i, 0, negCt-1) {
        ll posnos = negInd[i+1]-negInd[i]-1;
        ll possub = (posnos*(posnos+1))/2;
        posCount += possub;
        ll post = 0, pre = 0;
        if(i != negCt-2) {
            post += negInd[i+2] - negInd[i+1];
        } else {
            post += n - negInd[i+1]-1;
        }
        if(i != 0) {
            pre += negInd[i] - negInd[i-1];
        } else {
            pre += negInd[i];
        }
        cout<<pre<<" "<<post<<endl;
        if(post == 1) 
            post = 0;
        if(pre == 1)
            pre = 0; 
        posCount += post + pre + pre*post;
        cout<<posCount<<endl;
        if(post != 1)
            posCount++;
    }
    ll totSubArray = n*(n+1)/2;
    cout<<totSubArray - posCount<<" "<<posCount<<endl;
   return 0;
}