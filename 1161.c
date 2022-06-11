#include<stdio.h>
int main(){

int i,j,M,N,sum=1,sum2=1,total;
scanf("%d%d",&M,&N);

for(i=1,j=1; i<=M,j<=N; i++,j++){

    sum*=i;
    sum2*=j;

}
total=sum+sum2;
printf("%d\n",total);

return 0;
}
