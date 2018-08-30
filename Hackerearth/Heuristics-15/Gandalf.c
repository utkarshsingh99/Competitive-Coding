#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      long int n,a[100000],j=1,k,sum=0;
      scanf("%ld",&n);
      for(int i=0;i<n;i++)
      {
        scanf("%ld",&a[i]);
        if(i==0)
        {
          sum+=j;
          k=j;
        }
        else{
        if(a[i]<a[i-1])
        {
          if(k==1)
          {
            int count=0;
            for(int l=i-1;l>=0;l--)
            {
              if(a[l]>=a[l+1])
              {
                count++;
              }
              else
                break;
            }
            sum+=count+1;
          }
          else{
            sum+=1;
            k=1;
          }
        }
        if(a[i]==a[i-1])
        {
          j=k;
          sum+=j;
        }
        if(a[i]>a[i-1])
        {
          j=k+1;
          sum+=j;
          k=j;
        }
      }
      //printf("sum=%ld j=%ld k=%ld\n",sum,j,k);
    }
    printf("%ld\n",sum);
    }
}
