#include <stdio.h>

int main() {
	int a;
	while(1)
	{
		scanf("%d",&a);
		printf("%d\n",a);
		fflush(stdout);
		if(a==42)
			break;
	}

	return 0;
}
