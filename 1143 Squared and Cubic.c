
#include<stdio.h>
int main(){
int n,i,c,d;
scanf("%d",&n);

for(i=1; i<=n; i++){

    c=i*i;
    d=i*i*i;
    printf("%d %d %d\n",i,c,d);
}

return 0;
}
