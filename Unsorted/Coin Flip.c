#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int g;
		scanf("%d",&g);
		while(g--)
		{
			long int n,iq,qq;
			scanf("%ld %ld %ld",&iq,&n,&qq);
			if(iq!=qq){
				if(n%2==0)
					printf("%ld\n",n/2);
				else
					printf("%ld\n",(n+1)/2);}
			if(iq==qq){
				if(n%2==0)
					printf("%ld\n",n/2);
				else
					printf("%ld\n",n-(n+1)/2);}
		}
	}
}
