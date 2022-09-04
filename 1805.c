#include<stdio.h>
int main(){


long long int sum=0,a,b;
scanf("%lld %lld",&a,&b);

sum=(a + b) * (b-a+1)/2;


printf("%lld\n",sum);

return 0;
}
