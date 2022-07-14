#include<stdio.h>
int main(){

int x[150],i,n,min=0;

scanf("%d",&n);

for(i=0; i<n; i++){

    scanf("%d",&x[i]);

}

for(i=1; i<n; i++)
{
    if(x[min]>x[i])
    {
        min=i;

    }

}
printf("%d\n",min+1);

return 0;
}
