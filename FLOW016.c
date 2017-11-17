#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    float a,b;
    scanf("%f %f",&a,&b);
    int c=b;
    if (a>b)
    {
        while (b>=1)
        {
          if(a%b==0)
          {printf("%d ",b);
              break;
          }else
            b--;
        }
    }
    else
    {
      while (a>=1)
      {
        if (b%a==0)
        {
          printf("%d ",b);
          break;
        }
        else
          a--;
      }
    }
    printf("%d\n",(a*c)/b);
    }
  }

