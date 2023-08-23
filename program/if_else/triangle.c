#include<stdio.h>
void main()
{
    int angle1,angle2,angle3;
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3==180)
    printf("valid");
    else
    printf("not valid");
}