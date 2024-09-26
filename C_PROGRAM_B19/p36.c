#include<stdio.h>
void modifyvalue(int*ptr)
{
*ptr=20;
}
int main()
{
int num=10;
printf("before modify %d\n",num);
modifyvalue(&num);
printf("after modify %d\n",num);
return 0;
}

