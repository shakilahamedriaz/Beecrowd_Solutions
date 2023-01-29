#include<stdio.h>
int main(){


int T,n;
scanf("%d",&T);

for(int i=1; i<=T; i++){


    scanf("%d",&n);




    if(n==0)
          // int a=0;
          printf("Fib(0) = 0\n");

    else
        printf("Fib(%d) = %d\n",n,(n-1));


}




return 0;
}
