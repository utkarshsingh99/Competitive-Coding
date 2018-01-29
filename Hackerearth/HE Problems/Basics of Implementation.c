#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  int b[10],j;
  for(int i=0;i<10;i++)
    b[i]=0;
  scanf("%s",a);
  for(int i=0;i<strlen(a);i++)
  {
    j=a[i]-48;
    b[j]++;
  }
  for(int i=0;i<10;i++)
  {
    printf("%d %d\n",i,b[i]);
  }
}
