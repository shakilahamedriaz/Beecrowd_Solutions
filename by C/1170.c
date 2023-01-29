#include<stdio.h>
int main(){

int N,a,i;
float x;
scanf("%d",&N);
for(i=0; i<N; i++){
    scanf("%f",&x);
    a=0;
    while(x > 1){
        x /=2;
        a++;
    }
    printf("%d dias\n",a);
}

return 0;
}
