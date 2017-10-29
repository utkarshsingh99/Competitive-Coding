#include <stdio.h>
int main()
{
	int tc,num,r,rev=0,b,c;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&num);
		b=num+1;
		c=b;		
		for(;;b++)
		{
			
			while(b!=0)
			{
				r=b%10;
				rev=rev*10+r;
				b=b/10;
			}
			if(c==rev)
			{
				printf("%d",c);
				break;
			}
		}	
	}
	return 0;
}
