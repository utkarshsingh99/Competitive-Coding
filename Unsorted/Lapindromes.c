#include <string.h>
#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    char a[1000],one[26],two[26];
    for(int i=0;i<26;i++)
    {
      one[i]=0;
      two[i]=0;
    }
    int mid,op=0;
    scanf("%s",a);
    if(strlen(a)%2==0)
    {
      mid=strlen(a)/2;
      for(int i=0;i<mid;i++)
      {
        one[a[i]-97]++;
        two[a[mid+i]-97]++;
      }
    }
    else{
      mid=strlen(a)/2;
      for(int i=0;i<mid;i++)
      {
        one[(int)a[i]-97]++;
        two[a[mid+i+1]-97]++;
      }
    }
    for(int i=0;i<26;i++)
    {
      if(one[i]!=two[i])
      {
        printf("NO\n");
        op=1;
        break;
      }
    }
    if(op==0)
      printf("YES\n");
  }
}
