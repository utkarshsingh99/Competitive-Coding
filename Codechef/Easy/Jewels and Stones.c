#include<stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    char s[1000],j[1000];
    int count=0;
    scanf("%s %s",j,s);
    for(int i=0;i<strlen(s);i++)
    {
      for(int k=0;k<strlen(j);k++)
      {
        if(s[i]==j[k])
        {
          count++;
          break;
        }
      }
    }
    printf("%d\n",count);    
  }
}
