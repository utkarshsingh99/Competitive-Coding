#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--){
    char s[100000],dupli[100000];
    int alph[26],check[26],ODD=0;
    for(int i=0;i<26;i++)
    {
      alph[i]=0;
      check[i]=0;
      dupli[i]=' ';
    }
    scanf("%s",s);
    if(strlen(s)%2!=0)
      ODD=1;
    for(int i=0;i<strlen(s);i++)
      alph[(int)s[i]-97]++;
    int odd_count=0,minus=0,midterm=0;
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
    for(int i=0;i<strlen(s);i++)
    {
      //printf("%c\n",dupli[i]);
      check[(int)s[i]-97]++;
      //printf("check[(int)s[i]-97]=%d \n",check[(int)s[i]-97]);
      if(check[(int)s[i]-97]==2)
      {
        dupli[strlen(s)-k]=s[i];
        k++;
        check[(int)s[i]-97]=0;
        //printf("if  %d %c \n",k,dupli[strlen(s)-k-1]);
      }else{
        dupli[i]=s[i];
        //printf("else  %c \n",dupli[i]);
      }
    //  printf("%c %c check[%d]=%d\n",s[i], dupli[i],(int)s[i]-97,check[(int)s[i]-97]);
    }
    for(int i=0;i<strlen(s);i++)
    {
      //printf("dupli[%d]=%c s[%d]=%c\n",i,dupli[i],i,s[i] );
      if(s[i]==dupli[i])
      {
        printf("%d\n",i+1);
        s[i]=' ';
      }else{
        int j;
        for(j=0;j<strlen(s);j++)
        {
          if(dupli[i]==s[j])
          {
              s[j]=' ';
              j=i+1;
              break;
          }
        }
        printf("%d\n",j);
      }
    }
    printf("\n" );
  }
}
