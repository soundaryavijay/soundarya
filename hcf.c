#include<stdio.h>
void main()
{
int n1,n2,l,hcf;
printf("\n Enter the Two numbers:");
scanf("%d %d",&n1,&n2);
for(l=1;l<=n1&&l<=n2;l++)
{
if(n1%l==0&&n2%l==0)
{
hcf=l;
}
}
printf("\n HCF=%d",hcf);
}
