#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
  while(scanf("%s",a)!=EOF)
  {
      long int op=0;
      long int ta=0,tb=0,shotsa=5,shotsb=5;
      for(int i=0;i<10;i++)
      {
        if((i%2)!=0)
        {
          shotsb--;
          if(a[i]=='1')
            tb++;
        }else{
          shotsa--;
          if(a[i]=='1')
            ta++;
        }
          if((ta+shotsa)<tb)
          {
            printf("TEAM-B %d\n",i+1);
            op=1;
            break;
          }
          if((tb+shotsb)<ta)
          {
            printf("TEAM-A %d\n",i+1);
            op=1;
            break;
          }
      }
      if(op==1)
        continue;
      /*if(ta<tb)
      {
        printf("TEAM-B 10\n");
        continue;
      }
      if(ta>tb)
      {
        printf("TEAM-A 10\n");
        continue;
      }*/
      for(int i=10;i<20;i+=2)
      {
        if((a[i]=='1')&&(a[i+1]=='0'))
        {
            printf("TEAM-A %d\n",i+2);
            op=1;
            break;
        }
        if((a[i]=='0')&&(a[i+1]=='1'))
        {
            printf("TEAM-B %d\n",i+2);
            op=1;
            break;
        }
      }
      if(op==0)
          printf("TIE\n");
  }
}
