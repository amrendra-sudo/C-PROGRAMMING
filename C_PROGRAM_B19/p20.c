#include<stdio.h>
void even(int a)
{
int e=a%2;
if(e==0)
{
printf("the number is even\n");
}
else
{
printf("the number is odd\n");
}
}
int main()
{
int number;
scanf("%d",&number);
even(number);
return 0;
}


