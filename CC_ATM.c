#include<stdio.h>
int main()
{
	int t;
	float bal;
	int n;
	scanf("%d",&n);
	while(n--)
	{
	scanf("%d",&t);
	scanf("%f",&bal);

		if(t>=(int)bal)
			printf("%0.2f\n",bal);
		else if(t%5!=0)
			printf("%0.2f\n",bal);
		else 
		{
			float amt=bal-(float)t-0.5;
			printf("%0.2f\n",amt);
		}
		
	}
	return 0;
}
