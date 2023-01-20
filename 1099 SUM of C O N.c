#include<stdio.h>
int main(){

int n,x,y,sum=0,l;
scanf("%d",&n);

for(int i=1; i<=n; i++){

    scanf("%d %d",&x,&y);

    if(x<y){
        for(int j=x+1; j<y; j++){
            if(j%2 !=0){

                sum+=j;
            }
        }
    }else if(x==y){

     printf("0\n");

    }

    else{
         for(int k=y+1; k<x; k++){
            if(k%2 !=0){


                sum+=k;
            }
        }


    }
    printf("%d",sum);

}


return 0;
}
