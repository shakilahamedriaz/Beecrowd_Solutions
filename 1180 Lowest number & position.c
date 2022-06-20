
#include<stdio.h>
int main(){

int i,x,j,temp,n;

int aray[100];
printf("Enter the size of array : ");
scanf("%d",&n);

for(i=0; i<n; i++){
   scanf("%d",&array[i]);
}

for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){


        if(a[i]>a[j]){


            temp=a[i];
            a[i]=a[j];
            a[j]=temp;




        }
    }
}

printf("Menor valor:%d\n",a[0]");






return 0;



}
