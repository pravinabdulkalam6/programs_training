#include<stdio.h>
void main()
{
int age;
scanf("%d",&age);
if(age<18)
printf("junior");
else if(age>=18 && age<=66)
printf("adult");
else
printf("senior");
}
