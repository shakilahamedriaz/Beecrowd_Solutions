#include <stdio.h>
#include <math.h>

int main(){

  int R,L,v,v1;
  scanf("%d %d",&R,&L);

  v=4.0/3*3.1415*R*R*R;

  v1=L/v;
  printf("%d\n",v1);


  return 0;
}

