#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",tc);
	while(tc--)
	{
		long int a;
		scanf("%ld",&a);
		long int b=a>>1;
		printf("%ld\n",b);
	}
}
