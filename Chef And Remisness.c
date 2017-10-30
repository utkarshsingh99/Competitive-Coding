#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(a>b)
			printf("%d %d\n",a,(a+b));
		else
			printf("%d %d\n",b,(a+b));
	}
}
