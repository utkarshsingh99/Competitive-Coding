#include<stdio.h>
/*
The Euclidean Algorithm says that the GCD of 2 numbers a & b is equal to the GCD of (a-b) & b.
This algo has been used to solve this code
*/
long long int GCD(long long int,long long int);
int main()
{
		long long int a,b,c;
		scanf("%lld",&a);
		scanf("%lld",&b);
		scanf("%lld",&c);
		long long int d= GCD(a,b);
		long long int e=GCD(d,c);
		printf("%lld\n",e);

}
long long int GCD(long long int a,long long int b)
{
	if(a>b)
	{
		a-=b;
		GCD(a,b);
	}else
		if(b>a)
		{
			b-=a;
			GCD(a,b);
		}
	else
		return a;
}
