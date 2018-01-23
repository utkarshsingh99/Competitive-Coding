#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		long int n;
		scanf("%ld",&n);
		if(n%2==0)
			printf("%ld\n",(n+2)/2);
		else
			printf("%ld\n",(n+1)/2);
	}
}
