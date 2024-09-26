#include<stdio.h>
int main()
{
int n1;
int n2;
int n3;
printf("enter three numbers");
scanf("%d%d%d",&n1,&n2,&n3);
if (n1>n2 && n1>n3)
{
printf("n1 is the largest number");
}
else if (n2>n1 && n2>n3)
{
printf("n2 is the largest number");
}
else
{
printf("n3 is the largest number");
}
return 0;
}

