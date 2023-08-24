#include<stdio.h>
void main()
{
    double i,sum;
    int count,n;
    scanf("%d",&n);
    sum=0;
    count=0;
    for(i=1.2;i>0;i=i+1.1)
    {
        sum=sum+i;
        count++;
        if(count==n)
        break;
    }
    printf("%.2lf",sum);
}