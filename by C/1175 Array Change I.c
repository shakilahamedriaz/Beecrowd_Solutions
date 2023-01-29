#include <stdio.h>
int main() {

   int i,n[20],j=20;
    for(i=0; i<20; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0; i<20; i++)
    {
        --j;
        printf("N[%d] = %d\n",i,n[j]);
    }
    return 0;
}
