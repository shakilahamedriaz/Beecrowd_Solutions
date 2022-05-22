#include <stdio.h>
int main(){

   float a,b;
   scanf("%f",&a);

   if(a>=0 && a<=400)
   {
       b=a+0.15;
       printf("Novo salario:%f\n"b);

    //   printf("Reajuste ganho:\n",a*15%);
      // printf("Em percentual: 15 %\n");
   }
    else if(a>0 && a<800)
    {
       printf("Novo salario:\n");
      // printf("Reajuste ganho:\n",a*12%);
      // printf("Em percentual: 12 %\n");
    }




return 0;

}
