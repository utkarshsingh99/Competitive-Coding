    #include <stdio.h>
    int main() {
      int t,i=0;
      char a;
      scanf("%d",&t);
	  for(;i<t;)
	  {
        i+=1;
        scanf(" %c",&a);
        if(a=='b'||a=='B')
          printf("BattleShip\n" );
        else if(a=='c'||a=='C')
          printf("Cruiser\n");
        else if(a=='D'||a=='d')
          printf("Destroyer\n" );
        else if(a=='F'||a=='f')
          printf("Frigate\n" );

      }
      return 0;
    }
a
