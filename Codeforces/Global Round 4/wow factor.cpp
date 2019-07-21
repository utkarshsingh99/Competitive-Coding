#include <iostream> 
using namespace std; 
  
int main() 
{ 
    string a, b = "vvovv";
    cin>>a;
    int vcount = 0, ocount = 0, comb = 1, vs[10000], os[10000], vpointer = 0, opointer = 0;
    for(int i = 1; i < a.size()-1; i++) {
        if(a[i] == 'v' && a[i+1] == 'o' && a[i-1] == 'o') {
            a[i] = '-';
        }
    }
    for(int i = a.size() - 1; i >= 0; i--) {
        if(a[i]== '-') {
            continue;
        }
        if(a[i] == 'v' && a[i+1] == 'o') {
            vcount++;
            comb = (ocount)*comb;
            if(vpointer > 0) {
                os[opointer++] = ocount;
            }
            ocount = 0;
        } else if(a[i] == 'v') {
            vcount++;
        } else if(a[i] == 'o' && a[i+1] == 'v') {
            ocount++;
            if(vcount == 1 || vcount == 0) {
                vcount = 2;
            }
            vs[vpointer++] = vcount-1;
            comb = (vcount-1)*comb;
            vcount = 0;
        } else if(a[i] == 'o') {
            ocount++;
        }
        if(i==0) {
            vs[vpointer++] = vcount-1;
            comb = (vcount-1) * comb;
        }
    }
    int sum=0;
    
    int total = 0;
    for(int i = 0; i < vpointer-1; i++) {
        for(int k = 0; k < vpointer; k++) {
        //  cout<<vs[i]<<endl;
            sum+=vs[k];
        }
        for(int j = i; j < opointer; j++) {
            // cout<<total<<endl;
        // cout<<a[i]<<" "<<b[j]<<" "<<sum<<" "<<a[j]<<" "<<endl;
            
            total += vs[i]*os[j]*(sum-vs[j]);
            sum = sum - vs[j];
        }
    }
    cout<<total<<endl;
    return 0; 
} 