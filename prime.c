#include<stdio.h>
void main()
{
int n,i,temp=0;
printf("Enter the number\n");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
temp=1;
break;
}
}
if(temp==0)
printf("It is a prime number");
else
printf("It is not a prime number ");
}
