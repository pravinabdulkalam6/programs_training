#include<stdio.h>
int sum=0;
int isaap()
{
    int i,x,number,start,count=0;
    scanf("%d%d%d",&start,&number,&x);
    for(i=start;i>0;i=i+x)
    {
        sum=sum+i;
        count++;
        if(count==number)
        break;
    }
    return sum;
}
void main()
{
    isaap();
    printf("%d",sum);
}
