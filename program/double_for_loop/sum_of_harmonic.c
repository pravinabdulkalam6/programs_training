#include<stdio.h>
void main()
{
    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("%lf",sum);
}