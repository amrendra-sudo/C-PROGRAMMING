#include<stdio.h>
float si(float principle,float rate,int time);
float si(float principle,float rate,int time)
{
return (principle*rate*time);
}
int main()
{
float x,y;
int z;
float result;
printf("enter p,r,t values\n");
scanf("%f%f%d",&x,&y,&z);
result=si(x,y,z);
printf("the simple interest of the above values are %f\n",result);
return 0;
}

