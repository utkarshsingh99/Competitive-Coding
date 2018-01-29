#include<stdio.h>
#include<math.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n,i=11,f=0;
		scanf("%d",&n);
		while(i>=0)
		{
			if(n<pow(2,i))
			{	i--;
				continue;
			}
			else
			{
				n-=pow(2,i);
				f+=1;
				continue;
			}
		}
		printf("%d\n",f);
	}
}
