#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    char a[100000],b[100000];
    int n,m,match[100000],i,large,large_index,a_s;
    scanf("%d %d",&n,&m);
    scanf("%s %s",a,b);
    for(i=0;i<strlen(b);i++)
    {
      match[i]=0;
      for(int j=i,k=0;j<strlen(b);k++)
      {
        if(k==strlen(a))
          break;
        if(b[j]==a[k])
        {
          match[i]++;
          j++;
          k--;
        /*  if(j==strlen(b)-1)
            break;*/
        }
      //  printf("k=%d j=%d b[%d]=%c a[%d]=%c match[%d]=%d\n",k,j,j,b[j],k,a[k],i,match[i]);
      }//printf("\n" );
    }
    for(int m=0;m<i;m++)
    {
    //  printf("match[%d]=%d\n",m,match[m]);
      if(match[m]>large)
      {
        large=match[m];
        large_index=m;
      }
    }
    //printf("large=%d\n",large_index);
    printf("%d\n",n+m-(large*2)+large+1);
  }
}
