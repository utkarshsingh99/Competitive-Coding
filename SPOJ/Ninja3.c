#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		long long int N,a,b,flag;
		scanf("%lld %lld %lld",&N,&a,&b);
		
		if(a>b)
			flag=b;
		else
			flag=a;
		while(flag>0)
		{
			if(a%flag==0&&b%flag==0)
			{
				printf("%d\n",(flag*N));
				break;
			}
			flag--;
		}
	}
}
