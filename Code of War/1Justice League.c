#include <stdio.h>
int GCD(int,int);
int main()
{
	int i,j,gcd,t,w,s,p,q;
	scanf("%d",&t);
	for(j = 0 ; j < t ; j++)
	{
		scanf("%d %d %d %d",&w,&s,&p,&q);
		int gcd=GCD(p,q);
	   // printf("%d\n",gcd);
	    if(((w-s) % gcd) == 0)
	    {
	    	printf("YES\n");
		}
		else
		{
		printf("NO\n");
		}
	}
	return 0;
}
int GCD(int a,int b)
{
	if(a>b)
	{
		a-=b;
		GCD(a,b);
	}else
		if(b>a)
		{
			b-=a;
			GCD(a,b);
		}
	else
		return a;
}
