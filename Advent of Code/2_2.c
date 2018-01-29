#include <stdio.h>
#define l 16
int main()
{
  int a[l][l],checksum=0;
  for(int i=0;i<l;i++)
  {
    for(int j=0;j<l;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<l;i++)
  {
    printf("i=%d\n",i);
    for(int j=0;j<l;j++)
    {
      printf("j=%d\n",j);
      for(int k=j+1;k<l;k++)
      {
        printf("k=%d\n",k);
        int m=a[i][j]/a[i][k];
        printf("m=%d\ta[i][j]=%d\ta[i][k]=%d",m,a[i][j],a[i][k]);
        int n=a[i][k]/a[i][j];
        printf("\nn=%d\n",n);
        if(a[i][j]==m*a[i][k])
        {
          checksum+=a[i][j]/a[i][k];
          printf("i=%d\tj=%d\tk=%d\tchecksum=%d\n",i,j,k,checksum);
        }
        if(a[i][k]==n*a[i][j])
        {
          checksum+=a[i][k]/a[i][j];
          printf("i=%d\tj=%d\tk=%d\tchecksum=%d\n",i,j,k,checksum);
        }
      }printf("\n");
    }
    printf("\n");
  }
  printf("%d\n",checksum);
}
