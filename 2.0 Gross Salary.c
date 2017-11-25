#include <stdio.h>
int main()
{
  int testcase;
  scanf("%d",&testcase);
  while (testcase--) {
    long int salary;
    double HRA,DA;
    scanf("%ld",&salary);
    if(salary<1500)
    {
      HRA=0.1*salary;
      DA=0.9*salary;
      double Gross_salary=salary+HRA+DA;
      printf("%.0lf\n",Gross_salary);
    }
    else
    {
      HRA=500;
      DA=0.98*salary;
      double Gross_salary=salary+HRA+DA;
      int j=(long int)(Gross_salary*10)%10;
      if(j!=0)
      printf("%.1lf\n",Gross_salary);
      else
      printf("%.0lf\n",Gross_salary);
    }
  }
}
