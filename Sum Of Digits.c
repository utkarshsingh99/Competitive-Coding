#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n,rv=0,r;
		scanf("%d",&n);
		while(n>0)
		{
			r=n%10;
			rv+=r;
			n/=10;
		}
		printf("%d\n",rv);
	}
}
