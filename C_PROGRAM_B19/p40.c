#include<stdio.h>
int main()
{
int base;
int exponent;
long long result=1;
int i;
printf("enter the base:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
for (i=1;i<=exponent;i++)
{
result=result*base;
}
printf("%d%d = %lld\n",base,exponent,result);
return 0;
}


