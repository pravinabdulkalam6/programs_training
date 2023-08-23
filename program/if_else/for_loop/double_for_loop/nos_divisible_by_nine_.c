#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=100;i<=200;i++)
    {
        if(i%9==0)
        {
        printf("%d is divisible by 9\n",i);
        sum=sum+i;
        }
    }
    printf("the sum of these numbers are :%d",sum);
}