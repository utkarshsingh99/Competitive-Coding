#include <stdio.h>
#include <string.h>
int main()
{
  int tc;
  scanf("%d",&tc);
  while (tc--)
  {
    long long int n;
    int b[100000],i=0,j,size_of_n,direction=0,c;
    char a[1000];
    scanf("%lld",&n);
    scanf("%s",a);
    while (n>0)
    {
      b[i]=n%10;
      n/=10;
      i++;
    }
    size_of_n=i-1;
    for(i=0,j=size_of_n;i<strlen(a);i++)
    {
      c=(int)a[i]-b[j];
      if(c<97)
        c=c+26;
      if(j==size_of_n)
      {
        direction=1;
        i++;
        c=(int)a[i]-b[j];
        if(c<97)
          c=c+26;
      }
      if(j==0)
      {
        direction=0;
        i++;
        c=(int)a[i]-b[j];
        if(c<97)
          c=c+26;
      }
      if(direction==0)
        j++;
      if(direction==1)
        j--;
      printf("%c",c);
    }
    printf("\n");
  }
}
