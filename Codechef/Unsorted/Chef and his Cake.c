#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,m,costb=0,costc=0;
    char a[100][100],b[100][100],c[100][100];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(i%2==0)
        {
          if(j%2==0)
          {
            b[i][j]='R';
            c[i][j]='G';
          }
          else
          {
            b[i][j]='G';
            c[i][j]='R';
          }
        }
        else{
          if(j%2!=0)
          {
            b[i][j]='R';
            c[i][j]='G';
          }
          else
          {
            b[i][j]='G';
            c[i][j]='R';
          }
        }
      }
    }
    for(int i=0;i<n;i++)
    {
      scanf("%s",a[i]);
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(a[i][j]!=b[i][j])
        {
          if(a[i][j]=='R')
            costb+=5;
          else
            costb+=3;
        }
        if(a[i][j]!=c[i][j])
        {
          if(a[i][j]=='R')
            costc+=5;
          else
            costc+=3;
        }
      }
    }
    if(costb<costc)
      printf("%d\n",costb);
    else
      printf("%d\n",costc);
  }
}
