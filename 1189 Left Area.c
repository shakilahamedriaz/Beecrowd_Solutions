#include<stdio.h>
int main()
{


    int r,c,n=1,m=10;
    double M[12][12],sum=0.0;
    char o[2];
    scanf("%s",o);


    for(r=0; r<12; r++)
    {

        for(c=0; c<12; c++)
        {


            scanf("%lf",&M[r][c]);
        }
    }
    for(c=0; c<=5; c++)
    {
        for(r=n; r<=m; r++)
        {

            sum+=M[r][c];
        }
        n++;
        m--;
    }
    if(o[0]=='S')
    {
        printf("%.1lf\n",sum);

    }
    else if(o[0]=='M')
    {
        printf("%.1lf\n",sum/30.0);
    }



    return 0;

}

