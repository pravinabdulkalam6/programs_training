#include<stdio.h>
void main()
{
    float gpa;
    scanf("%f",&gpa);
    if (gpa<2.0)
    {
        printf("academic probation");
    }
    else
    {
        printf("good standing");
    }
    
}