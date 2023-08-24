#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,series,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        series=pow(10,i)-1;
        sum=sum+series;
        printf("%d\t",series);
    }
    printf("%d",sum);
}