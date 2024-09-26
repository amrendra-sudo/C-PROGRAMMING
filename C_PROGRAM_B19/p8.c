#include<stdio.h>
int main()
{
int a;
int b;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
int sum=a+b;
if (sum<=50)
{
printf("the sum is less than or equal to 50\n");
}
else 
{
printf("%d",sum);
}
return 0;
}

