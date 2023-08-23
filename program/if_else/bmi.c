#include<stdio.h>
void main()
{
double bmi;
int height,weight;
printf("height\n");
printf("weight");
scanf("%d%d",&height,&weight);
bmi=weight/(height*weight);
if(bmi<18.5)
printf("underweight");
else if(bmi>=18.5&&bmi<=24.9)
printf("normal");
else if(bmi>=25 && bmi<=29.9)
printf("overweight");
else
printf("obese");
}
