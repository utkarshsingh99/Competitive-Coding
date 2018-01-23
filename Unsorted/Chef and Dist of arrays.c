#include <stdio.h>
int main()
{
  long int t;
  scanf("%ld",&t);
  while (t--) {
    long int n,a[100000],c,b[100000],ham=0,j;
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
    {
      j=i-1;
      scanf("%ld",&a[i]);
      if(i==0)
        c=a[i];
      else
      {
        if(a[j]!=a[i])
          b[j]=a[i];
        else
        {
          j--;
          for(;j>0;j--)
          {
            if(a[j]!=a[i])
            {
              int w=b[j-1];
              b[j-1]=a[i];
              b[i-1]=w;
            }
          }
        }
      }
    }
    b[n-1]=c;
    for(int i=0;i<n;i++)
    {
      if(a[i]!=b[i])
        ham++;
    }
    printf("%ld\n",ham);
    for(int i=0;i<n;i++)
    {
      printf("%ld ",b[i]);
    }
    printf("\n");
  }
}
