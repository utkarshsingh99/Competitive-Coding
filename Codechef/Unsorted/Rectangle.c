#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    int a[4],i,o=0;
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    for(int i=0;i<4;i++)
    {
      if(a[i]==0)
        continue;
      for(int j=i+1;j<4;j++)
      {
        if(a[i]==a[j])
        {
          a[j]=0;
          a[i]=0;
          break;
        }
        if(j==3)
        {
          o=1;
          printf("NO\n");
          break;
        }
      }
    if(o==1)
      break;
    }
    if(o==0)
      printf("YES\n");
  }
}
