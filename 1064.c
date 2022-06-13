#include<stdio.h>
int main(){

float n,i,count=0,average,sum=0;
      for(i=1; i<=6; i++){

         scanf("%f",&n);

         if(n>0){

          count++;
          sum=sum+n;
    }

}
  average=sum/count;
  printf("%.f valores positivos\n",count);
  printf("%.1f\n",average);

return 0;
}
