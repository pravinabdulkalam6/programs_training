#include<stdio.h>
void main()
{
    int i,n,j,temp=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",temp);
            temp++;
        }
        printf("\n");
    }
}