#include<stdio.h>
int main()
{
  int odd=0,even=0,n,a[1000];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    /* code */
    scanf("%d",&a[i]);
    if(a[i]%2==0)
      even++;
    else
      odd++;
  }
  if(even>odd)
    printf("READY FOR BATTLE\n");
  else
    printf("NOT READY\n");
}
