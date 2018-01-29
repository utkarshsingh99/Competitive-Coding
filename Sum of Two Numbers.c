#include <stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		double a,b,sum;
		scanf("%lf %lf",&a,&b);
		sum=a+b;
		printf("%lf\n",sum);
	}
}
