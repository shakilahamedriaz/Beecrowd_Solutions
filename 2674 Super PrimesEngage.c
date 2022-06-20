#include<stdio.h>
int mian(){

int n;
printf("Enter a number : ");
scanf("%d",&n);

if(n%2!=0){
   int  then =n/10;
   float and=n%10;
   if(then%2!=0 && and%2!=0){
    printf("Super\n");

   }

}






return 0;
}
