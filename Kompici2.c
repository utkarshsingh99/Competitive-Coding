#include<stdio.h>
int check(long long int,long long int);
int main()
{
	long long int j,i,n,a[50000],ans=0;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			ans+=check(a[i],a[j]);
		}
	}
	printf("%lld",ans);
}
int check(long long int a,long long int b)
{
	long long int i=0,r,t,d[10]={0,0,0,0,0,0,0,0,0,0},c[10]={0,0,0,0,0,0,0,0,0,0},j,flag=0;
	while(a!=0)
	{
		r=a%10;a/=10;
		d[r]=r;i++;
	}
	i=0;
	while(b!=0)
	{
		r=a%10;a/=10;
		c[r]=r;i++;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(c[j]!=0){
			if(d[i]==c[j]){
				flag=1;break;
			}}
		}
		if(flag==1)
			break;
	}
	return flag;
}
