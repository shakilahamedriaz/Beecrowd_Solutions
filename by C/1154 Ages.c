#include <stdio.h>
int main()
{
    int i,b=0;
    double averae,count=0;
    while(1)
    {
        scanf("%d", &i);
        if(i<0)
            break;
        else
        {
            b+=i;
            count++;
        }
    }
    averae=b/count;
    printf("%.2lf\n",averae);
    return 0;
}

