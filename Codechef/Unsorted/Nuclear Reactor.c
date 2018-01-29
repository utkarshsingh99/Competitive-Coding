#include <stdio.h>
int main()
{
  int max_limit,num_reactors,tot_particles,reactor[100],part_curr_chamb;
  scanf("%d %d %d",&tot_particles,&max_limit,&num_reactors);
  for(int i=1;i<num_reactors;i++)
  {
    reactor[i]=(part_curr_chamb/max_limit)%max_limit;
    part_curr_chamb=
  }
}
