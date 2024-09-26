#include<stdio.h>
int main()
{
float amt;
float finalamt;
printf("enter the purchase amount");
scanf("%f",&amt);
if (amt>200)
{
finalamt=(5/100)*amt;
printf("received 5 percent discount\n");
}
else
{
finalamt=amt;
}
printf("the final amount of purchase:$%.2f\n",finalamt);
return 0;
}

