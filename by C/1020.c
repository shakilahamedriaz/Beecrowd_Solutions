#include <stdio.h>

int main()
{

    int day,y;
    scanf("%d",&day);
    printf("%d ano (s)\n",day/365);


    printf("%d mes (es)\n",(day%365)/30);


    printf("%d dia (s)\n",(y%30)/1);


    return 0;
}

