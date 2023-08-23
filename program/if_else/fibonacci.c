#include<stdio.h>
void main()
{
    int i,a,b,c,n;
    scanf("%d",&n);
    a=-1;
    b=1;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}