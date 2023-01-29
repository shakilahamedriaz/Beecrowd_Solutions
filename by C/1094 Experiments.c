#include<stdio.h>


int mian()
{

    int t,n,sum=0,sum1=0,sum2=0,sum3;
    double x,y,z; char h;

    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        scanf("%d %c",&n,&h);

        if('C'== h)
        {

            sum=sum+n;
        }
        if('R'== h)
        {
            sum1=sum1+n;
        }
        if('S'== h)
        {
            sum2=sum2+n;
        }
    }

    sum3=sum+sum1+sum2;

    x=(sum/(sum3*1.0))*100.00;
    y=(sum1/(sum3*1.0))*100.00;
    z=(sum2/(sum3*1.0))*100.00;


    printf("Total: %d cobaias\n",sum3);
    printf("Total de coelhos: %d\n",sum);
    printf("Total de ratos: %d\n",sum1);
    printf("Total de sapos: %d\n",sum2);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de coelhos: %.2lf %%\n",y);
    printf("Percentual de coelhos: %.2lf %%\n",z);


    return 0;
}
