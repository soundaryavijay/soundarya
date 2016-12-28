#include<stdio.h>
void main()
{
int table,i,result;
printf("Enter the value of table: ");
scanf("%d",&table);
for(i=1;i<=10;i++)
{

result=table*i;


printf("%d*%d=%d\n",i,table,result);

}

}
