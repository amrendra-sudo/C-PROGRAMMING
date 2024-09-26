#include<stdio.h>
float si(float principle,float rate,int time);
float si(float principle,float rate,int time)
{
return (principle*rate*time)/100;
}
int main()
{
float x,y;
int z;
float result;
printf("enter the p,r,t values\n");
scanf("%f%f%d",&x,&y,&z);
result=si(x,y,z);
printf("the final simple interest %f\n",result);
return 0;
}

