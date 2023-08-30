#include<stdio.h>
void iswhole()
{
    int val,n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    val=0;
    for(i=0;i<n;i++)
    {
        val=val*10+a[i];
    }
    printf("%d",val);
}
void main()
{
    iswhole();
}