#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,sum;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=0;
        sum=sum+(pow(10,i)+1);
    }
    printf("%d",sum);
}