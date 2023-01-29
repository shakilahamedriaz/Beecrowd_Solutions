#include<stdio.h>
int main(){

int n,i;
float x,y;
scanf("%d",&n);

for(i=1; i<=n; i++){

    scanf("%lf",&x);
    y=((x*2)+(x*3)+(x*5))/10.0;
    printf("%f",y);
}




return 0;
}
