#include<stdio.h>
void main()
{
    int side1,side2,side3;
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side1==side3)
    printf("equilateral triangle");
    else if((side1==side2)||(side2==side3)||(side1==side3))
    printf("isosceles triangle");
    else
    printf("scalene triangle");
}