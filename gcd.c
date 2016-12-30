#include<stdio.h>
void main()
{
int num1,num2,i,hcf;
printf("\n Enter the Two numbers:");
scanf("%d %d",&num1,&num2);
for(i=1;i<=num1&&i<=num2;i++)
{
if(num1%i==0&&num2%i==0)
{
hcf=i;
}
}
printf("\n HCF=%d",hcf);
}
