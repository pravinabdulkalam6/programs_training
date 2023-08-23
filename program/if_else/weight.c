#include<stdio.h>
void main()
{
double weight;
scanf("%lf",&weight);
if(weight<18.5)
printf("underweight");
else if(weight>=18.5 && weight<=24.9)
printf("normal weight");
else if(weight>=25 && weight<=24.9)
printf("overweight");
else
printf("obese");
}
