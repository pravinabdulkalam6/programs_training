#include<stdio.h>
void main()
{
 int sum=0;
int i,x,number,start,count=0;
    scanf("%d%d%d",&start,&number,&x);
    for(i=start;i>0;i=i*x)
    {
        sum=sum+i;
        count++;
        if(count==number)
        break;
    }
    printf("%d",sum);
}
