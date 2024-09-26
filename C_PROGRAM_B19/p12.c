#include<stdio.h>
int main()
{
int a;
int b;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
if (a%2==0 && b%2==0)
{
printf("both the numbers are even\n");
}
else if (a%2!=0 && b%2!=0)
{
printf("both the numbers are odd\n");
}
else
{
printf("one number is even and the other is odd\n");
}
return 0;
}


