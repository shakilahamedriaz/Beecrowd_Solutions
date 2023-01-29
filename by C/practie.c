#include <stdio.h>
int main()
{

int num;
float num2;
char charVariable;

printf("Please Enter one integer:");
scanf("%d",&num);

printf("Please Enter one floating number:");
scanf("%f",&num2);

printf("please give any character:");

scanf("%c", &charVariable);

printf("The things youve given are: %d %f",num,num2);
printf("%c",charVariable);

return 0;


}
