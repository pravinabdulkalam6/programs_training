#include<stdio.h>
void main()
{
    int i,n,mul=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        mul=mul*a[i];
    }
    printf("%d",mul);
}