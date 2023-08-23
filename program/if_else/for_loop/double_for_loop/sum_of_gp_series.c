#include<stdio.h>
void main()
{
    int i,start,number,val=1,diff,count=0;
    scanf("%d%d%d",&start,&number,&diff);
    for(i=start;i>0;i=i+diff)
    {
        val=val*i*diff;
        count++;
        if(count==number)
        break;
    }
    printf("%d",val);
}