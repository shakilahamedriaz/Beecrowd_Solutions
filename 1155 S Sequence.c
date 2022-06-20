#include <stdio.h>
int main()
{
    double i,c,b=1 ,S=0;
    for(i=1; i<=100; i++)
    {
        c=b/i;
        S=S+c;// S+=c;
    }
    printf("%.2lf\n",S);
    return 0;
}
