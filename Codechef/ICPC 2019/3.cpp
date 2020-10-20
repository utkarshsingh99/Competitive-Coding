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
bool overlap(int l1,int r1,int l2,int r2)
{
	if(l1>=l2&&l1<=r2)
		return true;
	else if(l1<=l2 && r1>=l2)
		return true;
	else
		return false;
}
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
        // FILE_READ_IN
        // FILE_READ_OUT
    #endif
    int t;
    cin>>t;
    while(t--) {
    	int n;
    	cin>>n;
    	ll l[n], r[n], v[n];
    	ll left[n]={0}, right[n]={0}, lefc = 0, rightc = 0;
    	loop(i, 0, n) {
    		cin>>l[i]>>r[i]>>v[i];
    	}
    	loop(i, 0, n) {
    		int goleft = false;
    		loopr(j, i-1, 0) {
    			if(right[j]) {
    				bool boole = false;
    				if(v[j] == v[i]) {
    					boole =	overlap(l[i], r[i], l[j], r[j]);
    					if(boole == true) {
    						goleft = true;
    						break;
    					}
    				}
    			}
    		}
    		if(goleft == true) {
    			left[i]=1;
    		} else {
    			right[i] = 1;
    		}
    	}
    	bool wrong = false;
    	loop(i, 0, n) {
    		if(right[i] == 1) 
    			continue;
    		loopr(j, i-1, 0) {
    			if(left[j]) {
    				bool boole = false;
    				if(v[j] == v[i]) {
    					boole = overlap(l[i], r[i], l[j], r[j]);
    					if(boole == true) {
    						wrong = true;
    						break;
    					}
    				}
    			}
    		}
    		if(wrong) {
    			break;
    		}
    	}
    	loop(i, 0, n) {
    		if(left[i] == 1) {
    			cout<<i+1<<" Left\n";
    		}
    		if(right[i] == 1) {
    			cout<<i+1<<" Right\n";
    		}
    	}
    	if(wrong) {
    		cout<<"NO\n";
    	} else {
    		cout<<"YES\n";
    	}
    }
}