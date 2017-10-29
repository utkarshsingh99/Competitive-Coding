#include <stdio.h>
int main()
{
    long int tc;
    scanf("%ld",&tc);
    while(tc--)
    {
               printf("\n");
               long int noc,sum=0,a,i;
               scanf("%ld",&noc);
               for(i=0;i<noc;i++)
               {
                      scanf("%ld",&a);
                      sum=((sum%noc)+(a%noc))%noc;
               }
               if(sum==0)
                      printf("YES\n");
               else
                      printf("NO\n");       
    }
    return 0;
}

