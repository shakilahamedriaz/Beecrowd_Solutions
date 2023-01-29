#include <stdio.h>

int main()

{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("%d",a);
        printf(" eh o maior");
    }
    else if(b>a && b>c){
        printf("%d",b);
        printf(" eh o maior");

    }
    else if(c>a && c>b){
        printf("%d",c);
        printf(" eh o maior");
    }


    return 0;
}
