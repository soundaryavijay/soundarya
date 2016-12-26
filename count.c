#include<stdio.h>
void main()
{
int num,count=0;
printf("Enter the integer\n");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
count++;


}

printf("the number of digit is %d",count);

}
