#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,i,j,flag=0;
        scanf("%d",&n);
        int ar[1001];
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(ar[i]*2==ar[j]||ar[i]/2==ar[j])
                    flag+=1;
            }
        }
        printf("%d\n",flag);
    }
}

