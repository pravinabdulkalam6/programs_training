#include<stdio.h>
void main()
{
    int i,n,temp,rev=0,rem;
    scanf("%d",&n);
    for(temp=n;temp!=0;temp=temp/10)
    {
        rem=temp%10;
        rev=rev*10+rem;
    }
    if(rev==n)
    printf("%d is palindrome",n);
    else
    printf("%d is not a palindrome",n);
}