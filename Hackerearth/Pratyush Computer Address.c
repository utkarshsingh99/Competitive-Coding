#include <string.h>
#include <stdio.h>
int main()
{
  char s[15];
  int a=0,b[4],j=0,flag=0;
  scanf("%s",s);
  for(int i=0;i<strlen(s);i++)
  {
      if(i==3||i==7||i==11)
      {
        b[j]=a;
        if(b[j]>255||b[j]<0)
          flag=1;
        a=0;
        j++;
      }
      else
        a=a*10+((int)s[i]-48);
  }
  if(flag==1)
    printf("NO\n");
  else
    printf("YES\n");
}
