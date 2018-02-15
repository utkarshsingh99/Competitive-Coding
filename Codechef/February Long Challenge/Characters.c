#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int check(char b[])
{
  int c[4]={1,1,1,1};
  for(int i=0;i<4;i++)
  {
    if(b[i]=='c')
    {
      c[0]--;
      continue;
    }
    if(b[i]=='h')
    {
      c[1]--;
      continue;
    }
    if(b[i]=='e')
    {
      c[2]--;
      continue;
    }
    if(b[i]=='f')
    {
      c[3]--;
      continue;
    }
  }
  for(int i=0;i<4;i++)
  {
    if(c[i]!=0)
      return 0;
  }
  return 1;
}
int main()
{
  typedef long long int ll;
  int t;
  scanf("%d",&t);
  while(t--)
  {
    char a[500000],b[4];
    scanf("%s",a);
    ll k;
    for(int i=0;i<strlen(a);i++)
    {
      if(a[i]=='c'||a[i]=='h'||a[i]=='e'||a[i]=='f')
      {
        k=i;
        b[0]=a[i];
        b[1]=a[i+1];
        b[2]=a[i+2];
        b[3]=a[i+3];
        break;
      }
    }
    ll flag=check(b),count=0,j;
    if(flag==1)
      count++;
    for(int i=k+1;i<strlen(a);i++)
    {
      if(a[i]=='c'||a[i]=='h'||a[i]=='e'||a[i]=='f')
      {
          b[0]=a[i];
          b[1]=a[i+1];
          b[2]=a[i+2];
          b[3]=a[i+3];
        flag=check(b);
        if(flag==1)
          count++;
      }
    }
    if(count!=0)
      printf("lovely %lld\n",count);
    else
      printf("normal\n");
  }
}
