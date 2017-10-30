#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n,i,ind=0;
		char a[100000];
		scanf("%d",&n);
		scanf("%s",&a);
		for(i=0;i<n;i++)
		{
			if(a[i]=='Y')
				ind=2;
			if(a[i]=='I')
				ind=1;
		}
		if(ind==0)
			printf("NOT SURE\n");
		if(ind==1)
			printf("INDIAN\n");	
		if(ind==2)
			printf("NOT INDIAN\n");
	}
}
