#include<stdio.h>
void main()
{
int num,i,fact=1;
scanf("%d",&num);
for(i=2;i<=num;i++)
{
fact=fact*i;
}
printf("the factorial of %d is %d",num,fact);
}
