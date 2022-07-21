#include<stdio.h>

int mian(){

int i,t,n,c1=0,c2=0,c3=0,c4=0;
scanf("%d",&t);

for(i=0; i<t; i++){

    scanf("%d",&n);

    if(n%2==0) c1++;
    if(n%3==0) c2++;
    if(n%4==0) c3++;
    if(n%5==0) c4++;


}
    printf("%d Multiplo(s) de 2\n",c1);
    printf("%d Multiplo(s) de 3\n",c2);
    printf("%d Multiplo(s) de 4\n",c3);
    printf("%d Multiplo(s) de 5\n",c4);


return 0;
}
