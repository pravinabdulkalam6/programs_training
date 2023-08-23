#include<stdio.h>
void main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            printf("%d",j);
        }
         printf("\n");
    }
}