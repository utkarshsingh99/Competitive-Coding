#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000],words[100][100];
    int j=0,k=0;
    scanf("%[^\n]",ar);
    for(int i=0,k=0;i<strlen(ar);i++,k++)
    {
      if(ar[i]==' ')
      {
        k=0;
        j++;
        i++;
      }
      words[j][k]=ar[i];
    }
    k=0;
    while(j>=0)
    {
      if(k==strlen(words[j]))
      {
        printf(" ");
        k=0;
        j--;
      }
      printf("%c",words[j][k]);
      k++;
    }
}
