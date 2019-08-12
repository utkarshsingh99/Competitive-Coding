#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int t;
    cin>>t;
    while(t--) {
        long long int n;
        cin>>n;
        long long int in[n];
        map<long long int, list<long long int>> xorArr;
        for(long long int i = 0; i < n; i++){
            cin>>in[i];
        }
        long long int xx[n];
        xx[0]=in[0];
        for(long long int i=1;i<n;i++)
            xx[i]=xx[i-1]^in[i];
        for(long long int i = 0; i < n; i++) {
            xorArr[xx[i]].push_back(i);
        }
// DISPLAY MAP
        // for(auto i:xorArr) {
        //     cout<<i.first<<endl;
        //     for(auto j:i.second) {
        //         cout<<j<<"\t";
        //     }
        // cout<<endl;
        // }

        map<long long int, list<long long int>>::iterator itr;
        long long int totalSum = 0;
        for(itr = xorArr.begin(); itr != xorArr.end(); itr++) {
            list<long long int>::iterator listitr, bnech = itr->second.begin();;
            if(itr->first == 0) {
                listitr = itr->second.begin();
                totalSum += *listitr;
                listitr++;
                while(listitr != itr -> second.end()) {
                    totalSum += *listitr;    
                    listitr++;
                }
            }
            // cout<<"XOR Value: "<<itr->first<<"\n";
            long long int sum = 0, i = itr->second.size()-1;
            long long int en = itr -> second.size();
                // cout<<"Size: "<<en<<endl;
            for(listitr = itr->second.begin(); listitr != itr->second.end(); listitr++) {
                if(en != 1){
                    sum += *listitr * (en - 2*i - 1);
                    // cout<<"Listitr: "<<*listitr<<"\t"<<sum<<endl;
                    i--;
                }
            }
            // cout<<endl<<"Total Sum: "<<totalSum<<endl;
            if(sum > 0) 
                totalSum += sum-(en*(en-1)/2);
        }
        cout<<totalSum<<endl; 
    }
}