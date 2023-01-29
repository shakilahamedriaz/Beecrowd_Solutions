#include <stdio.h>
int main(){
    int M,N,sum=0,i;
    scanf("%d%d",&M,&N);
    int min,max;

     if(M<=0 || N<=0){
        printf("");
        }



    if else(M<N){
        min=M;
        max=N;
    }

    else {
        max=M;
        min=N;
    }
    for(i=min;i<=max;++i)
    {
        printf("%d ",i);
        sum += i;
    }
    printf("Sum=%d\n",sum);

return 0;
}
