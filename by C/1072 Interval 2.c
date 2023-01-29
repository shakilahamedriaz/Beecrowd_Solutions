#include<stdio.h>

int main(){

int n,x,i;
int in=0;
int out=0;
scanf("%d",&x);

for(i=1; i<=x; i++){

    scanf("%d",&n);

    if(n >=10 && n <=20){
        in++;
    }
    else{
        out++;
    }

}

printf("%d in\n", in);
printf("%d out\n", out);

return 0;
}
