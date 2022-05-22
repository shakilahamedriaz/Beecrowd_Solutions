#include <stdio.h>
#include <math.h>

int main() {

     int a,b;
     scanf("%d %d",&a,&b);

     if(a>b){
         if(a%b == 0){
            printf("Sao Multipols\n");
         }
         else{
            printf("Nao sao Multipols\n");
         }
     }

     else{
        if(b%a==0){
            printf("Sao Multipols\n");
        }
        else{
            printf("Nao sao Multipols\n");
        }
     }

    return 0;
}
