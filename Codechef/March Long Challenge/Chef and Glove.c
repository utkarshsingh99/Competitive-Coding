#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    long int n,l[100000],g[100000],front=1,back=1;
    scanf("%ld",&n);
    for(int i=0;i<n;i ++)
    {
      scanf("%ld",&l[i]);
    }
    for(int i=0;i<n;i ++)
    {
      scanf("%ld",&g[i]);
      if(l[i]>g[i])
        front=0;
      if(l[n-1-i]>g[i])
        back=0;
    }
    if(front&&back)
      printf("both\n");
    else{
      if(front)
        printf("front\n");
      else
        if(back)
          printf("back\n");
        else
          printf("none\n");
    }
  }
}
