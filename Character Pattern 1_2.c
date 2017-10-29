#include <stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int l,c,i,j,flag;
		scanf("%d",&l);
		scanf("%d",&c);
		for(i=1;i<=l;i++)
		{
			if(i%2==0)
				flag=0;
			else
				flag=1;
				for(j=1;j<=c;j++)
				{
					if(flag==1)
					{
						printf("*");
						flag=0;
						continue;
					}
					else
					{
						printf(".");
						flag=1;
						continue;
					}
					
				}
				printf("\n");
		}
	}
	return 0;
}
