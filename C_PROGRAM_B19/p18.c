#include<stdio.h>
int add(int a,int b)
{
int sum=a+b;
return sum;
}
int main()
{
int a,b;
printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
int result;
result=add(a,b);
printf("%d\n",result);
return result;
}


