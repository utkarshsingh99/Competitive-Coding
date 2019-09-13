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
int b[1000][5];
void heapPermutation(int a[], int size, int n)
{
    static int count = 0;
    // if size becomes 1 then prints the obtained
    // permutation
    if (size == 1)
    {
        for(int i = 0; i < n; i++) {
            b[count][i] = a[i];
        }
        count++;
        return;
    }

    for (int i = 0; i < size; i++)
    {
        heapPermutation(a, size - 1, n);

        // if size is odd, swap first and last
        // element
        if (size % 2 == 1)
            swap(a[0], a[size - 1]);

        // If size is even, swap ith and last
        // element
        else
            swap(a[i], a[size - 1]);
    }
}

int main(){
    int a[] = {1, 2, 3, 4, 5}, g[6][6];
    for(int i = 1; i < 6; i++) {
        for(int j = 1; j < 6; j++) {
            cin>>g[i][j];
        }
    }
    heapPermutation(a, 5, 5);
    int maxSum = 0;
    for(int i = 0; i < 120; i++) {
        int sum = 0;
        // sum = g[b[i][0]][b[i][1]] + g[b[i][1]][b[i][0]] + 2 * g[b[i][2]][b[i][3]] + g[b[i][1]][b[i][2]] + g[b[i][2]][b[i][1]] + 2 * g[b[i][3]][b[i][4]] + 2 * g[b[i][3]][b[i][2]] + 2 * g[b[i][4]][b[i][3]];
        sum = g[b[i][0]][b[i][1]] + g[b[i][1]][b[i][0]] + g[b[i][1]][b[i][2]] + g[b[i][2]][b[i][1]] + 2 * g[b[i][2]][b[i][3]] + 2 * g[b[i][3]][b[i][2]] + 2 * g[b[i][3]][b[i][4]] + 2 * g[b[i][4]][b[i][3]];
        if (sum > maxSum) maxSum = sum;
    }
    cout<<maxSum<<endl;
   return 0;
}