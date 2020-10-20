#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define MP make_pair
#define PB push_back
#define ulli unsigned long long int
#define lli long long int
#define f(i,x,n) for(long long int i=x;i<n;i++)
#define fr(i,n,x) for(long long int i=n;i>=x;i--)
#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n" 
#define mod 1000000007
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int decimalToBinary(int N) 
{ 
  
    lli B_Number = 0; 
    int cnt = 0; 
    while (N != 0) { 
        int rem = N % 2; 
        lli c = pow(10, cnt); 
        B_Number += rem * c; 
        N /= 2; 
        cnt++; 
    }
    int count=0;
    while(B_Number!=0)
    {
        lli z=B_Number%10;
        if(z==1)
            count++;
        B_Number/=10;
    }
    return count; 
} 
int main()
{
    FAST
    lli t;
    cin>>t;
    while(t--)
    {
    lli n;
    vector< pair <int,int> > v;
    map<int,vector<int>> m;
    cin>>n;
    f(i,0,n)
    {
        lli z;
        cin>>z;
        if(m.find(z)==m.end())
        {
            m[z].PB(i+1);
        }
        v.PB(MP(z,decimalToBinary(z)));
        sort(v.begin(), v.end(), sortbysec);    
    }
    int tot = 0;
    for(auto i:v) {
        tot |= i.first;
    }
    for(int i=0;i<n-1;i++)
        {

            int ors = 0;
            for(int j=i+1;j<n;j++){ 
                ors |= v[j].first;
            }
            tot=tot+ors;
        }
cout<<tot<<endl;
    // reverse(v.begin(), v.end());
    for(int i=0;i<n;i++)
    {
        int z=v[i].first;
        for(int k=0;k<m[z].size();k++)
        {
            cout<<m[z][k]<<" ";
        }
        i+=m[z].size()-1;
    }
    cout<<"\n";
}  
return 0;
}
