#include<stdio.h>
int main()
{
	int tc,n,i;
	scanf("%d",&tc);
	while(tc--)
	{
		long int flag=0,t=0;
		scanf("%ld",&n);
		for(i=1;i<=n;i++)
		{
			if(n%i>flag)
			{
				flag=n%i;
			}
			t=n-flag;
		}
		printf("%ld\n",t);
	}
} 
