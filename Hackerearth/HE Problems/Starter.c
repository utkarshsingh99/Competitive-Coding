#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int p,pt,pf,sum,n,th,fi;
    scanf("%d",&p);
    th=p;
    fi=p;
    while(1)
    {
      th--;
      if(th%3==0)
        break;
    }
    while(1)
    {
      fi--;
      if(fi%5==0)
        break;
    }
  //  printf("%d %d\n",th,fi);
    pt=(th-3)/3+1;
    //printf("%d=(%d-3)/3+1\n",pt,th);
    pf=(fi-5)/5+1;
  //  printf("%d=(%d-5)/5+1\n",pf,fi);
    sum=(pt*(3+th))/2 + (pf*(5+fi))/2;
  //  printf("%d=(%d*(3+%d))/2 + (%d*(5+%d))/2\n",sum,pt,th,pf,fi);
    n=15;
    int i=2;
    while((15*i)<=p)
    {
      n+=(15*i);
      i++;
    }
    if(p>15)
      sum-=n;
    printf("%d\n",sum);
  }
}
