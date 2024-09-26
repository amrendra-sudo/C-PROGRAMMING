#include<stdio.h>
int main()
{
int n;
int i;
float price;
float finalamt;
float total;
printf("enter the total number of items");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("enter the price of item %d:$",i+1);
scanf("%f",&price);
total=total+price;
}
if (total>100)
{
finalamt=(10/100.0)*total;
printf("received 10 percent discount\n");
}
else
{
finalamt=total;
}
printf("the final amount to be paid:%f\n",finalamt);
return 0;
}
