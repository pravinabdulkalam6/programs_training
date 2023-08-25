#include<stdio.h>
int isareatriangle()
{
    int b,h;
    float area;
    scanf("%d%d",&b,&h);
    area=(b*h)/2;
    printf("%.2f",area);
}
void main()
{
    isareatriangle();
}