#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {

        int a[12];
        int n;
        scanf("%d",&n);
        for(int j=0; j<n; j++)
        {

            scanf("%d",a[j]);
        }

        printf("Case %d: %d\n",i,a[n/2]);
    }

    return 0;
}
