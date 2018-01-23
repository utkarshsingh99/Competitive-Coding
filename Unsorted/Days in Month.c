#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    int n,a;
    char str[10];
    scanf("%d %s",&n,str);
    if(strcmp(str,"mon")==0)
      a=0;
    if(strcmp(str,"tues")==0)
      a=1;
    if(strcmp(str,"wed")==0)
      a=2;
    if(strcmp(str,"thurs")==0)
      a=3;
    if(strcmp(str,"fri")==0)
      a=4;
    if(strcmp(str,"sat")==0)
      a=5;
    if(strcmp(str,"sun")==0)
      a=6;
  if(n==28)
  {
    for(int i=0;i<7;i++)
    {
      printf("4 ");
      if(i==6)
        printf("\n");
    }
    continue;
  }
  if(n==30)
  {
    switch(a)
    {
      case 0: printf("5 5 4 4 4 4 4\n");
        break;
      case 1: printf("4 5 5 4 4 4 4\n");
        break;
      case 2: printf("4 4 5 5 4 4 4\n");
        break;
      case 3: printf("4 4 4 5 5 4 4\n");
        break;
      case 4: printf("4 4 4 4 5 5 4\n");
        break;
      case 5: printf("4 4 4 4 4 5 5\n");
        break;
      case 6: printf("5 4 4 4 4 4 5\n");
        break;
  }
}
  if(n==31)
  {
      switch(a)
      {
        case 0: printf("5 5 5 4 4 4 4\n");
            break;
        case 1: printf("4 5 5 5 4 4 4\n");
          break;
        case 2: printf("4 4 5 5 5 4 4\n");
          break;
        case 3: printf("4 4 4 5 5 5 4\n");
          break;
        case 4: printf("4 4 4 4 5 5 5\n");
          break;
        case 5: printf("5 4 4 4 4 5 5\n");
          break;
        case 6: printf("5 5 4 4 4 4 5\n");
          break;
        }
  }
  if(n==29)
  {
    switch(a)
    {
      case 0: printf("5 4 4 4 4 4 4\n");
        break;
      case 1: printf("4 5 4 4 4 4 4\n");
        break;
      case 2: printf("4 4 5 4 4 4 4\n");
        break;
      case 3: printf("4 4 4 5 4 4 4\n");
        break;
      case 4: printf("4 4 4 4 5 4 4\n");
        break;
      case 5: printf("4 4 4 4 4 5 4\n");
        break;
      case 6: printf("4 4 4 4 4 4 5\n");
        break;
    }
  }

}
}
