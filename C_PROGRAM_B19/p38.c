#include<stdio.h>
int sumofdigits(int n)
{
int sum=0;
while(n !=0)
{
sum=sum+(n%10);
n=n/10;
}
return sum;
}
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
int result;
result=sumofdigits(num);
printf("the sum of digits is:%d\n",result);
return 0;
}

