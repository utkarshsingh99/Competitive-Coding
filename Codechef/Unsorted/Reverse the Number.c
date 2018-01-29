#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n,r,rv=0;
		scanf("%d",&n);
		while(n>0)
		{
			r=n%10;
			rv=rv*10+r;
			n/=10;
		}
		printf("%d\n",rv);
	}
}
