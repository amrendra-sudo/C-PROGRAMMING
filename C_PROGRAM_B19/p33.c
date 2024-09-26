#include<stdio.h>
int main()
{
float marks[5];
float total=0;
float percentage;
char grade;
int i;
printf("enter marks of 5 subjects\n");
for (i=0;i<5;i++)
{
printf("subject %d:",i+1);
scanf("%f",&marks[i]);
total +=marks[i];
}
percentage=(total/500)*100;
if (percentage>=90)
{
grade='A';
}
else if (percentage>=80)
{
grade='B';
}
else if (percentage>=70)
{
grade='C';
}
else if (percentage>=60)
{
grade='D';
}
else if (percentage<=50)
{
grade='E';
}
else
{
grade='F';
}
printf("\nTotal marks:%f\n",total);
printf("Percentage:%f\n",percentage);
printf("Grade:%c\n",grade);
return 0;
}

