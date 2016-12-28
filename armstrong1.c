#include<stdio.h>
void main()
{
int x,y,i,rem,sum,temp;
printf("\n Enter the values of x and y");
scanf("%d %d",&x,&y);

for(i=x;i<=y;i++)
{
temp=i;
sum=0;
while(temp>0)
{
rem=temp%10;
sum=sum+(rem*rem*rem);
temp=temp/10;
}

if(i==sum)
printf("%d ",i);
}
}
