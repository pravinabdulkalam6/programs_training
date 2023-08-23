#include<stdio.h>
void main()
{
    float temperature;
    scanf("%f",&temperature);
    if(temperature>=37.5)
    printf("fever");
    else
    printf("no fever");
}