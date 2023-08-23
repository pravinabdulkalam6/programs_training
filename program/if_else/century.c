#include<stdio.h>
void main()
{
    int year;
    scanf("%d",&year);
    if(year%100==0)
    printf("century year");
    else
    printf("not a century year");
}