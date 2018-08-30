#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int k,n;
  cin>>n>>k;
  long long int a[n];
  for(int i = 0; i <n; i++){
    cin>>a[i];
  }
  sort(a, a+n);
  if(k==0){
    if(a[0] == 1)
      cout<<"-1"<<endl;
    else
      cout<<"1"<<endl;
    return 0;
  }
  if(a[k-1]==a[k]){
    cout<<"-1"<<endl;
  }else{
    cout<<a[k-1]<<endl;
  }
}
