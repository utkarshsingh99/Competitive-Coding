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
    double loss=0;
    int n,q[100000],p[100000];
    double d[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%d %d %lf",&p[i],&q[i],&d[i]);
      loss+=((d[i]*d[i])/10000)*p[i]*q[i];
    }
    printf("%lf\n",loss);
  }
}
