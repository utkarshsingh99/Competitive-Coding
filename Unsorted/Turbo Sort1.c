#include<stdio.h>
int main()
{
	long long int i,j,c,n,ar[1000005];
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&ar[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				c=ar[i];
				ar[i]=ar[j];
				ar[j]=c;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%lld\n",ar[i]);
}
