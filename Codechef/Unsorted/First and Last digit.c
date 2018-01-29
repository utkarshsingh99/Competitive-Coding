#include<stdio.h>
#include<math.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n,i,d,e,f;
		scanf("%d",&n);
		for(i=0;;i++)
		{
			d=n/pow(10,i);
			if(d==0)
				break;
		}
		e=n/pow(10,i-1);
		f=n%10;
		printf("%d\n",(e+f));
	}
}
