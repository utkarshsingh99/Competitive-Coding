#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int ct,lr,tct,tlr,tcl;
		scanf("%d %d %d %d %d",&ct,&lr,&tct,&tlr,&tcl);
		if((14-ct*tct-lr*tlr-tcl)>=3)
			printf("Khushi\n");
		else
			printf("Hotash\n");
	}
	return 0;
}
