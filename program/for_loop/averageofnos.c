#include<stdio.h>
void main()
{
    int i,n,average;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    average=0;
    for(i=0;i<n;i++)
    {
        average=(average+a[i]);
    }
    printf("%d",average/n);
}