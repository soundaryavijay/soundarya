#include<stdio.h>
void main()
{
int interval1,interval2,i;
printf("Enter the interval:\n");
scanf("%d%d",&interval1,&interval2);
printf("series of odd nuber:");
for(i=interval1;i<=interval2;i++)
{
if((i%2)==1)
{
    printf("%d",i);
    printf("  ");
}

}
}
