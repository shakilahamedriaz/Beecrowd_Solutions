#include<stdio.h>
int main()
{

    int x,y;
    for(;;)
    {

        scanf("%d %d",&x,&y);

        if(x==y) break;


        if(x>y)
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }
    }

    return 0;
}
