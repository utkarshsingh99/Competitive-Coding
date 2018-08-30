#include <stdio.h>
int lcm(int,int);
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,m=0,a[100000],k=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      for(int j=i;j<=n;j++)
      {
        if(n==lcm(i,j))
        {
          m++;
          a[k]=i;
          a[k+1]=j;
          k+=2;;
          //("%d %d\n",i,j);
        }
      }
    }
    printf("%d\n",m);
    for(int i=0;i<k;i+=2)
    {
      printf("%d %d\n",a[i],a[i+1]);
    }
  }
}


// Function to return LCM of two numbers
int lcm(int m, int n)
{
  int m1=m,n1=n;
  while( m1 != n1 ){
  if( m1 > n1 )
      n1 += n;
  else
      m1 += m;
}
return m1;
}
