#include<stdio.h>
int main()
{
int temp;
float tempf;
printf("enter the temperature in celsius");
scanf("%d",&temp);
tempf=(9/5)*temp+32;
printf("the temperature in fahrenheit %f\n",tempf);
return 0;
}

