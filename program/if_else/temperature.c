#include<stdio.h>
void main()
{
    int choice,temperature;
    float fahreinheit,celsius;
    scanf("%d%d",&choice,&temperature);
    if(choice==1)
    {
        fahreinheit=((temperature*9)/5)+32;
        printf("%f",fahreinheit);
    }
    else
    celsius=((temperature-32)*5)/9;
    printf("%f",celsius);
}