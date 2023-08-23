#include<stdio.h>
void main()
{
    double bill,unit;
    scanf("%d",&unit);
    if(unit<=50)
        bill=unit*0.50;
    if(unit>50 && unit<=150)
    bill=(unit-50)*0.75;
    
}