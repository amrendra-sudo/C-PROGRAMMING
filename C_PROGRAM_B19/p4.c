#include<stdio.h>
int main()
{
int days;
printf("enter number of days in year");
scanf("%d",&days);
if (days==366)
{
printf("the year is leap year\n");
}
else if (days==365)
{
printf("the year is not a leap year\n");
}
else
{
printf("error\n");
}
return 0;
}


