#include<stdio.h>
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--)
  {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
      printf("<\n");
    if(a>b)
      printf(">\n");
    if(a==b)
      printf("=\n");
  }
}
