#include<stdio.h>
void main()
{
    int bought_price,sold_price;
    scanf("%d%d",&bought_price,&sold_price);
    if(bought_price==sold_price)
    printf("no profit or loss");
    if(bought_price<sold_price)
    printf("profit");
    else
    printf("loss");
}