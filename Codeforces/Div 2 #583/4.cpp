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
int pathExists(string a[], ll n, ll m, int i, int j) {
    // cout<<i<<"\t"<<j<<endl;
    // cout<<"Called\t"<<i<<"\t"<<j<<endl;
    if(i == n-1 && j == m-1)
        return 1;
    int value = 0;
    if(j == m-1 && a[i+1][j] != '#')
        return pathExists(a, n, m, i+1, j);
    // cout<<"j != m-1";
    if(i == n-1 && a[i][j+1] != '#')
        return pathExists(a, n, m, i, j+1);

    // cout<<"i != n-1";
    if(a[i][j+1] == '.') {
        value = pathExists(a, n, m, i, j+1);
    } 
    if(value == 1)
        return value;
    if(a[i+1][j] == '.') {
        value = pathExists(a, n, m, i+1, j);
    }
    return value; 
}

int main(){
    ll n, m;
    cin>>n>>m;
    string a[n];
    for(int i = 0; i < n; i++) {
            cin>>a[i];
    }
    if(a[0][1] == '#' && a[1][0] == '#') {
        cout<<"0\n";
        return 0;
    }
    int row=0, col=0;
    if(m > 1)
        if(a[0][1] != '#')
            row = pathExists(a, n, m, 0, 1);
    if(n > 1) 
        if(a[1][0] != '#')
            col = pathExists(a, n, m, 1, 0);
    cout<<(row+col)<<endl;
   return 0;
}