#include <stdio.h>
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--)
  {
    long int n;
    scanf("%ld",&n);
    if (n%2==0) {
      printf("Thankyou Shaktiman\n");
    }
    else
      printf("Sorry Shaktiman\n");
  }
}
