
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
long long int a1,a2,k1,k2,n,max,check;
cin>>a1>>a2>>k1>>k2>>n;
check=n;
    // cout<<"here";
if(k1<k2)
{
    
max=k2;
check-=(max-1)*a2;
if(check>0)
{
    check-=(k1-1)*a1;
}
    if(check<0)
    check=0;
    if(check<a1+a2)
    cout<<check<<" ";
    else
    {
        cout<<a1+a2<<" ";
    }
    
}
else
{
    // cout<<"here";
    max=k1;
    check-=(max-1)*a1;
    if(check>0)
{
    check-=(k2-1)*a2;
}
if(check<0)
check=0;
    if(check<a1+a2)
    cout<<check<<" ";
    else
    {
        cout<<a1+a2<<" ";
    }
    
}
int count=0;
if(k1<k2)
{
    if(k1*a1<n)
    {count+=a1;
    n-=k1*a1;
    if(k2*a2<n)
    count+=a2;
    else
    {
        count+=n/k2;
    }
    }
    else
    {
        count+=n/k1;
        n-=(n/k1)*k1;
        count+=n/k2;
    }   
    }
    else
    {
            if(k2*a2<n)
    {count+=a2;
    n-=k2*a2;
    if(k1*a1<n)
    count+=a1;
    else
    {
        count+=n/k1;
    }
    }
    else
    {
        count+=n/k2;
        n-=(n/k1)*k2;
        count+=n/k1;
    }  
    }
    cout<<count;
 
}