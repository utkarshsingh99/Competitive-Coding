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
    int n, a[3];
    cin>>n;
    loop(i, 0, 3) {
        cin>>a[i];
    }
    sort(a, a+3, greater<int>());
    int maxn = 0;
    // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    for(int i = 0; i <= n/a[0];i++) {
        for(int j = 0; j <= n/a[1] ;j++) {
            for(int k = 0; k <= n/a[2] ; k++) {
                if(i*a[0] + j*a[1] + k*a[2] == n) {
                    // cout<<i<<" "<<j<<" "<<k<<endl;
                    // cout<<i+j+k<<endl;
                    maxn = max(i+j+k, maxn);
                    // return 0;
                } else if(i*a[0] + j*a[1] + k*a[2] > n)
                    break;
            }
            if (i * a[0] + j * a[1] > n)
                break;
        }
    }
    cout<<maxn<<endl;
   return 0;
}