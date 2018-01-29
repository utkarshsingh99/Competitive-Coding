#include<stdio.h>
int main()
{
	long int n,s[100001],t[100001],c[100001],j=0,i,d,e;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld %ld",&s[i],&t[i]);
		d+=s[i];e+=t[i];
		c[i]=d-e;
		if(i==0)
			j=c[0];
		if(c[i]>0)
		{
			if(c[i]>=j)
				j=c[i];
		}
		else
		{
			if((-1)*c[i]>=j)
				j=(-1)*c[i];
		}
	}
	if(j<0)
		printf("2 %ld",(-1)*j);
	else
		printf("1 %ld",j);
	return 0;
}
