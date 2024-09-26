#include<stdio.h>
int main()
{
int n1;
int n2;
char operation;
double result;
printf("enter first number:");
scanf("%d",&n1);
printf("enter second number:");
scanf("%d",&n2);
printf("enter the operation:");
scanf("%c",&operation);
if (operation=='+')
{
result=n1+n2;
}
else if (operation=='-')
{
result=n1-n2;
}
else if (operation=='*')
{
result=n1*n2;
}
else if (operation=='/')
{
result=n1/n2;
}
else if (operation=='%')
{
result=n1%n2;
}
else 
{
printf("invalid operation");
}
printf("%f",result);
return 0;
}

