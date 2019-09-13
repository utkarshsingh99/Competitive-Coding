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

int main(){
    ll n, k;
    cin>>n>>k;
    ll a[n];
    loop(i, 0, n) {
        cin>>a[i];
    }
    sort(a, a+n);
    loop(i, 0, k) {
        if(a[n/2] < a[n/2+1]) {
            int inc = min(k, a[n/2+1]-a[n/2]);
            a[n/2] += inc;
            k -= inc;
        } else {
            for(int j = n/2+1; j < n-1; j++) {
                if(a[j] < a[j+1]) {
                    int inc = min(k, a[j + 1] - a[j]);
                    a[j] += inc;
                    k -= inc;
                    break;
                }
                if(j == n-2) {
                    ll same = 1;
                    for(int m = n-2; m >= 0; m--) {
                        if(a[m] == a[n-1]) {
                            same++;
                        } else {
                            break;
                        }
                    }
                    ll inc = min(k, same);
                    k-=inc;
                    for (int m = n - 1; m >= n-inc; m--)
                    {  
                       a[m]++; 
                    }
                }
            }
        }
        // for(int i = 0; i < n; i++) {
        //     cout<<a[i]<<" ";
        // }cout<<"\t"<<k<<endl;
    }
    cout<<a[n/2]<<endl;
   return 0;
}