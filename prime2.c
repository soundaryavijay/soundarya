#include<stdio.h>
void main()
{
int interval1,interval2,i,temp;
printf("Enter the interval:\n");
scanf("%d %d",&interval1,&interval2);
printf("series of prime nuber:");
while(interval1<interval2)
{
temp=0;
for(i=2;i<=interval1/2;++i)
{
if((interval1%i)==0)
{
temp=1;
break;

}

}if(temp==0)
printf("%d ",interval1);
++interval1;

}
}
