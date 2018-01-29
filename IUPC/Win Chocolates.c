#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  long int a[1000000],t,q;
  for(int i=0;i<n;i++)
  {
    scanf("%ld",&a[i]);
  }
  scanf("%ld",&q);
  for(long int i=0;i<q;i++)
  {
    scanf("%ld",&t);
    if(t==1)
    {
      long int l,r,k;
      scanf("%ld %ld %ld",&l,&r,&k);
      for(long int j=l-1;j<r;j++)
      {
        a[j]+=k;
      }
    }else{
      long int l,x;
      scanf("%ld %ld",&l,&x);
      for(long int j=n-1;j>=l;j--)
      {
        //printf("a[j+1]=%ld a[j]=%ld\n",a[j+1],a[j]);
        a[j+1]=a[j];
      }
      a[l]=x;
      n++;
    }
  }
  for(long int i=0;i<n;i++)
    printf("%ld ",a[i]);
  printf("\n");
}
