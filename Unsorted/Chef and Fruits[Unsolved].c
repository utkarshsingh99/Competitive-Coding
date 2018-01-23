#include <stdio.h>
int main()
{
  int testcase;
  scanf("%d",&testcase );
  while (testcase--) {
    /* code */
    int n,m,k,diff;
    scanf("%d %d %d",&n, &m,&k );
    if(n<m)
    {
      n+=k;
      diff=m-n;
      if(diff<=0)
        printf("0\n" );
      else
        printf("%d\n",diff );
    }
    else{
      if(m<n)
      {
        m+=k;
        diff=n-m;
        if(diff<=0)
          printf("0\n" );
        else
          printf("%d\n",diff );
      }
      else
        printf("0\n");
      }
  }
}
