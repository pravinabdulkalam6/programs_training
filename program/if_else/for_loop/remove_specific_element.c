#include<stdio.h>
void main()
{
     int i,n,element;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&element);
for(i=0;i<n;i++)
{
if(a[i]!=element)
printf("%d \n",a[i]);
}
}