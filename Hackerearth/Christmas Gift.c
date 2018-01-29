#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long int a[3],sum,largest=0,smallest=1000001,mid,steps=0;
    for(int i=0;i<3;i++)
    {  scanf("%ld",&a[i]);
    }
    for(int i=0;i<3;i++)
    {int m;
      for(int j=i+1;j<3;j++)
      {
        if(a[i]>a[j])
        {
          m=a[i];
          a[i]=a[j];
          a[j]=m;
        }
      }
    }
    //printf("%ld %ld %ld\n",a[0],a[1],a[2]);
    smallest=a[0];
    mid=a[1];
    largest=a[2];
  //printf("%ld %ld %ld\n",largest,mid,smallest);
    //finding largest number
  /*  if(a>b)
    {
      if(a>c)
      {
        largest=a;
        a=0;
      }else{
        largest=c;
        c=0;
      }
    }else{
      if(b>c)
      {
        largest=b;
        b=0;
      }
      else
      {
        largest=c;
        c=0;
      }
    }
    if(a<b)
    {
      if(a<c){
        smallest=a;
        a=0;
      }
      else{
        smallest=c;
        c=0;
      }
    }else{
      if(b<c){
        smallest=b;
        b=0;
      }
      else{
        smallest=c;
        c=0;
      }
      if(a!=0)
        mid=a;
      if(b!=0)
        mid=b;
      if(c!=0)
        mid=c;*/
      //printf("%ld %ld %ld\n",largest,mid,smallest);
      while(largest>0||mid>0||smallest>0)
      {
        int j,k;
        largest--;
        mid--;
        if(mid<0||largest<0)
          break;
        steps+=1;
      //  printf("steps: %ld\tlargest= %ld\tsmallest=%ld\tmid=%ld\n",steps,largest,smallest,mid);
        if(mid<smallest)
        {
          j=smallest;
          smallest=mid;
          mid=j;
        }
        if(mid>largest)
        {
          k=largest;
          largest=mid;
          mid=k;
        }
      }
    printf("%ld\n",steps*2);
  }
}
