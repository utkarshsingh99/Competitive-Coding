#include<bits/stdc++.h>
using namespace std;
int binarySearch(long int arr[],long int l,long int r,long int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long int c[n+1], h[n+1], r[n+1] = {0}, taken[n+1] = {1};
        for(int i = 1; i <= n; i++) {
            cin>>c[i];
        }
        for(int i = 1; i <= n; i++) {
            cin>>h[i];
        }
        sort(h+1, h+n+1);
        int flag = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i >= j - c[j] && i <= j + c[j]) {
                    r[i]++;
                }  
            }
            // cout<<r[i]<<endl;
            int found = 0;
            // for(int j = 1; j <= n; j++) {
            //     if(r[i] == h[j]) {
            //         found = 1;
            //         // h[j] = -1;
            //         break;
            //     }
            // }
            found = binarySearch(h, 1, n+1, r[i]);
            if(taken[found] == 1) {
                taken[found] = 0;
            } else {
                int curH = found;
                cout<<curH<<"\t"<<found<<"\t"<<taken[found]<<endl;
                while(h[curH] == h[found]) {
                    if(h[curH] == r[i]) {
                        found = curH;
                        break;
                    } else {
                        curH++;
                        continue;
                    }
                }
                if(taken[found] != 1) {
                    while(h[curH] == h[found]) {
                    if(h[curH] == r[i]) {
                        found = curH;
                        if(taken[found] != 1) {
                            found = 0;
                        } else {
                            taken[found] = 0;
                        }
                        break;
                    } else {
                        curH--;
                        continue;
                    }
                    }
                }
                found = 0;
            }
            // cout<<r[i]<<"\t"<<found<<endl;
            if(found == 0) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
}