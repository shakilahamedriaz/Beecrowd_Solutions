#include<stdio.h>
int main(){


double i,b=1,c,S=0;

for(i=1; i<=39; i+=2){


   c=i/b;
   S=S+c;

   b*=2;// b=B*2;

}

printf("%.2lf\n",S);



return 0;
}
