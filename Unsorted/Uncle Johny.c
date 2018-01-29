#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int i,k,n,a[101],m=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		scanf("%lld",&k);
		for(i=0;i<n;i++)
		{
			if(a[k-1]>a[i])
				m+=1;
		}
		printf("%lld\n",m+1);
	}
}
