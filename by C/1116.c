#include <stdio.h>
int main(){

int i, N;
float X,Y;
scanf("%d",&N);

for(i=0; i<N; i++){
scanf("%f %f",&X,&Y);

if(X==0 && Y==0){
    printf("0.0\n");

}else if(Y==0){
   printf("divisao impossivel\n");
}
else if(X==0){
  printf("0.0\n");
}else{
  printf("%.1f",X/Y);
}
}
return 0;
}
