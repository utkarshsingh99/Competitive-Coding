#include<stdio.h>
int main()
{
	int n,s,t,a=0,b=0,diff=0,wnr;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&s,&t);
		a+=s;b+=t;
		if(a>b&&a-b>diff)
		{
			diff=a-b;
			wnr=1;
		}
		else
		if(a<b&&b-a>diff)
		{
			diff=b-a;
			wnr=2;
		}
	}
	printf("%d %d",wnr,diff);
}
