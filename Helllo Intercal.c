#include <stdio.h>
#include <string.h>
#include <math.h>
int convert(int);
int main()
{
  int n=0;
  char c[100];
  scanf("%[^\n]",c);
  //printf("Pos\to/p\tbin\tactual\treqhead\tchange");
  for(int i=0;i<strlen(c);i++)
  {
    int binary=0,rev_binary=0,d=(int)c[i],r;
    binary=convert(d);
    int k=binary;
    while (k>0) {
      r=k%10;
      rev_binary=rev_binary*10+r;
      k/=10;
    }
    int m=rev_binary*10,req_pos=0,j=0;
    if(i==5)
      m*=10;
    while(m>0)
    {
      r=m%10;
      req_pos+=r*pow(2,j);
      m/=10;
      j++;
    }
    int change;
    if(req_pos>n)
    {
      change=256-req_pos+n;
    }
    else
    {
      change=n-req_pos;
    }
    printf("%d\t%c\t%d\t%d\t%d\t%d\n",n,c[i],binary,rev_binary,req_pos,change);
    n=req_pos;
  }
}
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}
/*
DO ,1 <- #13
PLEASE ,1SUB#1 <- #238
DO ,1SUB#2 <- #112
DO ,1SUB#3 <- #112
DO ,1SUB#4 <- #0
DO ,1SUB#5 <- #64
PLEASE ,1SUB#6 <- #62
PLEASE ,1SUB#7 <- #34
DO ,1SUB#8 <- #32
DO ,1SUB#9 <- #72
DO ,1SUB#10 <- #136
DO ,1SUB#11 <- #88
DO ,1SUB#12 <- #136
DO ,1SUB#13 <- #64
DO ,1SUB#14 <- #80
DO READ OUT ,1
PLEASE GIVE UP
*/
