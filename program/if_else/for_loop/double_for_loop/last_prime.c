#include<stdio.h>
void main()
{
    int i,n,count,j;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
        {
        printf("%d",i);
        break;
        }
    }
}