#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char a[100000];
  int sum=0;
  scanf("%s",a);
  for(int i=0;i<strlen(a)/2;i++)
  {
    if(a[i]==a[strlen(a)/2+i])
      sum+=2*((int)a[i]-48);
  }
  printf("%d\n",sum);
}
