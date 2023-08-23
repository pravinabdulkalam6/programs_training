#include<stdio.h>
void main()
{
    int i,start,number,sum=0,diff,count=0;
    scanf("%d%d%d",&start,&number,&diff);
    for(i=start;i>0;i=i+diff)
    {
        sum=sum+i+diff;
        count++;
        if(count==number)
        break;
    }
}