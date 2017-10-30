#include <stdio.h>
int main()
{
	int tc;
	
	scanf("%d",&tc);
	while(tc--)
	{
		long double n,i,ans=1.0;
		scanf("%llf",&n);
		for(i=1.0;i<=n;i++)
			ans*=i;
		printf("%llf\n",ans);
	}
	return 0;
}
