#include<stdio.h>
int main(){

int x,y;
scanf("%d %d",&x,&y);

if(x==y){
    printf("O JOGO DUROU %d HORA(S)\n",24-x+y);

}
else if(x<=y){
    printf("O JOGO DUROU %d HORA(S)\n",y-x);
}
else{
    printf("O JOGO DUROU %d HORA(S)\n",24-x+y);// 24-2+16=
}


return 0;
}
