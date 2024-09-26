#include<stdio.h>
int main()
{
int i;
int n;
int num;
int largest;
int smallest;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter number 1:");
scanf("%d",&num);
largest=smallest=num;
for (i=2;i<=n;i++)
{
printf("enter the number %d:",i);
scanf("%d",&num);
if (num>largest)
{
largest=num;
}
if (num<smallest)
{
smallest=num;
}
}
printf("largest number: %d\n",largest);
printf("smallest number: %d\n",smallest);
return 0;
}

