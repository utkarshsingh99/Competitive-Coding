#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n=0,m=0,a[1000000],c[1000000];
  for(int p=0;p<9;p++)
  {
  for(int o=0;o<9;o++)
  {
    for(int i=0;i<9;i++)
    {
      for(int j=0;j<9;j++)
      {
        for(int k=0;k<9;k++)
        {
          for(int l=0;l<9;l++)
          {
            for(int m=0;m<9;m++)
            {
              int even=0,odd=0;
             if(p%2==0)
                even+=p;
              else
                odd+=p;
              if(i%2==0)
                  even+=i;
                else
                  odd+=i;
                if(j%2==0)
                  even+=j;
                else
                  odd+=j;
                if(k%2==0)
                  even+=k;
                else
                  odd+=k;
                if(m%2==0)
                  even+=m;
                else
                  odd+=m;
                  if(o%2==0)
                    even+=o;
                  else
                    odd+=o;
                    if(n<1000000)
                      a[n]=abs(even-odd);
                    else
                    {
                      c[m]=abs(even-odd);
                      m++;
                    }
                    n++;
            }
          }
        }
      }
    }
  }
}
int t;
scanf("%d",&t);
while(t--)
{
  long int b,answer=0;
  scanf("%ld",&b);
  for(int i=0;i<b;i++)
  {
    for(int j=0;j<b;j++)
    {
      int number=i+j+2;
      if(number<1000000)
        answer+=a[number];
      else
      {
        j=number-1000000;
        answer+=c[j];
      }
    }
  }
  printf("%ld\n",answer);
}
}
