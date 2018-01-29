#include <stdio.h>
int palindrome(int);
int main()
{
	int a;
	scanf("%d",&a);
	while(a--)
	{
		int i,num;
		short int b=0;
		scanf("%d",&num);
		for(i=num+1;;i++)
		{
			b=palindrome(i);
			if(b==1)
			{
				printf("%d\n",i);
				break;
			}
		}	
	}
	return 0;
}
int palindrome(int c)
{
	int rev=0,r;
	int n=c;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==c)
		return 1;
	else 
		return 0;		
}
