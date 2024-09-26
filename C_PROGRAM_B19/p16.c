#include<stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if (num%4==0 && num%6!=0)
{
printf("the number is divisible by 4 but not divisible by 6\n");
}
else
{
printf("error");
}
return 0;
}

