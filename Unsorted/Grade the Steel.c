#include <stdio.h>
int main()
{
  int testcase;
  scanf("%d",&testcase );
  while (testcase--) {
    double hardness,carb_con,tens_str,a=0,b=0,c=0,grade;
    scanf("%lf %lf %lf",&hardness,&carb_con,&tens_str);
    if(hardness>50)
      a=1;
    if(carb_con<0.7)
      b=1;
    if(tens_str>5600)
      c=1;
    if(a&&b&&c)
      grade=10;
    else
        if(a&&b)
          grade=9;
        else
          if(b&&c)
            grade=8;
          else
            if(a&&c)
              grade=7;
            else
              if(a||b||c)
                grade=6;
              else
                grade=5;
    printf("%lg\n",grade);
  }
}
