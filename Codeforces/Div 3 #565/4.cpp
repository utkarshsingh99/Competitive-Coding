#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
int main() {
    bool prime[2750131+1];
    int primer[199999], counter = 1;
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=2750131; p++) 
    { 
        if (prime[p] == true) 
        {
            for (int i=p*p; i<=2750131; i += p) 
                prime[i] = false; 
        } 
    }
    for(int i = 2; i < 2750131; i++) {
        if(prime[i]) {
            primer[counter++] = i;
            // cout<<prime[i]<<"\t"<<primer[counter-1]<<"\n";
        }
    } 
    int a, inp, isPrime[100000], notPrime[100000], ipc = 0, npc = 0;
    cin>>a;
    for(int i = 0; i < a*2; i++) {
        cin>>inp;
        if(prime[inp]) {
            isPrime[ipc++] = inp;
        } else {
            notPrime[npc++] = inp;
        }
    }
    sort(isPrime, isPrime + ipc);
    sort(notPrime, notPrime + npc);
    for(int i = 0; i < npc; i++) {
        if(notPrime[i] == 0) {
            continue;
        }
        if(binary_search(isPrime, isPrime + ipc, notPrime[i]/2))
            isPrime[binarySearch(isPrime, 0, ipc, notPrime[i]/2)] = 0;
        else
            notPrime[binarySearch(notPrime, 0, npc, notPrime[i]/2)] = 0;
    }
    for(int i = 0; i < ipc; i++) {
        if(binary_search(isPrime, isPrime + ipc, primer[isPrime[i]])) {
            isPrime[binarySearch(isPrime, 0, ipc, primer[isPrime[i]])] = 0;
        }
    }
    for(int i = 0; i < ipc; i++) {
        if(isPrime[i] != 0) {
            cout<<isPrime[i]<<" ";
        }
    }
    for(int i = 0; i < npc; i++) {
        if(notPrime[i] != 0) {
            cout<<notPrime[i]<<" ";
        }
    }
    cout<<endl;
}