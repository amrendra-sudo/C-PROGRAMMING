#include<stdio.h>
int isprime(int n)
{
int i;
for (i=2;i*i<=n;i++)
{
if (n%i==0)
{
printf("number is not prime");
return 0;
}
}
return 9;
}
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if (isprime(num))
{
printf("%d number is prime\n",num);
}
else
{
printf("%d number is not prime\n",num);
}
return 0;
}

