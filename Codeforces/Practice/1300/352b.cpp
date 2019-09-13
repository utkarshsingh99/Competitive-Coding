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
    int n;
    cin>>n;
    int a[n], lastIndex[100001], diff[100001];
    loop(i, 0, 100001) {
        lastIndex[i] = -1;
        diff[i] = 0;
    }
    loop(i, 0, n) {
        cin>>a[i];
        if(lastIndex[a[i]] == -2)
            continue;
        if(lastIndex[a[i]] != -1){
            int cdiff = i - lastIndex[a[i]];
            if(diff[a[i]] != 0) {
                if(cdiff == diff[a[i]]) {
                    lastIndex[a[i]] = i;
                } else {
                    diff[a[i]] = 0;
                    lastIndex[a[i]] = -2;
                }
            } else {
                diff[a[i]] = cdiff;
                lastIndex[a[i]] = i;
            }
        } else {
            lastIndex[a[i]] = i;
        }
        // if(a[i] == 1)
            // cout<<lastIndex[a[i]]<<" "<<diff[a[i]]<<endl;
    }
    int count = 0;
    for(int i = 0; i < 100001; i++) {
        if (lastIndex[i] != -1 && lastIndex[i] != -2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    for (int i = 0; i < 100001; i++)
    {
        if (lastIndex[i] != -1 && lastIndex[i] != -2)
        {
            cout<<i<<" "<<diff[i]<<endl;
        }
    }
    return 0;
}