#include <stdio.h>
int main()
{
	int tc,noe,i,j;
	int a[100];
	do
	{
		scanf("%d",&tc);
	}while(tc<1||tc>100);
		while(tc--)
		{
			do
			{
				scanf("%d",&noe);
			}while((noe<7)||(noe>100));
			
			for(i=0;i<noe;i++)
			{
				scanf("%d",&a[i]);
				if(a[i]>10||a[i]<1)
					i--;
			}
			for(j=0;j<noe;j++)
			{
				if(a[j]!=a[noe-j-1]||(a[j]+1<a[j+1]))
				{
					printf("no\n");
						break;
				}
			}
			if((j==noe)&&(a[0]==1))
			{
				printf("yes\n");
			}
			else
				printf("no\n");
		}
}
