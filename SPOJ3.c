#include <stdio.h>
int prime(int);
int main()  //Prime Genrator
{
	short int a;
	scanf("%d",&a);
	while(a--)
	{
		int b,c,i,j;
		scanf("%d",&b);			
		scanf("%d",&c);
		if((c<b)||(c-b>100000)||(c<0)||(b<0))
			continue;
		for(j=b;j<=c;j++)
		{
			int k=prime(j);
			if(k!=0)
				printf("%d\n",k);
		}
		printf("\n");
	}
	return 0;
}
int prime(int j)
{
	int k;
	for(k=2;k<j;k++)
	{
		if(j%k==0)
			break;
	}
	if(j==k)
		return j;
	else
		return 0;
}
