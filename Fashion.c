//ACCEPTED SOLUTION
#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n,i,j,ans=0,m[1000],f[1000],c;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&m[i]);		
		for(i=0;i<n;i++)
			scanf("%d",&f[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(m[i]<m[j])
				{
					c=m[i];
					m[i]=m[j];
					m[j]=c;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(f[i]<f[j])
				{
					c=f[i];
					f[i]=f[j];
					f[j]=c;
				}
			}
		}
		for(i=0;i<n;i++)
			ans+=m[i]*f[i];
		printf("%d\n",ans);
	}
}
