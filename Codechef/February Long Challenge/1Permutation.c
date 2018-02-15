#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--){
    char a[100000];
    scanf("%s",a);
    int alph[26],t[100000],check[100000];
    for(int i=0;i<26;i++)
    {
      alph[i]=0;
      t[i]=0;
    }
    for(int i=0;i<strlen(a);i++)
    {
      alph[(int)a[i]-97]++;
      check[i+1]=0;
    }
    int odd_count=0,minus=0;
    for(int i=0;i<26;i++)
    {
      if(alph[i]%2!=0)
      {
        odd_count++;
      }
      if(odd_count>1)
      {
        minus=1;
        break;
      }
    }
    if(minus)
    {
      printf("-1\n");
      continue;
    }
    int k=1;
    //printf("%ld\n",strlen(a) );
    for(int i=0;i<strlen(a);i++)
    {
      if(a[i]==' ')
        continue;
      for(int j=strlen(a)-1;j>=i+1;j--)
      {
        //printf("i = %d %c %c\n",i,a[i],a[j]);
        if(a[i]==a[j])
        {
          a[j]=' ';
          if(!t[k-1])
          t[k-1]=i+1;
          if(!t[strlen(a)-k])
          t[strlen(a)-k]=j+1;
          //printf("%d %ld t[k-1]=%d  t[strlen(a)-k]=%d\n",k-1,strlen(a)-k,t[k-1],t[strlen(a)-k] );
          k++;
          check[i+1]=1;
          check[j+1]=1;
          break;
        }
      }
    }
    for(int i=1;i<=strlen(a);i++)
    {
      if(check[i]==0)
      {
        for(int j=0;j<strlen(a);j++)
        {
          if(t[j]==0)
          {
            t[j]=i;
            break;
          }
        }
      }
    }
    for(int i=0;i<strlen(a);i++)
    {
        printf("%d ",t[i]);
    }
    printf("\n");
  }
}
