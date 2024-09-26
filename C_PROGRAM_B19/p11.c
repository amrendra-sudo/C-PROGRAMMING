#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
{
printf("the character is a vowel\n");
}
else if (ch>=0 && ch<=9)
{
printf("the character is digit\n");
}
else
{
printf("the character is neither vowel nor digit\n");
}
return 0;
}

