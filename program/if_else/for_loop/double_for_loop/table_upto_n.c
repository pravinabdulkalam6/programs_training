#include<stdio.h>
void main()
{
    int i,j,n,val;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            val=i*j;
            printf("%d*%d=%d \t",j,i,val);
        }
        printf("\n");
    }

}