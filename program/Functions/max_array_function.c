#include<stdio.h>
int ismax()
{
    int n,i,max;
    scanf("%d",&n);
    int a[50];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
void main()
{
    int v;
    v=ismax();
    printf("%d",v);
}