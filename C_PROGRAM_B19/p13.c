#include<stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if (num<0)
{
printf("the number is negative\n");
}
else if (num%3==0)
{
printf("the number is divisible by three\n");
}
else 
{
printf("the number is not negative or divisible by 3\n");
}
return 0;
}

