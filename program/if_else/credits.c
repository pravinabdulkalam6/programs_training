#include<stdio.h>
void main()
{
    int credits;
    scanf("%d",&credits);
    if(credits<600)
    printf("poor credits");
    else if(credits>=600 && credits<=699)
    printf("fair credits");
    else if (credits>=700 && credits>=799)
    printf("good credits");
    else
    printf("excellent credits");
}