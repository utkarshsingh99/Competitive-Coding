#include <stdio.h>
#include <string.h>
int main()
{
  typedef long long int ll;
  ll n,qn,q,score=0,lose=0;
  scanf("%lld",&n);
  char a[100000];
  scanf("%s",a);
  for(ll i=0;i<strlen(a);i++)
  {
    if(a[i]=='>')
      score++;
    if(a[i]=='<')
      score--;
    if(score<0)
    {
      lose=1;
      break;
    }
  }
  scanf("%lld",&qn);
  for(ll j=0;j<qn;j++)
  {
    scanf("%lld",&q);
    if(q==-1)
    {
      if(lose==1)
        printf("LOSE\n");
      else
        printf("WIN\n");
    }else{
      if(a[q-1]=='>')
        a[q-1]='<';
      else
        a[q-1]='>';
          score=0;lose=0;
      for(ll i=0;i<q+1;i++)
      {
        if(a[i]=='>')
          score++;
        if(a[i]=='<')
          score--;
        if(score<0)
        {
          lose=1;
          break;
        }
      }
      if(score>0)
        lose=0;
    }
  }
}
