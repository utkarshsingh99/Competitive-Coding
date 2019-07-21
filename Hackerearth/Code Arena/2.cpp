#include<bits/stdc++.h>
using namespace std;
int LCSubStr(char *X, char *Y, int m, int n) 
{   
    int LCSuff[m+1][n+1]; 
    int result = 0;  
    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            if (i == 0 || j == 0) 
                LCSuff[i][j] = 0; 
  
            else if (X[i-1] == Y[j-1]) 
            { 
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1; 
                result = max(result, LCSuff[i][j]); 
            } 
            else LCSuff[i][j] = 0; 
        } 
    } 
    return result; 
} 
int main() {
    int n;
    cin>>n;
    char a[n][15];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
         
    }
}