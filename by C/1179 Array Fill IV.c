#include<stdio.h>
int main()
{

    int n,i,e[5],o[5],a=0,x,b=0,y;

    for(i=0; i<15; i++)
    {
        scanf("%d",&n);


        if(n%2==0)
        {
            e[a]=n;
            a++;
            if(a==5)
            {
                for(x=0; x<5; x++)
                {
                    printf("par[%d] = %d\n",x,e[x]);
                    e[x]=0;
                    a=0;
                }
            }


        }
        else
        {
            o[b]=n;
            b++;
            if(b==5)
            {
                for(y=0; y<5; y++)
                {
                    printf("impar[%d] = %d\n",y,o[y]);
                    o[y]=0;
                    b=0;
                }
            }

        }

    }
    for(y=0; y<5; y++)
    {

        if(o[y]==0) break;
        printf("impar[%d] = %d\n",y,o[y]);
    }
    for(x=0; x<5; x++)
    {

        if(e[x]==0) break;
        printf("par[%d] = %d\n",x,e[x]);
    }

    return 0;
}
