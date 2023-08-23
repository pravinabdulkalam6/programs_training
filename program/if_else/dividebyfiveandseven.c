#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    if(num%5==0 && num%7==0)
    printf("divisible by both 5 and 7");
    else
    printf("not divisible by both 5 and 7");
}