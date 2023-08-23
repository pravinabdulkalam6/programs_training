#include<stdio.h>
void main()
{
    int i,temp,n,sum=0,rem;
    scanf("%d",&n);
    for(temp=n;temp!=0;temp=temp/10)
    {
        rem=temp%10;
        sum=sum+rem;
    }
    printf("%d",sum);

}