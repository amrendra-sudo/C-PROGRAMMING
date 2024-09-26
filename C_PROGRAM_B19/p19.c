#include<stdio.h>
int sqr(int a)
{
int square=a*a;
return square;
}
int main()
{
int x,y;
printf("enter the number\n");
scanf("%d",&x);
y=sqr(x);
printf("the square of the number is=%d\n",y);
return y;
}



