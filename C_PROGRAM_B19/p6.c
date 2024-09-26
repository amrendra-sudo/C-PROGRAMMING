#include<stdio.h>
int main()
{
char a;
char b;
printf("enter first character");
scanf("%c",&a);
getchar();
printf("enter second character");
scanf("%c",&b);
if (a==b)
{
printf("the characters are equal");
}
else
{
printf("the characters are not equal");
}
return 0;
}

