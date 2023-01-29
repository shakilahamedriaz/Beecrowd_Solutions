#include<stdio.h>

int main()
{

    int n;
    for(;; )
    {
        scanf("%d",&n);

        if(n!=2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {

            printf("Acesso Permitido\n");

            break;
        }

    }


    return 0;
}
