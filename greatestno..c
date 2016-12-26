#include<stdio.h>
void main()
{

int num1,num2,num3;
scanf("%d%d%d",&num1,&num2,&num3);
if((num1>num2)&&(num1>num3))
printf("first number is the greatest number\n");
else if((num2>num1)&&(num2>num3))
printf("second number is the greatest number\n");
else
printf("third number is the greatest number\n ");
}
