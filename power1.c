#include<stdio.h>
#include<math.h>
void main()
{

double base,expo,result;
printf("\n enter the value of base");
scanf("%lf",&base);
printf("\n enter the value of power");
scanf("%lf",&expo);
result=pow(base,expo);
printf("Result=%lf",result);
}
