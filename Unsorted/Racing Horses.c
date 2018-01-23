#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int i,j,m,n,s[100000],ans=1000000000;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			scanf("%lld",&s[i]);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(s[i]>s[j])
				{
					m=s[j];
					s[j]=s[i];
					s[i]=m;
				}
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(ans>abs(s[i]-s[i+1]))
				ans=abs(s[i]-s[i+1]);
		}
		printf("%lld\n",ans);
	}
}
