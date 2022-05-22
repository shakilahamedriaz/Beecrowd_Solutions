#include<stdio.h>
int main(){
int N,i,s;
scanf("%d",&N);

for(i=1; i<=10; i++){

    s=i*N;
    printf("%d x %d =%d\n",i,N,s);

}



return 0;
}
