#include<stdio.h>
void main()
{
    int i,n,sum=0,count=0;
    scanf("%d",&n);
    for(i=1;i>0;i++)
    {
        if(i%2==0)
        {
            printf("the even numbers are :%d\n",i);
            sum=sum+i;
            count++;
        }
        if(count==n)
        {
             break;
        }
    }   
    printf("the sum of even numbers are :%d",sum);
}