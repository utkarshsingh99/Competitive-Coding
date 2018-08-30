#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		double n, a, b, faces[10000], aCount = 0, bCount = 0;
		cin>>n>>a>>b;
		for(int i = 0; i < n; i++)
		{
			cin>>faces[i];
			if(a == faces[i])
			{
				aCount++;
			}
			if(b == faces[i])
			{
				bCount++;
			}
		}
		double probA = aCount/n, probB = bCount/n;
		cout<<probA*probB<<"\n";
	}
}