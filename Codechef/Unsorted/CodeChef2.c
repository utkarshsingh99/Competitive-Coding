#include <stdio.h>
int mod(int);
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int tca,fc,sc;
		scanf("%d %d %d",&tca,&fc,&sc);
		int diff=sc-fc;
		if(fc>sc)
		{
			int t=fc;
			fc=sc;
			sc=t;
		}
		if(diff==(tca/2)||diff==0)
			printf("0\n");
		else
		{
			if(sc>(tca/2))
			{
				int d =(tca-sc)+(fc-1);
				printf("%d\n",d);
			}
			else
				printf("%d\n",(sc-fc-1));
		}
	}
	return 0;
}
