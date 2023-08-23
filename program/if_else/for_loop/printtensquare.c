#include<stdio.h>
void main()
{
    int i,n;
    int count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i*i);
        count++;
        if(count==n)
        break;
    }
}