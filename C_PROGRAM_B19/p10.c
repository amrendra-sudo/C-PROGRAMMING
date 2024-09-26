#include<stdio.h>
int main()
{
int num;
printf("enter the number ");
scanf("%d",&num);
if ( num>0 && num%3==0)
{
printf("the number is divisible by 3 and is a positive number");
}
else
{
printf("%d",num);
}
return 0;
}


