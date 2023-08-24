#include<stdio.h>
#include<math.h>
void main()
{
    int temp,count=0,n,power,product;
    scanf("%d",&n);
    for(temp=n;temp!=0;temp=temp/10)
    {
        count++;
    }
    power=pow(10,count-1);
    product=(n%10)*(n/power);
    printf("%d",product);
}