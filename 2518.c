#include<stdio.h>
#include<math.h>

int main(){

    int N,H,C,L,x,x1,y;
    scanf("%d",&N);
    scanf( ("%d %d %d",&H,&C,&L) !=EOF);

   x=sqrt(H*H + C*C);

    x1= x*N;
    y=x1*L;

   float y1=y/10000.0;

    printf("%.4f\n",y1);


    return 0;
}
