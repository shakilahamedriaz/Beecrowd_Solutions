#include <stdio.h>


int main(){

    int x,t;
    scanf("%d",&x);
    printf("%d",x/3600);

    t=x%3600;
    printf(":%d",t/60);

    t=t%60;
    printf(":%d\n",t/1);


    return 0;
}
