#include<bits/stdc++.h> 
using namespace std; 
long int countgroup(int a[], int beg, int end) 
{ 
  long int xs = 0; 
  for (int i = beg; i < end; i++) 
    xs = xs ^ a[i]; 
  if (xs == 0) 
    return end-beg-1; 
  
  return 0; 
} 
long long subarrayXor(int arr[], int n, int m) 
{ 
    long long ans = 0;
    int* xorArr = new int[n];
    std::map<int, std::map<int, int> > map;
    unordered_map<int, int> count;
    xorArr[0] = arr[0]; 

    for (int i = 1; i < n; i++) 
        xorArr[i] = xorArr[i - 1] ^ arr[i];  

    for (int i = 0; i < n; i++) {    
      int tmp = m ^ xorArr[i];  
      // ans = ans + ((long long)mp[tmp]);
      int k = count[xorArr[i]];
      while(k!= 0) {
        if(map[xorArr[i]][k] > 0) {
          ans = ans + (i - map[xorArr[i]][k]);
        }
        k--;
      }
      if (xorArr[i] == m) 
        ans+=i;    
      map[xorArr[i]][count[xorArr[i]]] = i;
      count[xorArr[i]]++;
    }
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cout<<map[i][j]<<"\t";
      }cout<<endl;
    }
    return ans; 
} 
int main() 
{ 
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int in[n];
        for(int i = 0; i < n; i++){
            cin>>in[i];
        }
        long long int count = subarrayXor(in, n, 0);
        // long long int count = 0;
        // for(int i = 0; i < n; i++) {
        //   for(int j = n; j > i; j--) {
        //     count += countgroup(in, i, j);
        //   }
        // }
            cout<<count<<endl;
    } 
    return 0; 
}  