#include<stdio.h>
#include <math.h>
int main()
{
	int tc,i,j;
	scanf("%d",&tc);
	while(tc--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		for(j=a;j<=b;j++)
		{
			for(i=2;i<=(j/2);i++)
			{
				if(j%i==0)
				break;
			}
			if(i==(j/2)+1)
			printf("%d\n",j);
		}
		printf("\n");	
	}
}

