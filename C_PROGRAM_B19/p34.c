#include<stdio.h>
int main()
{
int n;
int rn=0;
int remainder;
printf("enter the number");
scanf("%d",&n);
while (n!=0)
{
remainder=n%10;
rn=rn*10+remainder;
n=n/10;
}
printf("reversed number: %d\n",rn);
return 0;
}

