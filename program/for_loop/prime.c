#include<stdio.h>
void main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("%d is prime number",i-1);
    else
    printf("%d is not a prime number",i-1);
}