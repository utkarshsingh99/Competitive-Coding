#include <stdio.h>
#include <stdlib.h>
int main()
{
  long int n;
  scanf("%ld",&n);
  long long int cho[1000000],even=0,odd=0;
  for(long int i=0;i<n;i++)
  {
    scanf("%lld",&cho[i]);
    if(cho[i]%2==0)
      even++;
    else
      odd++;
  }
  printf("%d\n",abs(even-odd));
}
