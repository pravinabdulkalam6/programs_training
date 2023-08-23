#include<stdio.h>
void main()
{
    int i,n,table;
    scanf("%d",&n);
        for(i=1;i<=16;i++)
    {
        table=1;
        table=table*n*i;
        printf("%d*%d=%d",i,n,table);
        printf("\n");
    }
}
