#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[1000000];
    int sum=0;
    scanf("%s",a);
    for(int i=0;i<strlen(a)-1;i++)
    {
      if(a[i]==a[i+1])
      {
        sum+=(int)a[i]-48;
      }
    }
    if(a[0]==a[strlen(a)-1])
      sum+=(int)a[0]-48;
    printf("%d\n", sum);
}
