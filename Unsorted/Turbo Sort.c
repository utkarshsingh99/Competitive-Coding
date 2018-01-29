#include<stdio.h>
int main()
{
	long long int n,a[1000000],i,j,c,k,l;
	scanf("%ld",&n);
	for(k=0;k<n;k++)
		scanf("%ld",&a[k]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	for(l=0;l<n;l++)
		printf("%ld\n",a[l]);
	return 0;
}
