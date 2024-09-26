#include<stdio.h>
int main()
{
int age;
printf("enter the age");
scanf("%d",&age);
if (age<25 || age>=60)
{
printf("the person is eligible for discount\n");
}
else
{
printf("the person is not eligible for discount\n");
}
return 0;
}

