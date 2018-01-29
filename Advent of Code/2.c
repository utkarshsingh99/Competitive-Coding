#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[16][16],checksum=0;
  for(int i=0;i<16;i++)
  {
    int largest=0,smallest=100000;
    for(int j=0;j<16;j++)
    {
      scanf("%d",&a[i][j]);
      if(largest<a[i][j])
        largest=a[i][j];
      if(smallest>a[i][j])
        smallest=a[i][j];
    }
    checksum+=(largest-smallest);
  }
  printf("%d\n",checksum);
}
