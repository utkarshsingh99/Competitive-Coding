#include <stdio.h>
#include <stdlib.h>
int main()
{
  int testcases;
  scanf("%d",&testcases);
  while (testcases--) {
    long long int n,room_number,digit,diamonds=0;
    scanf("%lld",&n);
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
        diamonds=diamonds+abs(even_sum-odd_sum);
      }
    }
    printf("%lld\n",diamonds);
  }
}
