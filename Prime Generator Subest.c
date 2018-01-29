#include <stdio.h>
int main()
{
	int i,a;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			printf("%d",a);
			break;
		}
	}
}
