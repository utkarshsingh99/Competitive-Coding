#include <stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int l,c,i,j,k,m;
		scanf("%d",&l);
		scanf("%d",&c);
		for(i=1;i<=c;i++)
		{
			printf("*");
		}printf("\n");
		for(j=2;j<=(l-1);j++)
		{
			
			for(k=1;k<=c;k++)
			{
				if(k==1||k==c)
					printf("*");
				else
					printf(".");
			}
			printf("\n"); 
		}
		for(m=1;m<=c;m++)
		{
			
			printf("*");
		}
		printf("\n\n");
	}
	return 0;
}
