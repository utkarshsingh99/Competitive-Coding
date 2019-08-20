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
    int n, m, k;
    cin>>n>>m>>k;
    m--;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int lsmall = m, rsmall = m;
    int i = m-1;
    while(i != -1) {
        if(a[i] <= k && a[i] != 0) {
            lsmall = i;
            break;
        }
        i--;
    }
    i = m+1;
    while(i != n) {
        // cout<<"R: "<<a[i]<<endl;
        if(a[i] <= k && a[i] != 0) {
            rsmall = i;
            break;
        }
        i++;
    }
    // cout << lsmall << "\t" <<rsmall << "\n";
    int ldiff = m - lsmall, rdiff = rsmall - m;
    // cout<<ldiff<<"\t"<<rdiff<<"\n";
    if(ldiff == 0)
        cout<<rdiff*10<<endl;
    else if(rdiff == 0)
        cout << ldiff*10 << endl;
    else
        cout<<min(ldiff*10, rdiff*10)<<endl;
   return 0;
}