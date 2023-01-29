/*#include<stdio.h>
int main(){

int i,j,M,N,sum=1,sum2=1,total;
scanf("%d %d",&M,&N);

for(i=1,j=1; i<=M,j<=N; i--,j--){

    sum*=i;
    sum2*=j;

}
total=sum+sum2;
printf("%d\n",total);

return 0;
}
*/



#include <stdio.h>
int main()
{
 long long int m, n, tmp, tmp2;
    int i;

 while(scanf("%lld %lld", &m, &n) != EOF)
 {
  tmp = 1;
  tmp2 = 1;
  for (i = m; i > 0; --i)
  {
   tmp *= m;
   m--;
  }

  for (i = n; i > 0; --i)
  {
   tmp2 *= n;
   n--;
  }

  printf("%lld\n", tmp + tmp2);
 }

 return 0;
}
