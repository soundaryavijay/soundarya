#include<stdio.h>
void main()
{
int limit,a[50],i;
printf("\n Enter the limit:");
scanf("%d",&limit);
a[0]=0;
a[1]=1;
for(i=2;i<limit;i++)
{
a[i]=a[i-1]+a[i-2];

}

for(i=0;i<limit;i++)
{
printf("%d ",a[i]);
}
}
