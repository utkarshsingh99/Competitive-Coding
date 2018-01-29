#include <stdio.h>
#include <string.h>
int main()
{
  char a[100],b[100],c[100];
  int length,same=0,output=0;
  scanf("%s",a);
  scanf("%s",b);
  if(strlen(a)>strlen(b))
    length=strlen(a);
  else
    length=strlen(b);
  for(int i=0;i<strlen(b);i++)
  {
    same=0;
    for(int j=0;j<strlen(a);j++)
    {
      if(b[i]==a[j])
      {
        a[j]=' ';
        same=1;
        break;
      }
    }
    if(same==0)
    {
      printf("NO");
      output=1;
    }
  }
  if(output==0)
  {
    printf("YES");
  }
}
