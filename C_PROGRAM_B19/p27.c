#include<stdio.h>
int main()
{
int days;
int years;
int months;
int remainingdays;
printf("enter number of days");
scanf("%d",&days);
years=days/365;
days=days % 365;
months=days/30;
remainingdays=days % 30;
printf("%d years,%d months,%d days\n",years,months,remainingdays);
return 0;
}

