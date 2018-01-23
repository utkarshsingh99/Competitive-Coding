#include <stdio.h>
#include <math.h>
int main()
{
  int testcase;
  scanf("%d",&testcase);
  while (testcase--) {
    long long int N,Q,A[100000],control,L_X,R_Y,product,sum_of_extremes,prod_of_extremes,largest=-pow(2,63)+1;;
    scanf("%lld %lld",&N,&Q);
    for(long long int i=0;i<N;i++)
    {
      scanf("%lld",&A[i]);
    }
    for(long long int j=0;j<Q;j++)
    {
    scanf("%lld %lld %lld",&control,&L_X,&R_Y);
    if(control==2)
    {
      A[L_X-1]=R_Y;
    }
    else
    {
      sum_of_extremes=A[L_X-1]+A[R_Y-1];
      prod_of_extremes=A[L_X-1]*A[R_Y-1];
      /*chuwi(A,N,L_X,R_Y);*/
      for(long long int i=L_X-1;i<R_Y;i++)
      {
        product=A[i]*(sum_of_extremes-A[i]);
        //product=(A[i]-A[L_X])*(A[R_Y]-A[i]);
        if(product>=largest)
          {
            largest=product;
          }
      }
      printf("%lld\n",largest-prod_of_extremes);
      largest=-pow(2,63)+1;
    }
  }
  }
}
