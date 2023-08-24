#include<stdio.h>
void main()
{
    int temp,rev=0,n,rem;
    scanf("%d",&n);
    for(temp=n;temp!=0;temp=temp/10)
    {
        rem=temp%10;
        rev=rev*10+rem; 
         }
    printf("%d",rev);
}