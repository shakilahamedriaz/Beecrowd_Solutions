#include<stdio.h>
int main(){

int n,x,y,sum=0,l;
scanf("%d",&n);

for(int i=1; i<=n; i++){

    scanf("%d %d",&x,&y);

    if(x<y){
        for(int j=x; j<y; j++){
            if(j%2 !=0){

                sum+=j;
            }
        }
    }else{
         for(int j=y; j<x; j++){
            if(j%2 !=0){


                sum+=j;
            }
        }


    }
    printf("%d",sum);

}


return 0;
}
