#include<stdio.h>
int main()
{
int len,brt;
printf("enter the length of triangle");
scanf("%d",&len);
printf("enter the breadth of rectangle");
scanf("%d",&brt);
if (len>0 && brt>0)
{
printf("length and breadth are positive\n");
}
else
{
printf("error");
}
return 0;
}

