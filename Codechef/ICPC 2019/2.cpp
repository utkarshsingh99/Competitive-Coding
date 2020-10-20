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
int main()
{
FAST
lli t;
cin>>t;
while(t--)
{
 lli k;
 cin>>k;
map<string,int>m1;
map<string,int>m2; 
int count=0;
 f(z,0,k)
 {    
string sfar;
int n;
cin>>sfar>>n;
if(n==0)
{
if(m1.find(sfar)==m1.end())
{
m1[sfar]=1;
}
else
{
    m1[sfar]++;
}
}
else if (n==1)
{
if(m2.find(sfar)==m2.end())
{
m2[sfar]=1;
}
else
{
    m2[sfar]++;
}
}
}
// for(auto i:m1)
// cout<<i.first<<" "<<i.second<<endl;
// cout<<endl;
// for(auto i:m2)
// cout<<i.first<<" "<<i.second<<endl;
// cout<<endl;
for(auto i:m1)
{
if(m2.find(i.first)==m2.end())
{
count+=i.second;
}
else
{
        if(i.second>m2.find(i.first)->second)
        count+=i.second;
        else
        count+=m2.find(i.first)->second;
}
}
for(auto i:m2)
{
    if(m1.find(i.first)==m1.end())
    {
		count+=i.second;
    }
}
cout<<count<<"\n";
}
return 0;
}

