#include<stdio.h>
void main()
{
    int j,i,start,end,sum;
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        sum=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            sum=sum+j;
        }
        if(sum==i)
        printf("%d is perfect number \n",i);
    }
}