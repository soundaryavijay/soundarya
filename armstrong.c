#include<stdio.h>
void main()
{
int num,temp,rem=0,sum=0;
printf("\n enter the number");
scanf("%d",&num);
temp=num;
while(num!=0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(temp==sum)
printf("It is a armstrong number");
else
printf("\n It is not an armstrong number ");
}
