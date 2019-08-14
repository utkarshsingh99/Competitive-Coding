#include<bits/stdc++.h>
using namespace std;
bool prime[10000]; 
void SieveOfEratosthenes(long int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    memset(prime, true, sizeof(prime)); 
  
    for (long int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (long int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    // for (int p=2; p<=n; p++) 
    //    if (prime[p]) 
    //       cout << p << " "; 
}
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
    int largest = INT_MIN;
    for(int i = 0; i < n; i ++) {
        cin>>a[i];
        largest = max(largest, a[i]);
    }
    sort(a, a+n);
    n = removeDuplicates(a, n);
    SieveOfEratosthenes(largest);
    for(long int i = 0; i <= largest; i++) {
        if(a[i] % )
    }
} 