#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    int temp,count=0,n,power;
    scanf("%d",&n);
    for(temp=n;temp!=0;temp=temp/10)
    {
        count++;
    }
    power=pow(10,count-1);
    printf("last digit is :%d\n",n%10);
    printf("first digit is :%d",n/power);
}