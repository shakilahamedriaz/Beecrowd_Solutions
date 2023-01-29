#include <Stdio.h>
int main(){

float a,b;
int n,x;
scanf("%f",&a);

printf("NOTAS:\n");
n=a/100;
printf("%d nota(s) de R$ 100.00\n",n);
n=n%100;
printf("%d nota(s) de R$ 50.00\n",n/50);
n=n%50;
printf("%d nota(s) de R$ 20.00\n",n/20);
n=n%10;
printf("%d nota(s) de R$ 10.00\n",n/10);
n=n%5;
printf("%d nota(s) de R$ 5.00\n",n/5);
n=n%2;
printf("%d nota(s) de R$ 2.00\n",n/2);

printf("MOEDAS:\n");
b=n;
printf("%d moeda(s) de R$ 1.00\n",n/1);
n=(n%0.50);
printf("%d moeda(s) de R$ 0.50\n",n/0.50);
n=n%25;
printf("%d moeda(s) de R$ 0.25\n",n/25);
n=n%10;
printf("%d moeda(s) de R$ 0.10\n",n/10);
n=n%5;
printf("%d moeda(s) de R$ 0.05\n",n/5);
n=n%1;
printf("%d moeda(s) de R$ 0.0\n",n/1);


return 0;
}
