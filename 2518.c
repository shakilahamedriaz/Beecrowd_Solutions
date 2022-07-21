#include<stdio.h>


int main(){

    int n,h,c,l,x;
    while(
    scanf("%d %d %d %d",&n,&h,&c,&l)
){


   printf("%.4f\n", (n * 1.0 * sqrt(c*c + h*h) * l) / 10000.0);


}

    return 0;
}
