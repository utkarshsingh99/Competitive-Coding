#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,r=0;
		scanf("%d",&n);
		while(n>0)
		{
			if(n%10==4)
				r+=1;
			n/=10;
		}
		printf("%d\n",r);
	}
}
