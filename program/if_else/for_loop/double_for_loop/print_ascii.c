#include<stdio.h>
void main()
{
    int i,start,end;
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        printf("%d>>%c\n",i,i);
    }
}