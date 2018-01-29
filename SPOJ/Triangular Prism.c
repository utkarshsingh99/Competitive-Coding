#include <stdio.h>
#include <math.h>
int main()
{
  int tc;
  scanf("%d",&tc);
  while (tc--) {
    long double volume,surf_area;
    scanf("%Lf",&volume);
    surf_area=3*sqrt(3)*cbrt(4)*cbrt(4)*cbrt(volume)*cbrt(volume);
    printf("%.10Lf\n",surf_area/2);
  }
}
