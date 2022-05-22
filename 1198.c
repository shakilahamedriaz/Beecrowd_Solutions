#include<stdio.h>
int main(){

long long x,y;
while(scanf("%lld",&x)!= EOF){
    scanf("%lld",&y);

 if(x<y){
    printf("%lld\n",y-x);
 }else{
   printf("%lld\n",x-y);
 }

}
return 0;
}
