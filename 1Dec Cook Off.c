#include <stdio.h>
#include <string.h>
int compare(char *,char *);
int copy(char *,char *);
int main()
{
  long int t;
  scanf("%ld",&t);
  while (t--) {
    long int n,t1=0,t2=0,flag=0;
    char str1[100],str2[100],stri[100];
    scanf("%ld",&n);
    for(long int i=0;i<n;i++)
    {
      scanf("%s",stri);
      if(i==0)
      {
        strcpy(str1,stri);
        t1++;
        continue;
      }
      if((strcmp(stri,str1)!=0)&&(flag==0))
      {
        strcpy(str2,stri);
        t2++;
        flag=1;
        continue;
      }
      if(strcmp(stri,str1)!=0)
      {
        t2++;
        continue;
      }
      if(strcmp(stri,str2)!=0)
      {
        t1++;
        continue;
      }
    }
    if(t1>t2)
      printf("%s\n",str1);
    if(t2>t1)
      printf("%s\n",str2);
    if(t1==t2)
      printf("Draw\n");
  }
}
int copy(char *p,char *q)
{
  while(*p!='\0')
  {
    *q=*p;
    q++;
    p++;
  }
  *q='\0';
  return 0;
}
int compare(char *p,char *q)
{
  while (*p!='\0'&&*q!='\0') {
      if(*p!=*q)
        return 1;
      p++;
      q++;
  }
  return 0;
}
