#include<stdio.h>
int main(){

int N,i,x,p;
scanf("%d",&N);

for(i=1; i<=N; i++){

    if(i%2==0){
        p=pow(i,2);
        printf("%d^2 = %d\n",i,p);
    }
}

return 0;
}
