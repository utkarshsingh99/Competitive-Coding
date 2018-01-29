#include<stdio.h>
int fact(int);
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n;
		scanf("%d",&n);
		long long int a=fact(n);
		printf("%lld\n",a);
	}
}
int fact(int n)
{
	long long int x=1;
	if(n==1)
	{
		return x;
	}
	else
	{
		x=n*fact(n-1);;
		return x;
	}
}
