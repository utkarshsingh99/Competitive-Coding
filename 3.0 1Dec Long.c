#include <stdio.h>
#include <stdlib.h>
int main()
{
  long int diamonds[100000],digit;
  for(long int n=1001;n<10000;n++)
  {
    for(long int i=0;i<n;i++)
    {
      for(long int j=0;j<n;j++)
      {
        int even_sum=0,odd_sum=0;
        long int room_number=i+j+2;
        while(room_number>0)
        {
          digit=room_number%10;
          if(digit%2==0)
            even_sum+=digit;
          else
            odd_sum+=digit;
          room_number/=10;
        }
        diamonds[n-1001]=0;
        diamonds[n-1001]=diamonds[n-1001]+abs(even_sum-odd_sum);
      }
    }
  }
  int testcases;
  scanf("%d",&testcases);
  while (testcases--) {
    long int n,room_number,digit,smalldiam=0;
    scanf("%ld",&n);
    if(n<=1000)
    {

    for(long int i=0;i<n;i++)
    {
      for(long int j=0;j<n;j++)
      {
        int even_sum=0,odd_sum=0;
        room_number=i+j+2;
        while(room_number>0)
        {
          digit=room_number%10;
          if(digit%2==0)
            even_sum+=digit;
          else
            odd_sum+=digit;
          room_number/=10;
        }
        smalldiam=smalldiam+abs(even_sum-odd_sum);
      }
    }
    printf("%ld\n",smalldiam);
  }
  else
    printf("%ld",diamonds[n-1001]);
}
}
