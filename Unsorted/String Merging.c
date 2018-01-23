#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    int n,m;
    char a[6000],b[6000],c[10000];
    scanf("%d %d",&n,&m);
    scanf("%s",a);
    scanf("%s",b);
    for(int i=0,j=0,k=0;i<strlen(a)||j<strlen(b);k++)
    {
      if(i==0)
      {
        c[k]=a[i];
        i++;
        continue;
      }
      if(a[i]==c[k-1])
      {
        c[k]=a[i];
        i++;
        continue;
      }
      if(b[j]==c[k-1])
      {
        c[k]=b[j];
        j++;
        continue;
      }
      else
      {
        if(i<strlen(a))
        {
          c[k]=a[i];
          i++;
        }else
        {
          c[k]=b[j];
          j++;
        }
      }
    }
    int op=1;
    for(int i=0;i<strlen(c)-1;i++)
    {
      if(c[i]!=c[i+1])
        op++;
    }
    printf("%d\n",op);
  }
}
