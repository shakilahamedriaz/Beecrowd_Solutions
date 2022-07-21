#include<stdio.h>
int main()
{

    int n,i,count;
    scanf("%d",&n);

    int first=n/10;
    int last=n%10;

    count = 0;

    if(n == 1 || n == 0){
        count = 1;
    }

        for(i=2; i<=n/2; i++)
        {

            if(n%i==0)
            {

                count++;
                break;
            }
        }
        if(count==0)
        {

            printf("Primo\n");
        }
        else
        {
            printf("Nada\n");
        }



    return 0;
}
