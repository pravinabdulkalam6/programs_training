#include<stdio.h>
void main()
{
    int i,j,start,end,count;
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        printf("%d is prime \n",i);
        else
        printf("%d is not a prime \n",i);
    }
}