#include <stdio.h>
int main()
{
    double sum=0.0, M[12][12];
    char T[2];
    int L,r,c;
    scanf("%d %s", &L, &T);

    for(r=0; r<12;r++)
    {
        for(c=0; c<12; c++)
        {
        scanf("%lf", &M[r][c]);


    }
    }
    for(c=0; c<12; c++){

       sum+=M[L][c];
    }
    if(T[0]=='S')

        printf("%.1lf\n",sum);

    else if(T[0]=='M')
    {

        printf("%.1lf\n",sum/12);
    }
    return 0;
}
