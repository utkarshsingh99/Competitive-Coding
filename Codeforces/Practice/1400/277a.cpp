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
 	int n, m;
 	cin>>n>>m;
 	int a[m+1], l[m+1] = {0}, kcount = 0;
 	loop(i, 1, m+1) {
 		a[i] = i;
 	}
 	loop(i, 0, n) {
 		int k;
 		cin>>k;
 		// cout<<k<<endl;
 		if(k==0) {
 			kcount++;
 			continue;
 		}
 		vector <int> c;
 		// cout<<"Ok\n";
 		loop(j, 0, k) {
 			int d;
 			cin>>d;
 			c.push_back(d);
 			l[c[j]] = 1;
 		}
 		// loop(g, 0, m+1) {
 		// 	cout<<l[g]<<" ";
 		// }
 		int t = a[c[0]];
 		loop(j, 0, k) {
 			// cout<<t<<" "<<a[c[j]]<<endl;
 			int r = a[c[j]];
 			loop(p, 1, m+1) {
 				if(a[p] == r) {
 					a[p] = t;
 				}
 			}
 			a[c[j]] = t;
 		}
 	}
 	sort(a+1, a+m+1);
 	// loop(i, 1, m+1) {
 	// 	cout<<a[i]<<" ";
 	// }cout<<endl;
 	// loop(i, 1, m+1) {
 	// 	cout<<l[i]<<" ";
 	// }cout<<endl;
 	int count = 0, temp = a[1];
 	if(l[a[1]] == 1) 
 		count++;
 	loop(i, 1, m+1) {
		if(l[a[i]] == 1 && temp != a[i]) {
 			count++;
 			temp = a[i];
 		}
 	}
 	count = max(count-1, 0);
 	cout<<kcount + count<<endl;
}