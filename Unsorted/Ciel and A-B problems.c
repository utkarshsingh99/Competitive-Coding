#include<stdio.h>
int main()
{
	int c,a,b,d,r;
	scanf("%d %d",&a,&b);
	c=a-b;
	d=c/10;
	r=c%10;
	if(r==4)
		r+=1;
	else
		r=4;
	printf("%d",(d*10)+r);
}
