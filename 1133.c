#include <Stdio.h>
int main(){

    int X,Y,min,max,i;
    scanf("%d%d",&X,&Y);
    if(X<Y){
        max=Y;
        min=X;
    }else{
         max=X;
         min=Y;
    }
    for(i=(min+1); i<max;i++){

        if(i%5==2 || i%5==3){

            printf("%d ",i);
        }
    }



    return 0;
}
