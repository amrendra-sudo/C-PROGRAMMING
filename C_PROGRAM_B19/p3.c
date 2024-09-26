#include<stdio.h>
int main()
{
float a;
float b;
printf("enter the first number");
scanf("%f",&a);
printf("enter the second number");
scanf("%f",&b);
if (a>b)
{
printf("a is the greatest\n");
}
else if (b>a)
{
printf("b is the greatest\n");
}
else 
{
printf("both the numbers are equal\n");
}
return 0;
}
