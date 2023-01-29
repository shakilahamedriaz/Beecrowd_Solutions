#include <stdio.h>
int main(){

int l,c;
scanf("%d %d",&l,&c);

if(l==1 && c==1){
    printf("1\n");
}
if ((l%2==0 && c%2==0) || (l%2!=0 && c%2!=0)){
    printf("1\n");
}

if(l%2!=0 || c%2!=0){
    printf("0\n");
}
else{
printf("0\n");
       }

return 0;

}
