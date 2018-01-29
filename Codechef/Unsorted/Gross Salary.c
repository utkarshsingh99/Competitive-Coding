#include <stdio.h>
int main()
{
  int testcase;
  scanf("%d",&testcase);
  while (testcase--) {
    long long int salary;
    long double HRA,DA,gross;
    scanf("%lld",&salary);
    if(salary<1500)
    {
      HRA=0.1*salary;
      DA=0.9*salary;
      gross=(long double)salary+HRA+DA;
      printf("%Lg\n",gross);
    }
    else
    {
      HRA=500.0;
      DA=0.98*salary;
      gross=(long double)salary+HRA+DA;
      printf("%Lg\n",gross);
    }
    /* code */
  }
}
