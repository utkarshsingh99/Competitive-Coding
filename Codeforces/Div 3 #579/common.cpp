#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(long int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    // To store index of next unique element 
    int j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 
int main() {
    int n;
    cin>>n;
    long int a[n];
    for(int i = 0; i < n; i ++) {
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<"\t";
    } cout<<
    n = removeDuplicates(a, n);
    long int smallest = a[0], count = 1;
    for(long int i = 2; i <= smallest; i++) {
        int numcount = 0;
        for(long int j = 0; j < n; j++) {
            if(a[j] % i == 0) {
                numcount++;
            }
        }
        if(numcount == n) {
            count++;
        }
    }
    cout<<count<<endl;
}