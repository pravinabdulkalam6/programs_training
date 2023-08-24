#include<stdio.h>
double isareacircle()
{
    double pi=3.14,area;
    int radius;
    scanf("%d",&radius);
    area=pi*radius*radius;
    return area;
}
void main()
{
printf("%.2lf",isareacircle());
}
    

