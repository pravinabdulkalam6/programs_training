#include<stdio.h>
int issmall()
{
    int i,n,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    return min;
}
void main()
{
    printf("%d",issmall());
}