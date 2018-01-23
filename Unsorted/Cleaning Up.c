#include <stdlib.h>
#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    int m,n,a[1000],b[1000],ch=0,as=0,j=0,k=0,che[1000],ass[1000];
    for(int i=0;i<1000;i++)
    {
      a[i]=1;
    }
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
      scanf("%d",&b[i]);
      a[b[i]-1]=0;
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
      {
          if(ch==0)
          {
            che[j]=i+1;
            ch=1;
            as=0;
            j++;
            continue;
          }
          if(as==0)
          {
            ass[k]=i+1;
            as=1;
            ch=0;
            k++;
            continue;
          }
      }
    }
    for(int i=0;i<j;i++)
    {
        printf("%d ",che[i]);
    }
    printf("\n");
    for(int i=0;i<k;i++)
    {
      printf("%d ",ass[i]);
    }
      printf("\n");
  }
}
