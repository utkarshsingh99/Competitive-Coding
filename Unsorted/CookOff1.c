#include <stdio.h>
int main()
{
	int t;
	
		scanf("%d",&t);
	while(t>0)
	{
		float n,v1,v2,i=0;
		scanf("%f %f %f",&n,&v1,&v2);
		

		float te=(n/v2)*2;
		float ts=((1.414)*n)/v1;
		if(te>ts)
			printf("Stairs\n");
		else
			printf("Elevator\n");
		t--;
	}
	
	
}
