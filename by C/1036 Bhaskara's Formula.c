#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,x,y,z;
    scanf("%lf %lf %lf",a,b,c);

    z=(b*b)-(4*a*c);
    x=(-b+sqrt(z))/(2*a);
    y=(-b-sqrt(z))/(2*a);

    if(a!=0 && z>0){

        printf("R1 = %.5lf\nR2 = %.5lf\n",x,y);

    }
    else printf("Impossivel calcular\n");



    return 0;
}
